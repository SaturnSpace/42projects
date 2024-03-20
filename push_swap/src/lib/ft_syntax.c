/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_syntax.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 10:04:29 by acarpent          #+#    #+#             */
/*   Updated: 2024/03/20 11:18:11 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_syntax(char *str)
{
	int	i;

	i = 0;
	printf("%s\n", str);
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
		{
			printf("Syntax error.");
			exit(0);
		}
		if (str[i] == '+' && str[i + 1] == '+')
		{
			printf("Syntax error.");
			exit(0);
		}
		if (str[i] == '-' && str[i + 1] == '-')
		{
			printf("Syntax error.");
			exit(0);
		}
		i++;
	}
	return (1);
}