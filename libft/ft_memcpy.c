/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:17:04 by acarpent          #+#    #+#             */
/*   Updated: 2023/11/09 15:28:58 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*tmpdst;
	const unsigned char	*tmpsrc;
	size_t				i;

	if (dst == NULL || src == NULL)
		return (dst);
	tmpdst = (unsigned char *)dst;
	tmpsrc = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		tmpdst[i] = tmpsrc[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>

int     main(void)
{
        char src[] = "Bonjour";
	char dst[] = "oui";

        printf("Avant modification : %s\n", src);
	printf("Avant modification : %s\n", dst);

        ft_memcpy(dst, src, 5);

	printf("Apres modification : %s\n", dst);

        memcpy(dst, src, 5);

	printf("Man fonction : %s\n", dst);

        return (0);
}
*/
