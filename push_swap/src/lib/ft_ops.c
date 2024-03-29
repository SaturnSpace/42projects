/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ops.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 11:29:31 by acarpent          #+#    #+#             */
/*   Updated: 2024/03/25 13:22:57 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_ops(char *str)
{
	int	i;

	i = 0;
	// ft_limit(ft_atoi(str));
	while (str[i])
	{
		if (str[i] == '+' && str[i + 1] == '\0')
		{
			printf("Syntax error.");
			exit(0);
		}
		if ((str[i] == '-' && str[i + 1] == '\0') ||
			(str[i] == '+' && str[i + 1] == '-'))
		{
			printf("Syntax error.");
			exit(0);
		}
		if (str[i] == '-' && str[i + 1] == '+')
		{
			printf("Syntax error.");
			exit(0);
		}
		i++;
	}
	return (1);
}
