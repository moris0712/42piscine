/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:43:01 by junyounp        #+#    #+#             */
/*   Updated: 2021/09/14 15:43:16 by junyounp       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	except_case(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (-1);
	}
	else if (nb == 0)
	{
		write(1, "0", 1);
		return (-1);
	}	
	else if (nb < 0)
	{
		write(1, "-", 1);
		return (-nb);
	}
	else
		return (nb);
}

int	solve_length(int nb)
{
	int	length;

	length = 0;
	while (nb > 0)
	{
		nb /= 10;
		length++;
	}
	return (length);
}

void	ft_putnbr(int nb)
{
	int		length;
	int		temp_length;
	int		n;
	char	str[11];

	n = except_case(nb);
	if (n == -1)
		return ;
	length = solve_length(n);
	temp_length = length;
	length = length - 1;
	while (length >= 0)
	{
		str[length] = n % 10 + 48;
		length--;
		n /= 10;
	}
	write(1, &str, temp_length);
}
