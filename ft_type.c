/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzadakan <mzadakan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 18:00:44 by mzadakan          #+#    #+#             */
/*   Updated: 2023/07/30 12:30:01 by mzadakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	type(char typ, va_list *args)
{
	if (typ == 'c')
		return (ft_putchar(va_arg(*args, int)));
	else if (typ == 's')
		return (ft_string(va_arg(*args, char *)));
	else if (typ == 'p')
		return (ft_pointer(va_arg(*args, unsigned long)));
	else if (typ == 'd')
		return (ft_digit(va_arg(*args, unsigned int)));
	else if (typ == 'i')
		return (ft_digit(va_arg(*args, unsigned int)));
	else if (typ == 'u')
		return (ft_uint(va_arg(*args, unsigned int)));
	else if (typ == 'x')
		return (ft_lower_hex(va_arg(*args, unsigned int)));
	else if (typ == 'X')
		return (ft_upper_hex(va_arg(*args, unsigned int)));
	else if (typ == '%')
		return (ft_putchar('%'));
	return (0);
}
