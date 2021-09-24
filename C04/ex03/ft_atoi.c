/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 12:33:32 by junyounp          #+#    #+#             */
/*   Updated: 2021/09/22 12:55:34 by junyounp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	change_int(char *arr, int arr_len)
{
	int				i;
	int				digit;
	unsigned int	result;
	int				minus_result;

	i = 0;
	digit = 1;
	result = 0;
	while (--arr_len >= 0 )
	{
		if (arr[arr_len] == '-')
		{
			minus_result = -result;
			return (minus_result);
		}
		result += (arr[arr_len] - 48) * digit;
		digit *= 10;
	}
	return (result);
}

int	store_arr(char *str, char *arr, int count)
{
	int	i;
	int	arr_len;

	arr_len = 0;
	i = 0;
	if (count % 2 == 1)
		arr[arr_len++] = '-';
	while ('0' <= *(str + i) && *(str + i) <= '9')
	{
		arr[arr_len] = *(str + i);
		arr_len++;
		i++;
	}
	arr[arr_len] = '\0';
	return (arr_len);
}

int	ft_atoi(char *str)
{
	int		count;
	int		arr_len;
	char	arr[200];

	count = 0;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t' || \
			*str == '\v' || *str == '\f' || *str == '\r'))
		str++;
	while (*str != '\0')
	{
		if (*str == '-')
			count++;
		if ((*str < '0' || '9' < *str) && (*str != '-') && (*str != '+'))
			return (0);
		if ('1' <= *str && *str <= '9')
		{
			arr_len = store_arr(str, arr, count);
			return (change_int(arr, arr_len));
		}
		str++;
	}
	return (0);
}
