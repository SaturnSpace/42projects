/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:37:29 by acarpent          #+#    #+#             */
/*   Updated: 2023/11/10 14:45:24 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	lensrc;

	lensrc = ft_strlen(src);
	if ((lensrc + 1) < dstsize)
		ft_memcpy(dst, src, lensrc + 1);
	else if (dstsize != 0)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = 0;
	}
	return (lensrc);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char	src[100] = "Bon jour";
	char	dst[100] = "oui ";
	char	dst2[100] = "oui ";

	printf("Avant modif : %s\n", dst);

	ft_strlcpy(dst, src, 5);

	printf("Apres modif : %s\n", dst);

	strlcpy(dst2, src, 5);
	
	printf("MAN : %s\n", dst2);

	return (0);
}*/
