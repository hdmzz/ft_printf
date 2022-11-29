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
	return (write(1, s, ft_strlen(s)));
}

int	print_number(long nl)
{
	int		total;
	long	num;

	total = 0;
	if (nl < 0)
	{
		total += ft_putchar('-');
		num = -nl;
	}
	if (nl >= 100)
		total += print_number(nl / 10);
	else if (nl > 0)
		total += ft_putchar((nl / 10) + '0');
	total += ft_putchar(((nl / 10) + '0'));
	return (total);
}
