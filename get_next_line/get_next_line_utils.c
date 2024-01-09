/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:14:37 by acarpent          #+#    #+#             */
/*   Updated: 2024/01/09 12:43:29 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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
		stash = malloc(sizeof(char) * 1);
		stash[0] = '\0';
	}
	if (!stash && !buffer)
		return (NULL);
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

/*
int main (void)
{
	char	*buffer;
	char	*stash;

	buffer = " Bonjour";
	stash = "Salut";
	printf("%s\n", ft_strjoin(buffer, stash));
	return (0);
}*/
