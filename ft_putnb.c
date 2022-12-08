#include "ft_printf.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_putnb_base(long long nb, char *base, int *total)
{
	if (nb >= ft_strlen(base))
		ft_putnb_base(nb / ft_strlen(base), base, total);
	ft_putc(base[nb % ft_strlen(base)], total);
}

void ft_putnb(unsigned long long nl, int *total)
{
	long long	num;

	num = nl;
	if (num < 0)
	{
			ft_putc('-', total);
		num = -num;
	}
	ft_putnb_base(num, "0123456789", total);
}
