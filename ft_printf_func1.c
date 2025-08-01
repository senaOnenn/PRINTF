/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_func1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonen <eonen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 16:43:53 by eonen             #+#    #+#             */
/*   Updated: 2025/08/01 19:26:49 by eonen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

<int ft_putnbr_decimal(long long n)
{
    int count;
    char *base;
    
    count = 0;
    base = "0123456789";
    
    if (n  == -9223372036854775808)
        return (ft_putstr("-9223372036854775808"));
    if (n < 0)
    {
        count += ft_putchar('-');
        n = -n;
    }
    count += ft_putnbr_base(n , base);
    return (count);
}

int ft_putnbr_hex(unsigned int n, char case_type)
{
    char *base;
    unsigned long long number;

    number = (unsigned long long)n;

    if(case_type == 'x')
        base = "0123456789abcdef";
    else
        base = "0123456789ABCDEF";
    return (ft_putnbr_base(number, base));
}

int ft_putchar(char c)
{
	return (write(1,&c,1));
}

int ft_putstr(char *s)
{
    int count;

    count = 0;
	if(!s)
		return (ft_putstr("null"));
	while(*s != '\0')
	{
		count += write(1,s,1);
		s++;
	}
	return (count);
}

int ft_format(const char **format, va_list args)
{
    int count;

    count = 0;
    if(**format == 'c')
        count += ft_putchar(va_arg(args, int));
    else if(**format == 's')
        count += ft_putstr(va_arg(args, char *));
    else if(**format == 'd' || *format =='i')
        count += ft_putnbr_decimal(va_arg(args, int));
    else if(**format == 'u')
        count += ft_put_unsigned_nbr(va_arg(args, unsigned int));
    else if(**format == 'x')
        count += ft_putnbr_hex(va_arg(args, unsigned int), 'x');
    else if(**format == 'X')
        count += ft_putnbr_hex(va_arg(args, unsigned int), 'X');
    else if(**format == 'p')
        count += ft_put_hex_ptr(va_arg(args, void *));
    else if(**format == '%')
        count += ft_putchar('%');
    else
        count += ft_putchar(*format);
    return (count);
}