#include "ft_printf.h"

int ft_criterios(va_list arg, char format)
{
    int len;

    len = 0;
    if (format == 'c')
        len =
            if (format == '%')
                len =
                    if (format == 's')
                        len =
                            if (format == 'i' || format == 'd')
                                len =
                                    if (format == 'u')
                                        len =
                                            if (format == 'x')
                                                len =
                                                    if (format == 'p')
                                                        len =
                                                            return (len);
}

int ft_printf(const char *str)
{
    va_list arg;
    int len;
    int i;

    va_start(arg, str);
    i = 0;
    len = 0;
    while (str[i])
    {
        if (str[i] == '%')
        {
            len += ft_criterios(arg, str[i + 1]);
            i++;
        }
        else
            len += ft_putchar_fd(str[i], 1);
        i++;
    }
    va_end(arg);
    return (len);
}