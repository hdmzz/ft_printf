/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:42:22 by hdamitzi          #+#    #+#             */
/*   Updated: 2022/11/30 11:42:24 by hdamitzi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	if (!s)
		return (ft_putstr("(null)"));
	return (write(1, s, ft_strlen(s)));
}

int	ft_putnbr(long nl)
{
	int		total;
	long	num;

	total = 0;
	num = nl;
	if (num < 0)
	{
		total += ft_putchar('-');
		num = -num;
	}
	if (num >= 100)
		total += ft_putnbr(num / 10);
	else if ((num / 10) > 0)
		total += ft_putchar((num / 10) + '0');
	total += ft_putchar(((num % 10) + '0'));
	return (total);
}
