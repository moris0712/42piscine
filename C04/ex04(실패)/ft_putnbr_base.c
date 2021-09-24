/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 18:19:06 by junyounp          #+#    #+#             */
/*   Updated: 2021/09/22 18:19:27 by junyounp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	except_1(char *base, int nbr)
{
	if (nbr < 0)
		write(1, "-", 1);
	else if (nbr == 0 && *base != 0 && *(base + 1) != 0)
		write(1, &base[0], 1);
	if (*base == 0)
		return (-1);
	if (*(base + 1) == 0)
		return (-1);
	return (1);
}

int	except_2(char *base)
{
	int	i;
	int	k;

	i = 0;
	while (*(base + i) != '\0')
	{
		if (*(base + i) == '+' || *(base + i) == '-')
			return (-1);
		k = 0;
		while (k < i)
		{
			if (*(base + k) == *(base + i))
				return (-1);
			k++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	char	arr[500];
	int		arr_len;

	if (except_1(base, nbr) == -1)
		return ;
	i = except_2(base);
	if (i == -1)
		return ;
	arr_len = 0;
	while (nbr != 0)
	{
		if (nbr < 0)
			arr[arr_len] = base[-(nbr % i)];
		else
			arr[arr_len] = base[nbr % i];
		nbr /= i;
		arr_len++;
	}
	arr[arr_len] = '\0';
	while (--arr_len >= 0)
		write(1, &arr[arr_len], 1);
}
