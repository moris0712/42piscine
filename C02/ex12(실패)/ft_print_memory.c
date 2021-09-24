/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 05:07:30 by junyounp         #+#    #+#             */
/*   Updated: 2021/09/20 05:07:37 by junyounp        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

const char	*g_hex = "0123456789abcdef";

void	put_char(char *addr_str, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (' ' <= addr_str[i] && addr_str[i] <= '~')
			write(1, &addr_str[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
}

void	output_hexa(unsigned char str, int i)
{
	if (str > 16)
	{
		output_hexa(str / 16, ++i);
		output_hexa(str % 16, ++i);
	}
	else
	{
		if (i == 0)
			write(1, "0", 1);
		write(1, &g_hex[str], 1);
	}
}

void	put_line(void *addr, int size)
{
	int		i;
	int		sp_to_print;
	char	*addr_str;

	addr_str = (char *)addr;
	i = 0;
	while (i < size)
	{
		output_hexa(addr_str[i++], 0);
		if (i % 2 == 0)
			write(1, " ", 1);
	}
	sp_to_print = ((16 - size) * 2) + (19 - size) / 2;
	while (--sp_to_print > 0)
		write(1, " ", 1);
	put_char(addr_str, size);
}

void	put_addr(void *addr)
{
	char	addr_str[15];
	int		hex_index;
	long	addr_long;
	int		i;

	addr_long = (long)addr;
	i = 0;
	while (addr_long > 0)
	{
		hex_index = addr_long % 16;
		addr_str[i] = g_hex[hex_index];
		addr_long /= 16;
		i++;
	}
	while (i < 15)
		addr_str[i++] = '0';
	while (0 <= --i)
		write(1, &addr_str[i], 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	char_print;

	i = 0;
	while (0 < size)
	{
		if (16 <= size)
		{
			char_print = 16;
			size -= 16;
		}
		else
		{
			char_print = size;
			size = 0;
		}
		put_addr(addr + i);
		write(1, ":", 1);
		write(1, " ", 1);
		put_line(addr + i, char_print);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}
