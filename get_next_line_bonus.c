/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <cmunoz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:58:55 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/11/10 11:54:39 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_read(int fd, char *storage)
{
	int		bytesr;
	char	*buffer;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	bytesr = 1;
	while (!ft_strchr(storage, '\n') && bytesr != 0)
	{
		bytesr = read(fd, buffer, BUFFER_SIZE);
		if (bytesr == -1)
		{
			free(buffer);
			free(storage);
			return (NULL);
		}
		buffer[bytesr] = '\0';
		storage = ft_strjoin(storage, buffer);
	}
	free (buffer);
	return (storage);
}

char	*get_next_line(int fd)
{
	static char	*storage;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	storage = ft_read(fd, storage);
	if (!storage)
		return (0);
	line = ft_get_line(storage);
	storage = ft_nextstr(storage);
	return (line);
}

// #include <fcntl.h>
// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int fd;
//     char *line;

//     fd = open("example.txt", O_RDONLY);
//     if (fd == -1)
//     {
//         perror("Error opening file");
//         return 1;
//     }
//     while ((line = get_next_line(fd)) != NULL)
//     {
//         printf("%s\n", line);
//         free(line);
//     }
//     close(fd);
//     return 0;
// }
