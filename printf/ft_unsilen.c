/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsilen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 17:19:21 by acarpent          #+#    #+#             */
/*   Updated: 2023/12/18 15:06:59 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsilen(unsigned int n)
{
	int	len;

	len = 0;
	if (n > 9)
		len += ft_unsilen(n / 10);
	return (len += ft_putcharlen((n % 10) + 48));
}
