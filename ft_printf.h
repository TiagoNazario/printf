/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnazario <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 10:54:09 by tnazario          #+#    #+#             */
/*   Updated: 2023/04/13 10:54:29 by tnazario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_put_c(char c);
int	ft_put_s(char *s);
int	ft_put_id(int n);
int	ft_put_u(unsigned int n);
int	ft_put_x(unsigned long long n, char format);
int	ft_put_p(unsigned long long p);
int	ft_printf(const char *s_format, ...);

#endif
