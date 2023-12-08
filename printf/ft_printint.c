/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:31:10 by acarpent          #+#    #+#             */
/*   Updated: 2023/12/07 11:40:16 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printint(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
	{
		len = 11;
		write (1, "-2147483648", 11);
		return (len);
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
		len++;
		ft_printint(n);
	}
	else
	{
		if (n > 9)
		{
			ft_printint(n / 10);
			ft_printint(n % 10);
			len++;
		}
		else
		{
			n += 48;
			write(1, &n, 1);
			len++;
		}
	}
	return (len);
}
