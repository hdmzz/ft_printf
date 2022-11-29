#include "../ft_printf.h"

int	ft_putnbr_base(long long nb, char *base)
{
	long long	baselen;
	int					res[100];
	int					i;
	int					total;
	int					sign;

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
