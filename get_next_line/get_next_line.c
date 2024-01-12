/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:14:12 by acarpent          #+#    #+#             */
/*   Updated: 2024/01/12 13:17:01 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_line(char *str)
{
	int		i;
	char	*line;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	line = malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		line[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		line[i] = str[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

int	ft_readbuffer(char *buffer)
{
	int	i;

	i = 0;
	if (buffer)
	{
		while (buffer[i])
		{
			if (buffer[i] == '\n')
				return (1);
			i++;
		}		
	}
	return (0);
}

char	*ft_cleanup(char *stash)
{
	int		i;
	char	*keep;

	i = 0;
	if (!stash)
		return (NULL);
	while (stash[i] && stash[i] != '\n')
		i++;
	if (!stash[i] || !stash[i + 1])
		return (free(stash), NULL);
	if (stash[i] == '\n')
		i++;
	keep = ft_strdup(stash + i);
	if (!keep)
		return (NULL);
	free(stash);
	return (keep);
}

char	*get_next_line(int fd)
{
	char		*buffer;
	int			mark;
	static char	*stash;
	char		*res;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	ft_bzero(buffer, BUFFER_SIZE + 1);
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (free(buffer), NULL);
	mark = 1;
	while (!ft_readbuffer(buffer) && mark)
	{
		mark = read(fd, buffer, BUFFER_SIZE);
		if (mark <= 0)
			break ;
		buffer[mark] = '\0';
		stash = ft_strjoin(buffer, stash);
	}
	free(buffer);
	res = ft_line(stash);
	stash = ft_cleanup(stash);
	return (res);
}
