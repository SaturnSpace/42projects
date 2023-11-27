/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_other.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:14:52 by acarpent          #+#    #+#             */
/*   Updated: 2023/11/27 14:37:04 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"

//%c
int	for_c(args)
{
	ft_putchar_fd(c, 1);
	return (1);
}
//%s
int	for_s(args)
{
	return (ft_putstr(va_arg(args)));
}
//%p
int	for_p(args)
{
	
}
//%d %i
int	for_di(args)
{
	
}
//%u
int	for_u(args)
{
	
}
//%x %X
int	for_xX(args)
{

}
