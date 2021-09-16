/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:17:16 by junyounp       #+#    #+#             */
/*   Updated: 2021/09/14 14:19:27 by junyounp      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	while_str_2(char str_1[])
{
	char	str_2[2];

	str_2 [0] = str_1 [0];
	str_2 [1] = str_1 [1] + 1;
	while (str_2 [0] <= '9')
	{
		while (str_2 [1] <= '9')
		{
			write(1, str_1, 2);
			write(1, " ", 1);
			write(1, &str_2, 2);
			if (str_1 [0] != '9' || str_1 [1] != '8')
				write(1, ", ", 2);
			str_2 [1]++;
		}
		str_2 [1] = '0';
		str_2 [0]++;
	}
}

void	ft_print_comb2(void)
{
	char	str_1[2];

	str_1 [0] = '0';
	str_1 [1] = '0';
	while (str_1 [0] <= '9')
	{
		while (str_1 [1] <= '9')
		{
			while_str_2(str_1);
			str_1 [1]++;
		}
		str_1 [1] = '0';
		str_1 [0]++;
	}
}
