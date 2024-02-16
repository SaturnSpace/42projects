/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:06:54 by acarpent          #+#    #+#             */
/*   Updated: 2023/12/18 15:06:35 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrlen(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
		return (ft_putstrlen("-2147483648"));
	if (n < 0)
	{
		len += ft_putcharlen('-');
		n = -n;
	}
	if (n > 9)
		len += ft_putnbrlen(n / 10);
	return (len += ft_putcharlen((n % 10) + 48));
}
