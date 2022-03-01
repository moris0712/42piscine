/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:36:48 by junyounp          #+#    #+#             */
/*   Updated: 2021/12/08 18:36:50 by junyounp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*convert(char *str, int n, int len)
{
	unsigned int	num;
	int				digit;

	digit = 1;
	num = n;
	if (n < 0)
	{
		num = n * (-1);
		str[0] = '-';
	}
	else if (n == 0)
		str[0] = '0';
	str[len] = '\0';
	len--;
	while (num != 0)
	{
		str[len] = num % 10 + '0';
		num /= 10;
		len--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	int		tmp_n;
	int		sign;

	len = 0;
	tmp_n = n;
	while (tmp_n != 0)
	{
		tmp_n /= 10;
		len++;
	}
	sign = 0;
	if (n <= 0)
		sign = 1;
	str = (char *) malloc((len + sign + 1) * sizeof(char));
	if (str == NULL)
		return (0);
	str = convert(str, n, len + sign);
	return (str);
}
