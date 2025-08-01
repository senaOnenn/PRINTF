/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonen <eonen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:21:54 by eonen             #+#    #+#             */
/*   Updated: 2025/08/01 18:50:16 by eonen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putchar(char c)
{
	return (write(1,&c,1));
}

int ft_putstr(char *s)
{
	if(!s)
		return;
	while(*s != '\0')
	{
		write(1,s,1);
		s++;
	}
	return (s);
}

int ft_printf(const char *format, ...)
{
    va_list args;
    int count = 0;
    va_start(args , format);
    
    while(*format)
    {
        if(*format == '%')
        {
            format++;
            if(*format == 'c')
                count += ft_putchar(va_arg(args, int));
            else if(*format == 's')
                count += ft_putstr(va_arg(args, char *));
            else if(*format == 'd' || *format =='i')
                count += ft_putnbr_decimal(va_arg(args, int));
            else if(*format = 'u')
                count += ft_put_unsigned_nbr(va_arg(args, unsigned int));
            else if(*format = 'x')
                count += ft_putnbr_hex(va_arg(args, unsigned int), 'x');
            else if(*format = 'X')
                count += ft_putnbr_hex(va_arg(args, unsigned int), 'X');
            else if(*format = 'p')
                count += ft_put_hex_ptr(va_arg(args, void *));
            else if(*format == '%')
                count += ft_putchar('%');
            else
                count += ft_putchar(*format);
        }
        else
            count += ft_putchar(*format);
        format++;
    }
    va_end(args);
    return (count);
}