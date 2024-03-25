/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_limit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:16:37 by acarpent          #+#    #+#             */
/*   Updated: 2024/03/25 14:38:09 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void    ft_limit(char *str)
{
    int     nb;
    char    *tgv;

    nb = ft_atoi(str);
    tgv = ft_itoa(nb);
    if (ft_strcmp(str, tgv) == 1)
    {
        ft_printf("Trop long.");
        exit(0);
    }
}