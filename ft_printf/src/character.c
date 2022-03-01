/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:11:53 by junyounp          #+#    #+#             */
/*   Updated: 2022/02/28 17:11:55 by junyounp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include "libft.h"

int	print_char(va_list ptr, int len)
{
	char	ch;

	ch = va_arg(ptr, int);
	write(1, &ch, 1);
	len++;
	return (len);
}

int	print_string(va_list ptr, int len)
{
	char	*word;

	word = va_arg(ptr, char *);
	if (word == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (*word)
	{
		write(1, word, 1);
		word++;
		len++;
	}
	return (len);
}
