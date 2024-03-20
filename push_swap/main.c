/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:03:48 by acarpent          #+#    #+#             */
/*   Updated: 2024/03/20 14:28:44 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/include/push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*str;
	char	**split;
	// t_list	*a;

	i = 1;
	// a = NULL;
	str = "";
	if (argc <= 1)
	{
		printf("No arguments inserted.\n");
		exit(0);
	}
	while (i < argc)
	{
		str = ft_strjoin(str, argv[i]);
		i++;
	}
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
}
