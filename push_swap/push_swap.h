/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:18:53 by acarpent          #+#    #+#             */
/*   Updated: 2024/01/30 15:41:50 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>

typedef struct s_pile{
	int				data;
	struct s_pile	*next;
	struct s_pile	*previous;
}	t_pile;

t_pile	*ft_lstnew(int content);
int		ft_check(char *argv);
int		ft_syntax(char c);
int		ft_atoi(const char *str);

#endif