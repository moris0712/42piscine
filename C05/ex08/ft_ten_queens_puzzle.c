/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 22:13:54 by junyounp          #+#    #+#             */
/*   Updated: 2021/09/26 12:39:38 by junyounp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

static int	g_count;

void	print(int *arr)
{
	int		i;
	char	str;

	i = 0;
	while (i < 10)
	{
		str = arr[i] + 48;
		write(1, &str, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	success(int *arr)
{
	int	k;
	int	print_able;

	k = 0;
	print_able = 1;
	while (k < 10)
	{
		if (arr[k] == -1)
		{
			print_able = 0;
			return (-1);
		}
		k++;
	}
	g_count++;
	return (1);
}

int	check_put(int *arr, int i, int j)
{
	int	k;
	int	abs_row;
	int	abs_col;

	k = 0;
	while (k < i)
	{
		if (k - i > 0)
			abs_col = k - i;
		else
			abs_col = i - k;
		if (arr[k] - j > 0)
			abs_row = arr[k] - j;
		else
			abs_row = j - arr[k];
		if (i == k || j == arr[k] || (abs_col == abs_row))
			return (-1);
		k++;
	}
	return (1);
}

void	rollin(int *arr, int i)
{
	int	j;

	if (i == 10)
	{
		if (success(arr) == 1)
			print(arr);
		return ;
	}
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (check_put(arr, i, j) == 1)
			{
				arr[i] = j;
				rollin(arr, i + 1);
				arr[i] = -1;
			}
			j++;
		}
		i++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	arr[10];
	int	i;

	i = 0;
	g_count = 0;
	while (i < 10)
		arr[i++] = -1;
	rollin(arr, 0);
	return (g_count);
}
