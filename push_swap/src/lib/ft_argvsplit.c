/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argvsplit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 10:38:16 by acarpent          #+#    #+#             */
/*   Updated: 2024/03/21 10:53:05 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

char	**ft_argvsplit(int ac, char **av)
{
	int		i;
	int		j;
	char	*str;
	char	**split;

	i = 0;
	str = "";
	while (++i < ac)
		str = ft_strjoin(str, av[i]);
	split = ft_split(str, ' ');
	i = 0;
	while (split[i])
	{
		ft_syntax(split[i]);
		j = i + 1;
		while (split[j] && ft_atoi(split[i]) != ft_atoi(split[j]))
			j++;
		if (split[j] != 0 && (ft_atoi(split[i]) == ft_atoi(split[j])))
		{
			printf("Doublons detected.");
			exit(0);
		}
		i++;
	}
	return (split);
}
