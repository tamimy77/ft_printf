/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzadakan <mzadakan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 13:31:17 by mzadakan          #+#    #+#             */
/*   Updated: 2023/07/30 12:30:13 by mzadakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *mt, ...)
{
	int		i;
	va_list	args;
	int		counter;

	va_start(args, mt);
	i = 0;
	counter = 0;
	while (mt[i])
	{
		if (mt[i] == '%')
		{
			i++;
			counter = counter + type(mt[i], &args);
		}
		else
		{
			counter++;
			ft_putchar(mt[i]);
		}
		i++;
	}
	va_end(args);
	return (counter);
}

// int main(void)
// {
// 	int x = printf("%X ", 31);
// 	printf("%d\n", x);
// }