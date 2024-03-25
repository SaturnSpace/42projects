/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:03:31 by acarpent          #+#    #+#             */
/*   Updated: 2024/03/25 14:22:09 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//----------------------------------------------------------------------------*/
//                            INCLUDES                                        */
//----------------------------------------------------------------------------*/

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
//----------------------------------------------------------------------------*/
//                            Listes chainees                                 */
//----------------------------------------------------------------------------*/
# include <stdio.h> //A SUPPRIMER
# include <stdlib.h>
# include "../../extern/ft_printf/ft_printf.h"

typedef struct s_stack{
	struct s_stack	*next;
	struct s_stack	*prev;
	int		data;
}				t_stack;

char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *s);
char	**ft_split(char const *s, char c);
void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *s, size_t n);
int		ft_isdigit(int c);
int		ft_syntax(char *str);
int		ft_atoi(const char *str);
t_stack	*ft_lstnew(int content);
char	**ft_argvsplit(int ac, char **av);
int		ft_ops(char *str);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_itoa(int n);
void 	ft_limit(char *str);
t_stack	*ft_lstlast(t_stack *lst);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
//----------------------------------------------------------------------------*/
//                            FONCTIONS SECURITY                              */
//----------------------------------------------------------------------------*/

//----------------------------------------------------------------------------*/
//                            FONCTIONS SWAP                                  */
//----------------------------------------------------------------------------*/

//----------------------------------------------------------------------------*/
//                            FONCTIONS PARSING                               */
//----------------------------------------------------------------------------*/
#endif
