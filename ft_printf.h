/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonen <eonen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:23:10 by eonen             #+#    #+#             */
/*   Updated: 2025/07/29 17:06:29 by eonen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT.H
#define FT_PRINT.h

#include <unistd.h>
#include <stdarg.h>

int ft_printf(const char *format, ...);
int ft_putchar(char c);
int ft_putstr(char *s);
int ft_putnbr_base(long long n, char *base_chars);
int ft_put_hex_ptr(void *ptr);
int ft_put_unsigned_nbr(unsigned int n);

#endif