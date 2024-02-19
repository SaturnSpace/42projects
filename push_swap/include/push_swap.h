/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:18:53 by acarpent          #+#    #+#             */
/*   Updated: 2024/02/19 15:35:58 by acarpent         ###   ########.fr       */
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

t_pile 	*implement_a(int argc, char **argv);
void	ft_lstadd_back(t_pile **lst, t_pile *new);
t_pile	*ft_lstnew(int data);
t_pile	*ft_lstlast(t_pile *lst);
void	ft_print_list(t_pile *test);
int		ft_atoi(const char *str);

char	**ft_split(char const *s, char c);
void	ft_initiate_vars(size_t *i, int *j, int *s_word);
int		count_words(char const *str, char c);
void	*ft_free(char **strs, int count);
char	*fill_word(char const *str, int start, int end);
size_t  ft_strlen(const char *str);
void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *s, size_t n);

char	*ft_strsjoin(char **argv);
int 	ft_argvlen(char **argv);

#endif
