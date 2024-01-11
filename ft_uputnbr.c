/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uputnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzadakan <mzadakan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 16:37:28 by mzadakan          #+#    #+#             */
/*   Updated: 2023/07/27 16:38:01 by mzadakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_uputnbr(unsigned long int n)
{
	if (n == (unsigned long)LONG_MIN)
	{
		ft_putchar('0');
	}
	else if (n > 4294967295)
	{
		ft_putchar('4');
		ft_uputnbr(294967295);
	}
	else if (n == 4294967295)
	{
		ft_putchar('4');
		ft_uputnbr(294967295);
	}
	else if (n < 10)
	{
		ft_putchar(n + '0');
	}
	else
	{
		ft_uputnbr(n / 10);
		ft_uputnbr(n % 10);
	}
}
