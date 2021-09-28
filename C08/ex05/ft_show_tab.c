/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:25:12 by junyounp          #+#    #+#             */
/*   Updated: 2021/09/27 14:25:13 by junyounp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

void	number(int size)
{
	unsigned int	n;
	char			result;

	if (size < 0)
		n = -size;
	else
		n = size;
	if (n >= 10)
		number(n / 10);
	result = n % 10 + 48;
	write(1, &result, 1);
}

void	print_copy(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	write(1, str, i);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int		i;

	i = 0;
	while ((par + i)->str != 0)
	{
		write(1, par[i].str, par[i].size);
		write(1, "\n", 1);
		number(par[i].size);
		write(1, "\n", 1);
		print_copy(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
	return ;
}
