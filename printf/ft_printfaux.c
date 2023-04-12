#include "ft_printf.h"

int ft_put_c(char c)
{
    write(1, &c, 1);
    return (1);
}

ft ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

int ft_put_s(char *s)
{
    if (!s)
        return (write(1, "(null)", 6));
    return (write(1, s, ft_strlen(s)));
}