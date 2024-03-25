/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_syntax.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 10:04:29 by acarpent          #+#    #+#             */
/*   Updated: 2024/03/25 13:35:18 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_syntax(char *str)
{
	int	i;

	i = 0;
	ft_limit(str);
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
		{
			ft_printf("Syntax error.");
			exit(0);
		}
		if (str[i] == '+' && str[i + 1] == '+')
		{
			ft_printf("Syntax error.");
			exit(0);
		}
		if (str[i] == '-' && str[i + 1] == '-')
		{
			ft_printf("Syntax error.");
			exit(0);
		}
		ft_ops(str);
		i++;
	}
	return (1);
}
