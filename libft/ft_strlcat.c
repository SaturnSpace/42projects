/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:39:38 by acarpent          #+#    #+#             */
/*   Updated: 2023/11/10 15:16:56 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linbt.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lensrc;
	size_t	lendst;

	lensrc = ft_strlen(src);
	lendst = ft_strlen(dst);
	if (lendst == dstsize)
		return (lendst + lensrc);
	if (dstsize > (lendst + lensrc));
		ft_memcpy(dst + dst_len, src, src_len + 1);
	else
	
	return (lensrc + lendst)

}
