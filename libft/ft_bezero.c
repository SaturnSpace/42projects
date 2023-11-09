/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bezero.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:44:52 by acarpent          #+#    #+#             */
/*   Updated: 2023/11/09 12:07:22 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*p;
	size_t	i;

	p = (char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>

int main(void)
{
    char buffer[10] = "Hello";
    
    printf("Avant ft_bzero : %s\n", buffer);

    ft_bzero(buffer, 5);

    printf("Après ft_bzero : %s\n", buffer);

    bzero(buffer, 5);

    printf("Vrai fonction : %s\n", buffer);

    return 0;
}
*/
