/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <cmunoz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:59:14 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/11/10 12:59:54 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *stor, char *buffer)
{
	char		*storag;
	size_t		i;
	size_t		j;

	if (!stor)
	{
		stor = (char *)malloc(1 * sizeof(char));
		stor[0] = '\0';
	}
	if (!stor || !buffer)
		return (NULL);
	storag = malloc(sizeof(char) * ((ft_strlen(stor) + ft_strlen(buffer)) + 1));
	if (storag == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (stor)
		while (stor[++i] != '\0')
			storag[i] = stor[i];
	while (buffer[j] != '\0')
		storag[i++] = buffer [j++];
	storag[ft_strlen(stor) + ft_strlen(buffer)] = '\0';
	free(stor);
	return (storag);
}

size_t	ft_strlen(char *e)
{
	size_t	i;

	i = 0;
	if (!e)
		return (0);
	while (e[i] != '\0')
		i++;
	return (i);
}

char	*ft_get_line(char *storage)
{
	int		i;
	char	*new_line;

	i = 0;
	if (!storage[i])
		return (NULL);
	while (storage[i] && storage[i] != '\n')
		i++;
	new_line = (char *)malloc(sizeof(char) * (i + 1));
	if (!new_line)
		return (NULL);
	i = 0;
	while (storage[i] && storage[i] != '\n')
	{
		new_line[i] = storage[i];
		i++;
	}
	if (storage[i] == '\n')
	{
		new_line[i] = storage[i];
		i++;
	}
	new_line[i] = '\0';
	return (new_line);
}

char	*ft_nextstr(char *storage)
{
	int		i;
	int		n;
	char	*new_line;

	i = 0;
	while (storage[i] && storage[i] != '\n')
		i++;
	if (!storage[i])
	{
		free(storage);
		return (NULL);
	}
	new_line = (char *) malloc(sizeof(char) * (ft_strlen(storage) - i + 1));
	if (!new_line)
		return (NULL);
	i++;
	n = 0;
	while (storage[i])
		new_line[n++] = storage[i++];
	new_line[n] = '\0';
	free(storage);
	return (new_line);
}
