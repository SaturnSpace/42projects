/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:14:37 by acarpent          #+#    #+#             */
/*   Updated: 2024/01/08 15:24:13 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *buffer, char *stash)
{
	int		i;
	int		j;
	char	*res;

	res = malloc(sizeof(char) * ((ft_strlen(buffer) + ft_strlen(stash)) + 1));
	if (!res)
		return (NULL);
	j = 0;
	i = -1;
	while (stash[++i])
		res[i] = stash[i];
	while (buffer[j])
		stash[i++] = buffer[j++];
	res[i] = '\0';
	free(stash);
	return (res);
}

char	*ft_strcpy(char *buffer)
{
	int		i;
	char	*stash;

	i = 0;
	stash = malloc(sizeof(char) * ft_strlen(buffer) + 1);
	if (!stash)
		return (NULL);
	while (buffer[i])
	{
		stash[i] = buffer[i];
		i++;
	}
	stash[i] = '\0';
	return (stash);
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

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			n;

	if ((int)count < 0 && (int)size < 0)
		return (NULL);
	n = count * size;
	if (count == 0 || size == 0)
		return (malloc(0));
	if (n / count != size)
		return (NULL);
	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, (count * size));
	return (tmp);
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
