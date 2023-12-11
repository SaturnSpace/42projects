/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:49:40 by acarpent          #+#    #+#             */
/*   Updated: 2023/12/11 15:52:54 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(char c, va_list args)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_printchar(va_arg(args, int));
	else if (c == 's')
	{
		if (va_arg(args, char *) == NULL)
			return (ft_printstr("(null)"));
		len += ft_printstr(va_arg(args, char *));
	}
	else if (c == 'p')
		len += ft_printptr((uintptr_t)va_arg(args, void *));
	else if (c == 'd' || c == 'i')
		len += ft_printint(va_arg(args, int));
	else if (c == 'u')
		len += ft_printunsi(va_arg(args, unsigned int));
	else if (c == 'x')
		len += ft_printhexa(va_arg(args, unsigned long int), 1);
	else if (c == 'X')
		len += ft_printhexa(va_arg(args, unsigned long int), 2);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int	wrote;

	i = 0;
	wrote = 0;
	va_start(args, format);
	if (!format)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			wrote += ft_check(format[i + 1], args);
			if (format[i + 1] == '%')
				wrote += write(1, &format[i], 1);
			i += 2;
		}
		else
		{
			wrote += write(1, &format[i], 1);
			i++;
		}
	}
	va_end(args);
	return (wrote);
}

#include <stdio.h>

int	main(void)
{
	ft_printf("%s\n", "");
	printf("%s", "");
}
