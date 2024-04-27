/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <cmunoz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:58:37 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/11/10 11:54:24 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10000000
# endif

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

char		*ft_strchr(char *s, int c);
char		*ft_strjoin(char *stor, char *buffer);
char		*ft_read(int fd, char *storage);
char		*get_next_line(int fd);
char		*ft_get_line(char *storage);
size_t		ft_strlen(char *e);
char		*ft_nextstr(char *storage);

#endif