/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_checker.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:38:28 by acarpent          #+#    #+#             */
/*   Updated: 2024/02/15 15:28:55 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h> // A SUPPRIMER POUR PUSH

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

int	ft_check(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (ft_syntax(argv[i]) == 1)
			ft_error(argv);
		else if ((argv[i] == '+' && argv[i + 1] == '+')
			|| (argv[i] == '-' && argv[i + 1] == '-'))
			ft_error(argv);
		else if ((argv[i] == '+' && (argv[i + 1] == ' ' || argv[i + 1] == '\0'))
			|| (argv[i] == '-' && (argv[i + 1] == ' ' || argv[i + 1] == '\0'))
			|| (argv[i] == ' ' && (argv[i + 1] == ' ' || argv[i + 1] == '\0')))
			ft_error(argv);
		i++;
	}
	return (0);
}

int	ft_splitcheck(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (argv[i] == ' ')
			return (1);
		i++;
	}
	return (0);
}

void	ft_error(char *str)
{
	printf("Error\n");
	free(str);
	exit(0);
}

int	ft_doublecheck(char **a)
{
	int i;
	 int j;
	
	i = 0;
	while (a[i])
	{
		j = i + 1;
		while (a[j])
			if (ft_atoi(a[i]) == ft_atoi(a[j++]))
				return(1);
		i++;
	}
	return (0);
}
