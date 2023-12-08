/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:49:40 by acarpent          #+#    #+#             */
/*   Updated: 2023/12/07 14:34:19 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_check(char c, va_list args)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_printchar(va_arg(args, int));
	else if (c == 's')
		len += ft_printstr(va_arg(args, char *));
	else if (c == 'p')
		len += ft_printptr((uintptr_t)va_arg(args, void *));
	else if (c == 'd' || c == 'i')
		len += ft_printint(va_arg(args, int));
	else if (c == 'u')
		len += ft_printunsi(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		len += ft_printhexa(va_arg(args, unsigned long int));
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list args;
	int	i;

	i = 0;
	va_start(args, format);
	if (!format)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			ft_check(format[i + 1], args);
			if (format[i + 1] == '%')
				write(1, &format[i], 1);
			i += 2;
		}
		else {
			write(1, &format[i], 1);
			i++;
		}

	}
	va_end(args);
	return (i);
}

#include <stdio.h>

int	main(void)
{
	int n;
	ft_printf("%d %p %s %i%% sa'uty%u %x%X as;ut\n", 10, &n, "bonjour", -10, -1, 42, 42);
	printf("%d %p %s %i%% sa'uty%u %x%X as;ut", 10, &n, "bonjour", -10, -1, 42, 42);
}
