/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:19:31 by acarpent          #+#    #+#             */
/*   Updated: 2024/02/13 14:52:19 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pile	*ft_lstnew(int content)
{
	t_pile	*a;

	a = malloc(sizeof(t_pile));
	if (!a)
		return (NULL);
	a->data = content;
	a->next = NULL;
	return (a);
}

int	ft_atoi(const char *str)
{
	long	i;
	long	min;
	long	result;

	i = 0;
	min = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			min *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	return (result *= min);
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
		return (tmp);
	ft_bzero(tmp, (count * size));
	return (tmp);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
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
