/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lower_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzadakan <mzadakan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:13:55 by mzadakan          #+#    #+#             */
/*   Updated: 2023/07/30 12:30:40 by mzadakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lower_hex(unsigned int i)
{
	int		x;
	int		y;
	char	hex[40];
	char	*hnum;

	x = 0;
	hnum = "0123456789abcdef";
	if (i == 0 || i == (unsigned int)LONG_MIN)
	{
		ft_putchar('0');
		return (1);
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
		ft_putchar(hex[x - 1]);
		x--;
	}
	return (y);
}
