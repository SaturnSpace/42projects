/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:48:26 by acarpent          #+#    #+#             */
/*   Updated: 2023/12/18 15:05:21 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_check(const char format, va_list arg)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_putcharlen(va_arg(arg, int));
	else if (format == 's')
		len += ft_putstrlen(va_arg(arg, char *));
	else if (format == 'p')
		len += ft_ptrlen(va_arg(arg, void *));
	else if (format == 'd' || format == 'i')
		len += ft_putnbrlen(va_arg(arg, int));
	else if (format == 'u')
		len += ft_unsilen(va_arg(arg, unsigned int));
	else if (format == 'x' || format == 'X')
		len += ft_hexalen(va_arg(arg, unsigned int), format);
	else if (format == '%')
		len += ft_putcharlen('%');
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;

	len = 0;
	i = 0;
	va_start(args, format);
	if (!format)
		return (0);
	while (format[i])
	{
		if (format[i] == '%')
			len += ft_check(format[++i], args);
		else
			len += ft_putcharlen(format[i]);
		i++;
	}
	va_end(args);
	return (len);
}
