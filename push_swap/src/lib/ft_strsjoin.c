/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:33:33 by acarpent          #+#    #+#             */
/*   Updated: 2024/02/19 15:22:18 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strsjoin(char **argv)
{
	char	*join;
	size_t	i;
	size_t	j;

	i = 0;
	join = malloc(sizeof(char) + (ft_argvlen(argv) * 2) + 1);
	if (!join)
	{
		free(join);
		return (NULL);
	}
	while(argv[i])
	{
		j = 0;
	}
}
