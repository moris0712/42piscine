/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:36:48 by junyounp          #+#    #+#             */
/*   Updated: 2021/12/08 18:36:50 by junyounp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*tdst;
	const unsigned char	*tsrc;

	i = 0;
	tdst = dst;
	tsrc = src;
	if (dst < src)
	{
		while (i < n)
		{
			tdst[i] = tsrc[i];
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			tdst[n - i - 1] = tsrc[n - i - 1];
			i++;
		}
	}
	return (dst);
}
