#include "ft_printf.h"

void	ft_putc(char c, int *total)
{
	write(1, &c, 1);
	*total += 1;
}

void	ft_puts(char *str, int *total)
{
	if (!str)
		ft_puts("(null)", total);
	while (*str != '\0')
	{
		ft_putc(*str, total);
		str++;
	}
}
