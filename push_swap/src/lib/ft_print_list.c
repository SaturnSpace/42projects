/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:27:41 by acarpent          #+#    #+#             */
/*   Updated: 2024/02/19 15:28:00 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_list(t_pile *test)
{
	t_pile	*print;

	print = test;
	while (print)
	{
		ft_printf("%d ", print->data);
		print = print->next;
	}
	ft_printf("NULL\n");
}