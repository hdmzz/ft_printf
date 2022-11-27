#include "ft_printf.h"

static t_print	*ft_initialize_tab(t_print *tab)
{
	tab->total_length = 0;
	tab->perc = 0;
	return (tab);
}

static size_t	ft_dispatch(va_list tab, const char *format, int i)
{

	if (format[i] == 's')
		ft_putstr(va_arg(tab, const char *));
	if (format[i] == 'c')
		ft_putchar(va_arg(tab, int));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	t_print	*tab;
	int		i;

	tab = (t_print *)malloc(sizeof(t_print));
	if (!tab)
		return (-1);
	i = 0;
	ft_initialize_tab(tab);
	va_start(tab->params, format);
	while (format[i++])
	{
		if (format[i] == '%')
			ft_dispatch(tab->params, format, i + 1);
		else
			write(1, &format[i], 1);
	}
}
