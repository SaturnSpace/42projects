/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:03:48 by acarpent          #+#    #+#             */
/*   Updated: 2024/03/21 12:02:15 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	main(int argc, char **argv)
{
	char	**split;
	// t_list	*a;
	// int		i;

	// a = NULL;
	if (argc <= 1)
	{
		printf("No arguments inserted.\n");
		exit(0);
	}
	split = ft_argvsplit(argc, argv);
	// i = 0;
	// while (split[i])
	// {
	// 	if (split[0])
	// 		a = ft_lstnew(ft_atoi(split[i]));
	// 	a->next = ft_lstnew(ft_atoi(split[i]));
	// 	i++;
	// }
	return (0);
}
