/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 02:22:05 by junyounp        #+#    #+#             */
/*   Updated: 2021/09/20 02:22:15 by junyounp       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	output_hexa(unsigned char str, int i)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (str > 16)
	{
		output_hexa(str / 16, ++i);
		output_hexa(str % 16, ++i);
	}
	else
	{
		if (i == 0)
			write(1, "0", 1);
		write(1, &hex[str], 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) < ' ' || '~' < *(str + i))
		{
			write(1, "\\", 1);
			output_hexa(*(str + i), 0);
		}
		else
			write(1, (str + i), 1);
		i++;
	}
}
