/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:17:04 by acarpent          #+#    #+#             */
/*   Updated: 2023/11/08 15:30:27 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*tmpdst;
	char	*tmpsrc;

	if (dst == NULL || src == NULL)
		return (dst);
	*tmpdst = (unsigned char *)dst;
	*tmpsrc = (unsigned char *)src;
	while (tmpdst != n)
	{
		tmpdst[i] = tmpsrc[i];
		i++;
		n--;
	}
	return (dst);
}
