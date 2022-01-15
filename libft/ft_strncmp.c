/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:36:48 by junyounp          #+#    #+#             */
/*   Updated: 2021/12/08 18:36:50 by junyounp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*uc_s1;
	unsigned char	*uc_s2;

	i = 0;
	uc_s1 = (unsigned char *)s1;
	uc_s2 = (unsigned char *)s2;
	while (i < n)
	{
		if (uc_s1[i] == '\0')
			return (-uc_s2[i]);
		if (uc_s2[i] == '\0')
			return (uc_s1[i]);
		if (uc_s1[i] > uc_s2[i])
			return (uc_s1[i] - uc_s2[i]);
		else if (uc_s1[i] < uc_s2[i])
			return (uc_s1[i] - uc_s2[i]);
		i++;
	}
	return (0);
}
