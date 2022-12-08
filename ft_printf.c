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

void	ft_dispatch(va_list params, const char *format, int i, int *total)
{
	if (format[i] == 's')
		ft_puts(va_arg(params, char *), total);
	else if (format[i] == 'c')
		ft_putc(va_arg(params, int), total);
	else if (format[i] == 'x')
		ft_putnb_base(va_arg(params, unsigned int),
				"0123456789abcdef", total);
	else if (format[i] == 'X')
		ft_putnb_base(va_arg(params, unsigned int),
				"0123456789ABCDEF", total);
	/* else if (format[i] == 'p')
		ft_print_pointer(va_arg(params, void *)); */
	else if (format[i] == 'd' || format[i] == 'i')
		ft_putnb(va_arg(params, int), total);
	/* else if (format[i] == 'u')
		ft_putnbr_u(va_arg(params, unsigned int));
	else if (format[i] == '%')
		write(1, "%", 1); */
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
			ft_dispatch(args, format, i + 1, &total);
			i++;
		}
		else
			ft_putc(format[i], &total);
		i++;
	}
	return (total);
}
