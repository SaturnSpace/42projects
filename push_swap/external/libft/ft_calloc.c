/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:10:04 by acarpent          #+#    #+#             */
/*   Updated: 2023/11/18 12:54:09 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			n;

	if ((int)count < 0 && (int)size < 0)
		return (NULL);
	n = count * size;
	if (count == 0 || size == 0)
		return (malloc(0));
	if (n / count != size)
		return (NULL);
	tmp = malloc(count * size);
	if (!tmp)
		return (tmp);
	ft_bzero(tmp, (count * size));
	return (tmp);
}
