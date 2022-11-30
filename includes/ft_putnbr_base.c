/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:47:02 by hdamitzi          #+#    #+#             */
/*   Updated: 2022/11/30 11:47:04 by hdamitzi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr_base(long long nb, char *base)
{
	long long	baselen;
	int			res[100];
	int			i;
	int			total;

	baselen = ft_strlen(base);
	i = 0;
	total = 0;
	if (nb < 0)
	{
		res[i] = '-';
		nb = -nb;
		i++;
	}
	while (nb >= baselen)
	{
		res[i] = base[nb % baselen];
		nb = nb / baselen;
		i++;
	}
	res[i] = base[nb];
	while (i >= 0)
		total += ft_putchar(res[i--]);
	return (total);
}
