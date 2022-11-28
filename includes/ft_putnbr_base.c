#include "../ft_printf.h"

int	ft_putnbr_base(int nb, char *base)
{
	int	baselen;
	int	i;

	baselen = ft_strlen(base);
	i = 0;
	if (nb > baselen)
	{
		ft_putnbr_base((nb / baselen), base);
		ft_putchar(base[nb % baselen]);
		i++;
	}
	else
		ft_putchar(base[nb]);
	return (i + 1);
}
