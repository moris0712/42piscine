/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:11:53 by junyounp          #+#    #+#             */
/*   Updated: 2022/02/28 17:11:55 by junyounp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

static char		g_16ubase[] = "0123456789ABCDEF";
static char		g_16lbase[] = "0123456789abcdef";
static char		g_10base[] = "0123456789";

char	*return_notation(unsigned long long int ptr, char *base, int notation);
int		find_format(char args, va_list arg_ptr, int len);
int		ft_printf(const char *args, ...);
int		print_pointer(va_list ptr, int len);
int		print_int(va_list ptr, int len);
int		print_unsigned_int(va_list ptr, int len);
int		print_hexadecimal(va_list ptr, int len, char c);
int		print_char(va_list ptr, int len);
int		print_string(va_list ptr, int len);

#endif