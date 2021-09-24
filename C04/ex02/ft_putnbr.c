/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:31:04 by junyounp          #+#    #+#             */
/*   Updated: 2021/09/22 12:26:28 by junyounp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	except(unsigned int *n, int *nb)
{
	if (*nb < 0)
	{
		write(1, "-", 1);
		*n = (*nb) * -1;
	}
	else if (*nb == 0)
		write(1, "0", 1);
	else
		*n = *nb;
}

void	ft_putnbr(int nb)
{
	int				str_len;
	char			str[10];
	unsigned int	n;

	except(&n, &nb);
	str_len = 0;
	while (n > 0)
	{
		str[str_len++] = n % 10 + 48;
		n /= 10;
	}
	while (--str_len >= 0)
		write(1, &str[str_len], 1);
}
