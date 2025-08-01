/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_func1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonen <eonen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 16:43:53 by eonen             #+#    #+#             */
/*   Updated: 2025/08/01 17:35:05 by eonen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr_decimal(long long n)
{
    int count;
    char *base;
    
    count = 0;
    base = "0123456789";
    
    if (n  == LONG_MIN)
        return (ft_putstr("-9223372036854775808"));
    if (n < 0)
    {
        count += ft_putchar('-');
        n = -n;
    }
    count += ft_putnbr_base(n , base);
    return (count);
}
