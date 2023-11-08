/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:45:24 by acarpent          #+#    #+#             */
/*   Updated: 2023/11/08 16:12:43 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmpdst;
	char	*tmpsrc;
	int	i;

	if (dst == NULL || src == NULL)
		return (dst);
	*tmpdst = (char *)dst;
	*tmpsrc = (char *)src;
	if ()
}
