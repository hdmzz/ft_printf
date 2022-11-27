#ifndef LIBFT_PRINTF_H
# define LIBFT_PRINTF_H

#include <stdarg.h>
#include <stdlib.h>

typedef struct	s_print
{
	va_list		params;
	int			total_length;
	int			perc;
}				t_print;

int	ft_printf(const char *, ...);

#endif
