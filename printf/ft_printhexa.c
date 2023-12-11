/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:36:07 by acarpent          #+#    #+#             */
/*   Updated: 2023/12/11 14:32:28 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhexa(uintptr_t n, int mode)
{
	char	*base;
	char	*base2;
	int		len;

	len = 0;
	base = "0123456789abcdef";
	base2 = "0123456789ABCDEF";
	if (n >= 16)
		len += ft_printhexa(n / 16, mode);
	if (mode == 1)
		write(1, &base[n % 16], 1);
	if (mode == 2)
		write(1, &base2[n % 16], 1);
	return (len);
}
