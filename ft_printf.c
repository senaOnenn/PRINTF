/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonen <eonen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:21:54 by eonen             #+#    #+#             */
/*   Updated: 2025/08/01 16:18:14 by eonen            ###   ########.fr       */
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
    
}