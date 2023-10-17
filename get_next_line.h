/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschaafs <bschaafs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:48:21 by bschaafs          #+#    #+#             */
/*   Updated: 2023/10/17 17:57:33 by bschaafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 20
# endif

# define SIZE_OF_CHAR 8

# include <unistd.h>
# include <stdlib.h>

size_t	ft_strlen(const char *s);
int		ft_strchr(const char *str, char c);
char	*ft_strdup(char *buffer);
char	*ft_strjoin(char **temp, char *buffer);
char	*free_function(char **str);
char	*get_next_line(int fd);

#endif