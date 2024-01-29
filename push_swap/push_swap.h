/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:18:53 by acarpent          #+#    #+#             */
/*   Updated: 2024/01/29 15:41:42 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "../../2nd circle/ft_printf/ft_printf.h"

typedef struct s_pile{
	int				data;
	struct s_pile	*next;
	struct s_pile	*previous;
}	t_pile;

t_pile	*ft_lstnew(int content);
int		ft_atoi(const char *str);

#endif