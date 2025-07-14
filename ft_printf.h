/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonen <eonen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:23:10 by eonen             #+#    #+#             */
/*   Updated: 2025/07/14 12:30:57 by eonen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT.H
#define FT_PRINT.h

#include <unistd.h>
#include <stdarg.h>

int ft_printf(const char *format, ...);

#endif