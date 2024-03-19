/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:47:04 by acarpent          #+#    #+#             */
/*   Updated: 2023/12/18 15:06:45 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_putstrlen(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
		return (ft_putstrlen("(null)"));
	while (s[i])
	{
		ft_putcharlen(s[i]);
		i++;
	}
	return (i);
}
