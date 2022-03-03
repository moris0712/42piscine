/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:36:48 by junyounp          #+#    #+#             */
/*   Updated: 2021/12/08 18:36:50 by junyounp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	find(const char *haystack, const char *needle, size_t len, size_t i)
{
	while (*needle != '\0')
	{
		if (*haystack != *needle)
			return (-1);
		haystack++;
		needle++;
		if (i == len)
			return (-1);
		i++;
	}
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (*haystack && i < len)
	{
		if (*haystack == needle[0])
		{
			if (find(haystack, needle, len, i) == 1)
				return ((char *)haystack);
		}
		haystack++;
		i++;
	}
	return (0);
}
