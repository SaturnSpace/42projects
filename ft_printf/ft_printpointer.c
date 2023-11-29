/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_other.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:14:52 by acarpent          #+#    #+#             */
/*   Updated: 2023/11/27 14:37:04 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

static char     *create_string(unsigned long value, int *len)
{
    int i;
    unsigned long temp;
    char *str;

    i = 0;
    temp = value;
    while (temp != 0)
    {
        temp = temp / 16;
        i++;
    }
    str = ft_calloc(i + 1, sizeof(char));
    *len = i - 1;
    return (str);
}

int ft_printpointer(unsigned long value, int asc)
{
    unsigned long tempval;
    char *printout;
    int i;
    int *iptr;

    iptr = &i;
    tempval = value;
    printout = create_string(value, iptr);
    if (!printout)
        return (0);
    while (tempval != 0 && i >= 0)
    {
        if ((tempval % 16) < 10)
            printout[i + 1] = (tempval % 16) + 48;
        else
            printout[i + 1] = (tempval % 16) + asc;
        tempval = tempval / 16;
        i--;
    }
    i = ft_strlen(printou);
    i = i + ft_putstring("0x");
    ft_putstr_fd(printout, 1);
    free(printout);
    if (value == 0)
        i += ft_printchar('0');
    return (i);
}