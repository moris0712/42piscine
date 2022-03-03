/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:36:48 by junyounp          #+#    #+#             */
/*   Updated: 2021/12/08 18:36:50 by junyounp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	null_guard(char **str, size_t row)
{
	size_t	i;

	i = row - 1;
	while (i >= 0)
	{
		free(str[i]);
		if (i == 0)
			break ;
		i--;
	}
	free(str);
}

char	**allocate_str(char const *s, char **str, size_t row, size_t col)
{
	size_t	i;

	i = 0;
	while (i < col)
	{
		s--;
		i++;
	}
	i = 0;
	while (i < col)
	{
		str[row][i] = *s;
		s++;
		i++;
	}
	str[row][i] = '\0';
	return (str);
}

char	**reutrn_col(char const *s, char c, size_t row, char **str)
{
	size_t	col;
	size_t	i;

	i = 0;
	while (i < row)
	{
		while (*s == c)
			s++;
		col = 0;
		while (*s != c && *s)
		{
			s++;
			col++;
		}
		str[i] = (char *) malloc((col + 1) * sizeof(char));
		if (str[i] == NULL)
			null_guard(str, i);
		allocate_str(s, str, i, col);
		i++;
	}
	return (str);
}

size_t	return_row(char const *s, char c)
{
	size_t	row;
	int		flag;

	row = 0;
	flag = -1;
	while (*s)
	{
		if (flag == 1 && *s == c)
		{
			row++;
			flag = -1;
		}
		if (*s != c)
			flag = 1;
		s++;
	}
	row++;
	if (flag == -1)
		row--;
	return (row);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	row;

	row = return_row(s, c);
	str = (char **) malloc((row + 1) * sizeof(char *));
	if (str == NULL)
		return (0);
	str[row] = 0;
	str = reutrn_col(s, c, row, str);
	return (str);
}
