/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_func.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonen <eonen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:21:41 by eonen             #+#    #+#             */
/*   Updated: 2025/08/01 19:18:52 by eonen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int get_base_len(char *base_chars)
{
	int len;
	len = 0;
	while(base_chars[len])
	{
		len++;
	}	
	return len;
}

int ft_putnbr_base(unsigned long long n, char *base_chars)
{
	int count;
	int base_len;
	
	base_len = get_base_len(base_chars);
	count = 0;
	if(n >= (unsigned long long)base_len)
		count += ft_putnbr_base(n / base_len, base_chars);
	count += ft_putchar(base_chars[n % base_len]);
	return (count);
}

int ft_put_hex_ptr(void *ptr)
{
	int count;
	unsigned long long adress;
	char *base;
	
	base = "0123456789abcdef";
	if(ptr == NULL)
		ft_putstr("(nil)");

	count = 0;
	adress = (unsigned long long) ptr;
	count += ft_putstr("0x");
	count += ft_putnbr_base(adress , base);
	return (count);
}

int ft_put_unsigned_nbr(unsigned int n)
{
	char *base;
	unsigned long long number;
	
	base = "0123456789";
	number = (unsigned long long)n;
	
	return(ft_putnbr_base(number, base));
}