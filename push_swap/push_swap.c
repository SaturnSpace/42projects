/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:11:37 by acarpent          #+#    #+#             */
/*   Updated: 2024/02/13 16:43:58 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h> // A SUPPRIMER AVANT PUSH

void	push_swap(t_pile *a)
{
	t_pile	*b;

	b = NULL;
	while(a)
	{
		printf("%d\n", a->data);
		a = a->next;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	t_pile	*a;
	char	**temp;

	a = NULL;
	i = 1;
	if (argc == 1)
		return (0);
	while (i < argc)
	{
		if (ft_splitcheck(argv[i]) == 1 && ft_check(argv[i]) == 0)
		{
			j = 0;
			temp = (ft_split(argv[i], ' '));
			while (temp[j])
			{
				ft_check(temp[j]);
				if (ft_doublecheck(a, ft_atoi(temp[j])) == 1)
					ft_error(temp[i]);
				if (a)
					a->next = ft_lstnew(ft_atoi(temp[j]));
				a = ft_lstnew(ft_atoi(temp[j]));
				//push_swap(a);
				j++;
			}
		}
		else if (ft_check(argv[i]) == 0)
		{
			if (ft_doublecheck(a, ft_atoi(argv[i])) == 1)
				ft_error(argv[i]);
			if (a)
				a->next = ft_lstnew(ft_atoi(argv[i]));
			a = ft_lstnew(ft_atoi(argv[i]));
			//push_swap(a);
		}
		i++;
		push_swap(a);
	}
	return (0);
}
