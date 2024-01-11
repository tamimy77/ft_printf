/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzadakan <mzadakan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:49:52 by mzadakan          #+#    #+#             */
/*   Updated: 2023/07/30 10:44:02 by mzadakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(unsigned long i)
{
	int		x;
	int		y;
	char	hex[40];
	char	*hnum;

	x = 0;
	hnum = "0123456789abcdef";
	ft_putstr("0x");
	if (i == 0)
	{
		ft_putchar('0');
		return (3);
	}
	while (i != 0)
	{
		hex[x] = hnum[i % 16];
		i = i / 16;
		x++;
	}
	y = x;
	while (x > 0)
	{
		ft_putchar(hex[x-- - 1]);
	}
	return (y + 2);
}
