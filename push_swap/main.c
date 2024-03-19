/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:03:48 by acarpent          #+#    #+#             */
/*   Updated: 2024/03/19 12:48:34 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scr/include/push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	char	*str;
	char	**split;
	// t_list	*a;

	i = 1;
	// a = NULL;
	str = argv[i];
	if (argc <= 1)
	{
		printf("No arguments inserted.\n");
		return (0);
	}
	i++;
	while (i < argc)
	{
		str = ft_strjoin(str, argv[i]);
		i++;
	}
	split = ft_split(str, ' ');
	i = 0;
	while (split[i])
	{
		printf("split = %s\n", split[i]);
		i++;
	}
}
