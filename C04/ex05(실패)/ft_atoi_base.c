/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 20:02:43 by junyounp          #+#    #+#             */
/*   Updated: 2021/09/22 20:03:01 by junyounp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	except_1(char *base)
{
	int	i;
	int	k;

	i = 0;
	if (*(base + 0) == 0)
		return (-1);
	if (*(base + 1) == 0)
		return (-1);
	while (*(base + i) != '\0')
	{
		if (*(base + i) == '+' || *(base + i) == '-' || *(base + i) == ' ')
			return (-1);
		k = 0;
		while (k < i)
		{
			if (*(base + k) == *(base + i))
				return (-1);
			k++;
		}	
		i++;
	}
	return (i);
}

unsigned int	solve_result(char *str, char *base, int str_len, int i)
{
	int				index;
	int				digit;
	int				k;
	unsigned int	u_result;

	k = 0;
	digit = 1;
	u_result = 0;
	if (str_len == 0)
		return (0);
	while (k++ < str_len - 1)
		digit = digit * i;
	while (*str)
	{
		index = 0;
		while (*(str) != *(base + index))
			index++;
		u_result += digit * index;
		digit /= i;
		str++;
	}
	return (u_result);
}

int	solve_sign(unsigned int u_result, int count)
{
	int	result;

	if (count % 2 == 1)
		result = -u_result;
	else
		result = u_result;
	return (result);
}

int	is_exist(char c_str, char *base)
{
	int	temp;

	temp = 0;
	while (*(base + temp) != '\0')
	{
		if (c_str == *(base + temp))
			return (1);
		temp++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int				i;
	int				str_len;
	int				count;
	unsigned int	result;

	i = except_1(base);
	if (i == -1)
		return (0);
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t' || \
			*str == '\v' || *str == '\f' || *str == '\r'))
		str++;
	count = 0;
	while (*str && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			count++;
		str++;
	}
	str_len = 0;
	while (*(str + str_len) && is_exist(*(str + str_len), base) == 1)
		str_len++;
	result = solve_result(str, base, str_len, i);
	result = solve_sign(result, count);
	return (result);
}
