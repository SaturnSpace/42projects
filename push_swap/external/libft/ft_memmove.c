/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:45:24 by acarpent          #+#    #+#             */
/*   Updated: 2023/11/09 16:10:33 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmpdst;
	char	*tmpsrc;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	tmpdst = (char *)dst;
	tmpsrc = (char *)src;
	i = 0;
	if (tmpdst > tmpsrc)
	{
		while (len-- > 0)
			tmpdst[len] = tmpsrc[len];
	}
	else
	{
		while (i < len)
		{
			tmpdst[i] = tmpsrc[i];
			i++;
		}
	}
	return (dst);
}
/*
#include <stdio.h>
int     main(void)
{
	char s1[100] = "salut a tous";
	char s2[100] = "salut a tous";

	ft_memmove(s1, s1 + 2, 5);
	memmove(s2, s2 + 2, 5);

	printf("%s\n%s\n", s1, s2);
        return (0);
}
*/
