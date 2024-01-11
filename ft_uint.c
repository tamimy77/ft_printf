/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzadakan <mzadakan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 14:50:27 by mzadakan          #+#    #+#             */
/*   Updated: 2023/07/27 17:22:54 by mzadakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_uint(unsigned int i)
{
	unsigned int	x;
	int				y;

	x = i;
	y = 0;
	ft_uputnbr(i);
	if (i == 0 || i == (unsigned int)LONG_MIN)
	{
		return (1);
	}
	while (x != 0)
	{
		x = x / 10;
		y++;
	}
	return (y);
}
