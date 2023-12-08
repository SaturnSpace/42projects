/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:33:17 by acarpent          #+#    #+#             */
/*   Updated: 2023/12/07 11:37:36 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printunsi(unsigned int n)
{
	if (n > 9)
	{
		ft_printunsi(n / 10);
		ft_printunsi(n % 10);
	}
	else
	{
		n += 48;
		write(1, &n, 1);
	}
	return (1);
}
