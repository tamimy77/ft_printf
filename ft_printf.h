/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzadakan <mzadakan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:47:08 by mzadakan          #+#    #+#             */
/*   Updated: 2023/07/27 16:42:41 by mzadakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

void	ft_putstr(char *str);

int		ft_string(char *str);

int		ft_char(char c);

int		ft_strlen(char *str);

void	ft_putnbr(int n);

void	ft_uputnbr(unsigned long int n);

int		ft_putchar(char c);

int		ft_int(int i);

int		ft_uint(unsigned int i);

int		type(const char mt, va_list *args);

int		ft_printf(const char *mt, ...);

int		ft_digit(int i);

int		ft_lower_hex(unsigned int i);

int		ft_upper_hex(unsigned int i);

int		ft_pointer(unsigned long i);

#endif