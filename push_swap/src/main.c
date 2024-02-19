/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:11:37 by acarpent          #+#    #+#             */
/*   Updated: 2024/02/19 15:38:28 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pile *implement_a(int argc, char **argv);

//              MAIN PROG
//----------------------------------------------------
int main(int argc, char **argv)
{
	int	i;

	i = 1;
    if (argc <= 1)
		return (0);
	ft_printf("La taille totale est : %d\n", i);
    t_pile *a = implement_a(argc, argv);
    ft_print_list(a);
}
//              HELPERS
//----------------------------------------------------
t_pile *implement_a(int argc, char **argv)
{
    (void)argc;
    char	**split_a;
    t_pile	*stack_a;
    int		i;

    if (argc > 2)
        argv[1] = ft_strsjoin(argv);
    i = 0;
    split_a = ft_split(argv[1], ' ');
    stack_a = ft_lstnew(ft_atoi(split_a[i++]));
    while(split_a[++i])
        ft_lstadd_back(&stack_a, ft_lstnew(ft_atoi(split_a[i])));
    if (argc > 2)
        free(argv[1]);
    return (stack_a);
}














// int	main(int argc, char **argv)
// {
// 	int		i;
// 	int		j;
// 	t_pile	*a;
// 	char	**temp;

// 	a = NULL;
// 	i = 1;
// 	if (argc == 1)
// 		return (0);
// 	while (i < argc)
// 	{
// 		if (ft_check(argv[i]) && ft_check(temp[j]) == 0)
// 		{
// 			if (ft_splitcheck(argv[i]) == 1)
// 			{
// 				j = 0;
// 				temp = (ft_split(argv[i], ' '));
// 				while (temp[j])
// 				{
// 					if (ft_doublecheck(temp) == 1)
// 						ft_error(temp[i]);
// 					if (a)
// 						a->next = ft_lstnew(ft_atoi(temp[j]));
// 					a = ft_lstnew(ft_atoi(temp[j]));
// 					j++;
// 				}
// 			}
// 			else
// 			{
// 				if (ft_doublecheck(argv + 1) == 1)
// 				{
// 					printf("Error");
// 					exit(0);
// 				}
// 				if (a)
// 					a->next = ft_lstnew(ft_atoi(argv[i]));
// 				a = ft_lstnew(ft_atoi(argv[i]));
// 			}
// 		}
// 		i++;
// 		push_swap(a);
// 	}
// 	return (0);
// }
