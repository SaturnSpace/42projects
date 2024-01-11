/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:08:19 by acarpent          #+#    #+#             */
/*   Updated: 2024/01/11 13:03:37 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (i);
	while (str[i])
		i++;
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
		return (NULL);
	res = malloc(sizeof(char) * ((ft_strlen(buffer) + ft_strlen(stash)) + 1));
	if (!res)
		return (free(res), NULL);
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
		return (free(str), NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
