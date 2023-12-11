/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:46:19 by acarpent          #+#    #+#             */
/*   Updated: 2023/12/11 14:33:08 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef LIBFTPRINTF_h
# define LIBFTPRINTF_h
# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

int	ft_printf(const char *format, ...);
int	ft_printchar(char c);
int	ft_printstr(char *str);
int	ft_printptr(uintptr_t n);
int	ft_printint(int n);
int	ft_printunsi(unsigned int n);
int	ft_printhexa(uintptr_t n, int mode);
void		ft_putstr_fd(char *s, int fd);

#endif
