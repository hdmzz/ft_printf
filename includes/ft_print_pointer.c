/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:42:10 by hdamitzi          #+#    #+#             */
/*   Updated: 2022/11/30 11:42:12 by hdamitzi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_long_hex(long addr)
{
	char	c;
	int		total;

	total = 0;
	if (addr >= 16)
	{
		total += ft_print_long_hex(addr / 16);
		total += ft_print_long_hex(addr % 16);
	}
	else
	{
		c = (addr % 16) + '0';
		if ((addr % 16) > 9)
			c = ((addr % 16) + 87);
		write(1, &c, 1);
		total++;
	}
	return (total);
}

int	ft_print_pointer(void *thing)
{
	int		total;
	long	addr;

	total = 0;
	addr = (long unsigned)thing;
	total += ft_putstr("0x");
	total += ft_print_long_hex(addr);
	return (total);
}
