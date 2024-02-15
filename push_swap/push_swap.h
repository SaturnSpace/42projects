/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:18:53 by acarpent          #+#    #+#             */
/*   Updated: 2024/02/15 15:23:29 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

typedef struct s_pile{
	int				data;
	struct s_pile	*next;
	struct s_pile	*previous;
}	t_pile;

t_pile	*ft_lstnew(int content);
int		ft_check(char *argv);
int		ft_syntax(char c);
int		ft_splitcheck(char *argv);
char	**ft_split(char const *s, char c);
void	ft_error(char *str);
int		ft_doublecheck(char **a);

#endif
