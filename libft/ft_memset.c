/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:10:02 by acarpent          #+#    #+#             */
/*   Updated: 2023/11/08 14:58:41 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;
	size_t	i;

	*s = *b;
	i = 0;
	while (len > 0)
	{
		s[i] = (unsigned char)c;
		i++;
		len--;
	}
	return (b);
}
