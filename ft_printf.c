/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonen <eonen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:21:54 by eonen             #+#    #+#             */
/*   Updated: 2025/08/01 19:28:09 by eonen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    va_list args;
    int count;
    
    count = 0;
    va_start(args , format);
    
    while(*format)
    {
        if(*format == '%')
            count += ft_format(++format, args);
        else
            count += ft_putchar(*format);
        format++;
    }
    va_end(args);
    return (count);
}