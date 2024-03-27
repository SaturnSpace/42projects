/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 10:33:27 by acarpent          #+#    #+#             */
/*   Updated: 2024/03/27 14:16:39 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_lst(t_stack **head, int nb)
{
	t_stack	*a;

	a = malloc(sizeof(t_stack));
	if (!a)
		exit(0);
	if (!*head) 
	{
		*head = a;
	}
	a->data = nb;
	a->next = *head;
	while (a != *head)
	{
		printf("noeud = %d\n", a->data);
	}
}
