#include "ft_printf.h"

static size_t	ft_dispatch(va_list params, const char *format, int i)
{
	if (format[i] == 's')
		ft_putstr((char *)va_arg(params, const char *));
	else if (format[i] == 'c')
		ft_putchar(va_arg(params, int));
	else if (format[i] == 'x')
		ft_putnbr_base((int)va_arg(params, int), "0123456789abcdef");
	else if (format[i] == 'X')
		ft_putnbr_base((int)va_arg(params, int), "0123456789ABCDEF");
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			ft_dispatch(args, format, i + 1);
			i++;
		}
		else
			ft_putchar(format[i]);
		i++;
	}
	return (i);
}
