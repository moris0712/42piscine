/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:11:53 by junyounp          #+#    #+#             */
/*   Updated: 2022/02/28 17:11:55 by junyounp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include "libft.h"

int	print_pointer(va_list ptr, int len)
{
	size_t	point;
	char	*addr;
	int		length;

	write(1, "0x", 2);
	point = va_arg(ptr, size_t);
	if (point == 0)
	{
		write(1, "0", 1);
		return (len + 3);
	}
	addr = return_notation(point, g_16lbase, 16);
	if (addr == NULL)
		return (-1);
	length = ft_strlen(addr);
	write(1, addr, length);
	len += 2;
	len += length;
	free(addr);
	return (len);
}

int	print_int(va_list ptr, int len)
{
	int				integer;
	unsigned int	temp;
	int				length;
	char			*decimal;

	integer = va_arg(ptr, int);
	temp = printf_int2(integer, &len);
	if (temp == 0)
	{
		write(1, "0", 1);
		return (len + 1);
	}
	decimal = return_notation(temp, g_10base, 10);
	if (decimal == NULL)
		return (-1);
	length = ft_strlen(decimal);
	write(1, decimal, length);
	len += length;
	free(decimal);
	return (len);
}

int	print_unsigned_int(va_list ptr, int len)
{
	unsigned int	uinteger;
	int				length;
	char			*decimal;

	uinteger = va_arg(ptr, unsigned int);
	if (uinteger == 0)
	{
		write(1, "0", 1);
		return (len + 1);
	}
	decimal = return_notation(uinteger, g_10base, 10);
	if (decimal == NULL)
		return (-1);
	length = ft_strlen(decimal);
	write(1, decimal, length);
	len += length;
	free(decimal);
	return (len);
}

int	print_hexadecimal(va_list ptr, int len, char c)
{
	unsigned int	hexa;
	char			*addr;
	int				length;

	hexa = va_arg(ptr, unsigned int);
	if (hexa == 0)
	{
		write(1, "0", 1);
		return (len + 1);
	}
	if (c == 'x')
		addr = return_notation(hexa, g_16lbase, 16);
	if (c == 'X')
		addr = return_notation(hexa, g_16ubase, 16);
	if (addr == NULL)
		return (-1);
	length = ft_strlen(addr);
	write(1, addr, length);
	len += length;
	free(addr);
	return (len);
}
