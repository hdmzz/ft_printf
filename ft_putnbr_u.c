#include "./ft_printf.h"

int	print_unumber(unsigned long nl)
{
	int				total;
	unsigned long	num;

	total = 0;
	num = nl;
	if (num > 100)
		total += print_unumber(num / 10);
	else if (num == 100)
		total += print_str("10");
	else if ((num / 10) > 0)
		total += print_char((num / 10) + '0');
	total += print_char((num % 10) + '0');
	return (total);
}
