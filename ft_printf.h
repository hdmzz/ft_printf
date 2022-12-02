/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:41:49 by hdamitzi          #+#    #+#             */
/*   Updated: 2022/11/30 11:41:52 by hdamitzi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);

int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr_base(long long nb, char *base);
int		ft_print_pointer(unsigned long long thing);
int		ft_putnbr(long nl);
int		ft_putnbr_u(unsigned long nl);

size_t	ft_strlen(const char *s);

#endif
