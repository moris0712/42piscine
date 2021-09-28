/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 11:36:34 by junyounp          #+#    #+#             */
/*   Updated: 2021/09/27 11:36:36 by junyounp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

char	*string_copy(char *str)
{
	int		i;
	char	*result;

	i = 0;
	while (str[i])
		i++;
	result = (char *)malloc((i + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		result[i] = str[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*ts;

	ts = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!ts)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		ts[i].size = ft_strlen(av[i]);
		ts[i].str = av[i];
		ts[i].copy = string_copy(av[i]);
		if (!ts[i].copy)
			return (NULL);
		i++;
	}
	ts[i].str = 0;
	return (ts);
}
