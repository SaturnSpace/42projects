/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:00:01 by acarpent          #+#    #+#             */
/*   Updated: 2023/11/24 14:58:40 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>

int	ft_printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);
	int	count;

	count = 0;
	while (count[i] != '%' || count[i])
	{
		ft_putstr(va_args, int);
		count++;
	}
	while (count[i] == '%')
	{
		if (count[i + 1] == 'c')
		{
			ft_putstr(va_args, char);
			return (ft_printf(format, ...));
		}
		else if (count[i + 1] == 's')
			ft_putstr(va_args, char);
		else if (count[i + 1] == 'p')
		else if (count[i + 1] == 'd')
		else if (count[i + 1] == 'i')
		else if (count[i + 1] == 'u')
		else if (count[i + 1] == 'x')
		else if (count[i + 1] == 'X')
		else if (count[i + 1] == '%')
		i++;
	}

	va_end(args);
	return ()
}
