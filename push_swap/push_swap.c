/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:11:37 by acarpent          #+#    #+#             */
/*   Updated: 2024/01/30 15:44:47 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h> // A SUPPRIMER AVANT PUSH

// int	*push_swap(int *a)
// {

// }

int	ft_check(char *argv)
{
	int	i;
	
	i = 0;
	while (argv[i])
	{
		if (ft_syntax(argv[i]) == 1)
		{
			printf("Erreur\n");
			exit(0);
		}
		if ((argv[i] == '+' && argv[i + 1] == '+')
			|| (argv[i] == '-' && argv[i + 1] == '-')
			|| (argv[i] == ' ' && argv[i + 1] == ' '))
		{
			printf("Erreur\n");
			exit(0);
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	t_pile	*a;

	a = NULL;
	i = 1;
	if (argc == 1)
	{
		printf("Aucun argument fourni.\n");
		return (0);
	}
	while (i < argc)
	{
		printf("Verification de l'argument %d : %s\n", i, argv[i]);
		ft_check(argv[i]);
		if (ft_check(argv[i]) == 0)
			ft_lstnew(ft_atoi(argv[i]));
		if (a)
			a->next = ft_lstnew(ft_atoi(argv[i]));
		i++;
	}
	return (0);
}
