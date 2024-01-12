/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:14:37 by acarpent          #+#    #+#             */
/*   Updated: 2024/01/12 13:15:08 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i])
			i++;
	}
	return (i);
}

char	*ft_strjoin(char *buffer, char *stash)
{
	int		i;
	int		j;
	char	*res;

	if (!stash)
	{
		stash = malloc(sizeof(char));
		stash[0] = '\0';
	}
	if (!stash || !buffer)
		return (free(stash), NULL);
	res = malloc(sizeof(char) * ((ft_strlen(buffer) + ft_strlen(stash)) + 1));
	if (!res)
		return (NULL);
	j = 0;
	i = -1;
	while (stash[++i])
		res[i] = stash[i];
	while (buffer[j])
		res[i++] = buffer[j++];
	res[i] = '\0';
	free(stash);
	return (res);
}

void	ft_bzero(void *s, size_t n)
{
	char	*p;
	size_t	i;

	p = (char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

char	*ft_strdup(char *s1)
{
	size_t	i;
	char	*str;

	i = 0;
	str = malloc(ft_strlen(s1) + 1);
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
