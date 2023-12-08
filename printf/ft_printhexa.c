/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:36:07 by acarpent          #+#    #+#             */
/*   Updated: 2023/12/07 13:28:07 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printhexa(uintptr_t n)
{
	char	*base;
	int	len;

	base = "0123456789abcdef";
	len = 0;
	if (n >= 16)
	{
		len += ft_printhexa(n / 16);
	}
	write(1, &base[n % 16], 1);
	return (len);
}
