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


// void *addr 현재 함수가 반환 할 코드 주소를 제공

// 또한 void함수임에도 불구하고 return addr을 안해주면 자꾸 non void뭐시기 오류가 거슬리게 뜸

// 받은 문자를 16개씩 나누어서 각각 변환

// 0007ffeeea05920: 426f 6e6a 6f75 7220 6c65 7320 616d 6973 Bonjour les amis 형식으로 출력됨

// 첫번째 부분은 16진수 부분은 put_addr , 두번째 4칸씩 16진수 부분은 put_line 세번째 문자열 부분은 put_char이다.
// put_addr 은 addr을 long 타입으로 받아 16진수로 바꾸어 고대로 출력
// put_line 은 addr을 char 타입으로 받아 16진수로 바꾸어 2개문자씩 나눠서 출력
// put_char 는 출력할수있는 문자는 출력, 없으면 . 으로 대체