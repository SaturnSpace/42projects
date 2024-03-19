/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:40:14 by acarpent          #+#    #+#             */
/*   Updated: 2023/12/18 14:41:06 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

int	ft_putcharlen(char c);
int	ft_putstrlen(char *s);
int	ft_printf(const char *format, ...);
int	ft_putnbrlen(int n);
int	ft_unsilen(unsigned int n);
int	ft_hexalen(unsigned long int n, char c);
int	ft_toupper(int c);
int	ft_ptrlen(void *p);

#endif