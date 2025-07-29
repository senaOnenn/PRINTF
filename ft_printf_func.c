/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_func.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonen <eonen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:21:41 by eonen             #+#    #+#             */
/*   Updated: 2025/07/29 17:10:14 by eonen            ###   ########.fr       */
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

int ft_putnbr_base(long long n, char *base_chars)
{
	
}

int ft_put_hex_ptr(void *ptr)
{
	
}

int ft_put_unsigned_nbr(unsigned int n)
{
	
}