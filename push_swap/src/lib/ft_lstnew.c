/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:09:49 by acarpent          #+#    #+#             */
/*   Updated: 2024/02/19 12:29:32 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pile	*ft_lstnew(int data)
{
	t_pile	*a;

	a = malloc(sizeof(t_pile));
	if (!a)
		return (NULL);
	a->data = data;
	a->next = NULL;
	return (a);
}
