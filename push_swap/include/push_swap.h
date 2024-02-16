/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:18:53 by acarpent          #+#    #+#             */
/*   Updated: 2024/02/16 14:32:31 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "../external/ft_printf/ft_printf.h"

typedef struct s_pile{
	int				data;
	struct s_pile	*next;
	struct s_pile	*previous;
}	t_pile;

t_pile	*ft_lstnew(int content);
int		ft_checkk(char *argv);
int		ft_syntax(char c);
int		ft_splitcheck(char *argv);
char	**ft_split(char const *s, char c);
void	ft_error(char *str);
int		ft_doublecheck(char **a);
void	*ft_calloc(size_t count, size_t size);
size_t	ft_strlen(const char *s);
void	ft_bzero(void *s, size_t n);
int		ft_atoi(const char *str);
void	ft_lstadd_back(t_pile **lst, t_pile *new);
t_pile	*ft_lstlast(t_pile *lst);

#endif
