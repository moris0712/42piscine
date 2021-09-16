/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::   */
/*   ft_print_comb.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr>      
+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 16:38:46 by junyounp      #+#    #+#             */
/*   Updated: 2021/09/14 15:02:36 by junyounp     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	char	str[3];

	str[0] = '0';
	str[1] = '1';
	str[2] = '2';
	while (str [0] <= '7')
	{
		while (str [1] <= '8')
		{
			while (str [2] <= '9')
			{
				write (1, &str, 3);
				if (str [0] != '7' || str [1] != '8' || str [2] != '9')
					write (1, ", ", 2);
				str [2]++;
			}
			str [1]++;
			str [2] = str [1] + 1;
		}
		str [0]++;
		str [1] = str [0];
	}
}
