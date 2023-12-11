/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:27:14 by acarpent          #+#    #+#             */
/*   Updated: 2023/12/11 14:33:50 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(unsigned long int n)
{
	int	mode;

	mode = 0;
	ft_putstr_fd("0x", 1);
	return (ft_printhexa(n, mode));
}
