/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:14:12 by acarpent          #+#    #+#             */
/*   Updated: 2024/01/09 12:42:00 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_line(char *str)
{
	int		i;
	char	*line;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	line = malloc(sizeof(char) * (i + 1));
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
	while (buffer[i])
	{
		if (buffer[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}
char	*ft_cleanup(char *stash)
{
	int		i;
	int		j;
	char	*keep;

	i = 0;
	j = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (stash[i] == '\n')
	{
		while (stash[i])
		{
			i++;
			keep = malloc(sizeof(char));
			keep[j++] = stash[i++];
		}
	}
	free(stash);
	keep[j] = '\0';
	return (keep);
}

char	*get_next_line(int fd)
{
	char		buffer[BUFFER_SIZE + 1];
	int			mark;
	static char	*stash;
	char		*res;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, buffer, 0) < 0)
		return (NULL);
	while (ft_readbuffer(buffer) == 0)
	{
		mark = read(fd, buffer, BUFFER_SIZE);
		buffer[mark] = '\0';
		if (mark <= 0)
			return (NULL);
		stash = ft_strjoin(buffer, stash);
	}
	res = ft_line(stash);
	stash = ft_cleanup(stash);
	return (res);
}

int	main(void)
{
	int		fd;
	char	*str;
	int		i;

	i = 0;
	fd = open("test.txt", O_RDONLY);
	while (i < 3)
	{
		str = get_next_line(fd);
		i++;
		printf("%s", str);
	}
	//printf("%s\n", get_next_line(fd));
	return (0);
}
