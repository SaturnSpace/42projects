/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:11:37 by acarpent          #+#    #+#             */
/*   Updated: 2024/02/16 15:03:26 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h> // A SUPPRIMER AVANT PUSH

void	ft_lstadd_back(t_pile **lst, t_pile *new);
void	ft_print_list(t_pile *test);
t_pile	*ft_lstlast(t_pile *lst);
t_pile *implement_a(int argc, char **argv);

//              MAIN PROG
//----------------------------------------------------
int main(int argc, char **argv)
{
    (void)argc;
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

    i = 0;
    split_a = ft_split(argv[1], ' ');
    stack_a = ft_lstnew(ft_atoi(split_a[i++]));
    while(split_a[i])
    {
        ft_lstadd_back(&stack_a, ft_lstnew(ft_atoi(split_a[i])));
        i++;
    }
    return (stack_a);
}

void	ft_print_list(t_pile *test)
{
	t_pile	*print;

	print = test;
	while (print)
	{
		printf("%d ", print->data);
		print = print->next;
	}
	printf("NULL\n");
}

void	ft_lstadd_back(t_pile **lst, t_pile *new)
{
	t_pile	*last;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

t_pile	*ft_lstlast(t_pile *lst)
{
	t_pile	*tmp;

	if (!lst)
		return (NULL);
	tmp = lst;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
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
