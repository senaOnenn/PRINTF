/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonen <eonen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:23:10 by eonen             #+#    #+#             */
/*   Updated: 2025/08/01 19:03:00 by eonen            ###   ########.fr       */
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
static int get_base_len(char *base_chars);
int ft_putnbr_decimal(long long n);
int ft_putnbr_hex(unsigned int n, char case_type);

#endif