/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_func.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonen <eonen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:21:41 by eonen             #+#    #+#             */
/*   Updated: 2025/08/01 16:41:27 by eonen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int get_base_len(char *base_chars)
{
	int len = 0;
	while(base_chars[len])
	{
		len++;
	}	
	return len;
}

int ft_putnbr_base(long long n, char *base_chars)
{
	int count;
	int base_len;
	
	base_len = get_base_len(base_chars);
	count = 0;
	if(n < 0)
	{
		count += ft_putchar('-');
		n = -n;
	}
	if(n >= base_len)
		count += ft_putnbr_base(n/base_len, base_chars);
	count += ft_putchar(&base_chars[n % base_len]);
	return (count);
}

int ft_put_hex_ptr(void *ptr)
{
	
}

int ft_put_unsigned_nbr(unsigned int n)
{
	
}