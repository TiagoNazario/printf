#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

int ft_put_c(char c);
int ft_put_s(char *s);
int ft_put_id(int n);
int ft_put_u(unsigned int n);
int ft_put_x(unsigned long long n, char format);
int ft_put_p(unsigned long long p);
int ft_printf(const char *s_format, ...);