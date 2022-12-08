/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:41:41 by hdamitzi          #+#    #+#             */
/*   Updated: 2022/11/30 11:41:44 by hdamitzi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_dispatch(va_list params, const char *format, int i)
{
	int	total;

	total = 0;
	if (format[i] == 's')
		total += ft_putstr(va_arg(params, char *));
	else if (format[i] == 'c')
		total += ft_putchar(va_arg(params, int));
	else if (format[i] == 'x')
		total += ft_putnbr_base(va_arg(params, unsigned int),
				"0123456789abcdef");
	else if (format[i] == 'X')
		total += ft_putnbr_base(va_arg(params, unsigned int),
				"0123456789ABCDEF");
	else if (format[i] == 'p')
		total += ft_print_pointer(va_arg(params, void *));
	else if (format[i] == 'd' || format[i] == 'i')
		total += ft_putnbr(va_arg(params, int));
	else if (format[i] == 'u')
		total += ft_putnbr_u(va_arg(params, unsigned int));
	else if (format[i] == '%')
		total += write(1, "%", 1);
	return (total);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		total;

	i = 0;
	total = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			total += ft_dispatch(args, format, i + 1);
			i++;
		}
		else
			total += ft_putchar(format[i]);
		i++;
	}
	return (total);
}
