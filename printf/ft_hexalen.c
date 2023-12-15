/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexalen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 17:41:58 by acarpent          #+#    #+#             */
/*   Updated: 2023/12/15 18:16:55 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexalen(unsigned long int n, char c)
{
	int	len;
	char	*base;

	len = 0;
	base = "0123456789abcdef";
	if (n >= 16)
	{
		len += ft_hexalen((n / 16), c);
		if (c == 'X')
			len += ft_putcharlen(ft_toupper(base[n % 16]));
		else
			len += ft_putcharlen(base[n % 16]);
	}
	return (len);
}