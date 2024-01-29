/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:11:37 by acarpent          #+#    #+#             */
/*   Updated: 2024/01/29 15:37:59 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h> // A SUPPRIMER AVANT PUSH

// int	*push_swap(int *a)
// {

// }

void	ft_check(char	**argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argv[i][j])
	{
		while (argv[i][j] != ' ')
		{
			if ((argv[i][j] <= 48 || argv[i][j] >= 58) || argv[i][j] != '-'
					|| argv[i][j] != '+')
			{
				ft_printf("Error\n");
				exit(0);
			}
			if (argv[i][j + 1] == ' ')
				ft_lstnew(atoi(&argv[i][j]));
		}
		j++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	t_pile	*a;

	a = NULL;
	i = 1;
	if (argc < 1)
		return (0);
	while (i <= argc)
	{
		ft_check(&argv[i]);
		i++;
	}
	return (0);
}
