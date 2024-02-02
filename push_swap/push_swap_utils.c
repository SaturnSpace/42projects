/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:19:31 by acarpent          #+#    #+#             */
/*   Updated: 2024/02/01 13:15:19 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_syntax(char c)
{
	if (c == '+' || c == '-')
		return (0);
	else if (c == ' ')
		return (0);
	else if (c >= 48 && c <= 57)
		return (0);
	return (1);
}

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

int	ft_doublecheck(char *argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_strcmp(&argv[i], argv[j] == 0))
				return(1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
