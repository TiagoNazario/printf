/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnazario <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:33:28 by tnazario          #+#    #+#             */
/*   Updated: 2023/03/02 15:33:37 by tnazario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_criterios(va_list arg, char format)
{
	if (format == 'c')
		return ();
	else if (format == '%')
		return ();
	else if (format == 's')
		return ();
	else if (format == 'i' || format == 'd')
		return ();
	else if (format == 'u')
		return ();
	else if (format == 'x')
		return ();
	else if (format == 'p')
		return ();
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
