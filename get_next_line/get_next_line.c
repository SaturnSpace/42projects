/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:14:12 by acarpent          #+#    #+#             */
/*   Updated: 2024/01/08 14:37:21 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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
		if (mark == 0)
			return (0);
		else if (mark < 0)
			return (0);
		else
		{
			if (!stash)
			{
				stash = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
				stash = ft_strcpy(buffer);
			}
			else
				stash = ft_strjoin(buffer, stash);
		}
	}
	if (ft_readbuffer(buffer) == 1)
		res = stash;
	free(stash);
	return (res);
}

int	ft_readbuffer(char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i])
	{
		if (buffer[i] == '\n')
			return (i);
		i++;
	}
	return (0);
}

int	main(void)
{
	int		fd;

	fd = open("test.txt", O_RDONLY);
	printf("%s\n", get_next_line(fd));
	//printf("%s\n", get_next_line(fd));
	return (0);
}
