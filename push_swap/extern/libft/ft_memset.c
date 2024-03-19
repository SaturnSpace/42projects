/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:10:02 by acarpent          #+#    #+#             */
/*   Updated: 2023/11/09 16:11:31 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;
	size_t			i;

	s = (unsigned char *)b;
	i = 0;
	while (len > 0)
	{
		s[i] = (unsigned char)c;
		i++;
		len--;
	}
	return (b);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = "Bonjour";
	
	printf("Avant modification : %s\n", str);

	ft_memset(str, '_', 3);

	printf("Apres modification : %s\n", str);

	memset(str, '_', 3);

	printf("Man fonction : %s\n", str);
	
	return (0);
}*/
