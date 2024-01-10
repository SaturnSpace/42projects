/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:08:16 by acarpent          #+#    #+#             */
/*   Updated: 2024/01/10 16:44:40 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_line(char *str)
{
	int		i;
	char	*line;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
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
	char	*keep;

	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (stash[i] == '\n')
		i++;
	keep = ft_strdup(stash + i);
	free(stash);
	return (keep);
}

char	*ft_foldernull(char *stash)
{
	free(stash);
	stash = NULL;
	return (NULL);
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
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, buffer, 0) < 0)
		return (free(buffer), NULL);
	mark = 1;
	while (ft_readbuffer(buffer) == 0 && mark != 0)
	{
		mark = read(fd, buffer, BUFFER_SIZE);
		buffer[mark] = '\0';
		stash = ft_strjoin(buffer, stash);
	}
	free(buffer);
	if (stash[0] == '\0')
		return (ft_foldernull(stash));
	res = ft_line(stash);
	stash = ft_cleanup(stash);
	return (res);
}
#include <stdio.h>
int	main(void)
{
	int		fd;
	char	*str;

	fd = open("test.txt", O_RDONLY);
	str = get_next_line(fd);
	printf("%s", str);
	free(str);
	str = get_next_line(fd);
	printf("%s", str);
	free(str);
	//printf("%s\n", get_next_line(fd));
	return (0);
}