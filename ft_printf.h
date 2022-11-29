#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);

int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr_base(long long nb, char *base);
int		ft_print_pointer(void *thing);
int		ft_putnbr(long nbr);
int		print_number(long nl);

size_t	ft_strlen(const char *s);

#endif
