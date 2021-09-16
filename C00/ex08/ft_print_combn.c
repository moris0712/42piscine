/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                               +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:39:55 by junyounp        #+#    #+#             */
/*   Updated: 2021/09/13 17:40:13 by junyounp       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	is_last(char str[], int length)
{
	int	result;
	int	i;

	i = length - 1;
	result = 1;
	while (i >= 0)
	{
		if (str [i] != '9' - (length - 1 - i))
		{
			result = 0;
			return (0);
		}
		i--;
	}
	return (result);
}

void	dfs(char str[], int length, char pos, int depth)
{
	int		last;
	char	i;

	if (length == depth)
	{
		write(1, str, length);
		last = is_last(str, length);
		if (last == 0)
			write(1, ", ", 2);
		return ;
	}
	i = pos + 1;
	while (i <= '9' - ((length - 1) - depth))
	{
		str [depth] = i;
		dfs (str, length, i, depth + 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	char	str[10];
	int		length;

	length = 0;
	while (length < n)
	{
		str [length] = '0';
		length++;
	}
	dfs(str, length, '0' - 1, 0);
}
