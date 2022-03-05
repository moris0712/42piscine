/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:11:53 by junyounp          #+#    #+#             */
/*   Updated: 2022/02/28 17:11:55 by junyounp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include "libft.h"

unsigned int	printf_int2(int num, int *len)
{
	unsigned int	temp;

	if (num < 0)
	{
		*len += 1;
		write(1, "-", 1);
		temp = num * (-1);
	}
	else if (num > 0)
		temp = num;
	else
		return (0);
	return (temp);
}
