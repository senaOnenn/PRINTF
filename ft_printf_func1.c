/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_func1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonen <eonen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 16:43:53 by eonen             #+#    #+#             */
/*   Updated: 2025/08/01 16:56:55 by eonen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr_decimal(long long n)
{
    int printed_chars = 0;
    char *base = "0123456789";
    
    if (n  == LONG_MIN)
        return (ft_putstr("-9223372036854775808"));
    if (n < 0)
    {
        printed_chars += ft_putchar('-');
        n = -n;
    }
    printed_chars += ft_putnbr_base(n , base);
    return printed_chars;
}
