/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:48:08 by hdamitzi          #+#    #+#             */
/*   Updated: 2022/11/30 11:48:10 by hdamitzi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

int	ft_putnbr_u(unsigned long nl)
{
	unsigned long	num;
	int				total;


	total = 0;
	num = nl;
	if (num >= 100)
		total += ft_putnbr(num / 10);
	else if ((num / 10) > 0)
		total += ft_putchar((num / 10) + '0');
	total += ft_putchar(((num % 10) + '0'));
	return (total);
}
