/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:00:01 by acarpent          #+#    #+#             */
/*   Updated: 2023/11/27 15:04:18 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"

static int	ft_check(const char *format, void *arg)
{
	int	len;

	if (*format  == 'c')
		len += for_c((int)arg);
	else if (*format == 's')
		len += for_s((char *)arg)
	else if (*format == 'p')
		len += for_p((unsigned long)arg)
	else if (*format == 'd' || *format == 'i')
		len += for_di((int)arg)
	else if (*format == 'u')
		len += for_u((unsigned int)arg)
	else if (*format == 'x' || *format == 'X')
		len += for_xX((unsigned int)arg)
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list 	args;
	unsigned int	len;

	i = 0;
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (ft_strchr("cspdiuxX", *format))
				len += ft_check(format, va_arg(args, void *));
			else if (*format == '%')
				len += for_c('%');
		}
		else
			len = len + for_c(*format);
		format++;
	}
	va_end(args);
	return (len);
}