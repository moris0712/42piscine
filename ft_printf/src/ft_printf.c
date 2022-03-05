/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:19:09 by junyounp          #+#    #+#             */
/*   Updated: 2022/02/24 21:19:15 by junyounp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include "libft.h"

char	*return_notation(size_t ptr, char *base, int notation)
{
	char	*result;
	int		index;
	size_t	copy;

	copy = ptr;
	index = 0;
	while (copy != 0)
	{
		copy = copy / notation;
		index++;
	}
	result = (char *) malloc((index + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	result[index] = '\0';
	index--;
	while (ptr != 0)
	{
		result[index] = base[ptr % notation];
		ptr = ptr / notation;
		index--;
	}
	return (result);
}

int	find_format(char args, va_list arg_ptr, int len)
{
	if (args == 'c')
		len = print_char(arg_ptr, len);
	else if (args == 's')
		len = print_string(arg_ptr, len);
	else if (args == 'p')
		len = print_pointer(arg_ptr, len);
	else if (args == 'd' || args == 'i')
		len = print_int(arg_ptr, len);
	else if (args == 'u')
		len = print_unsigned_int(arg_ptr, len);
	else if (args == 'x')
		len = print_hexadecimal(arg_ptr, len, 'x');
	else if (args == 'X')
		len = print_hexadecimal(arg_ptr, len, 'X');
	else if (args == '%')
	{
		write(1, "%", 1);
		len = len + 1;
	}
	else
		write(1, &args, 1);
	if (len == -1)
		return (-1);
	return (len);
}

int	ft_printf(const char *args, ...)
{
	va_list	arg_ptr;
	int		len;

	len = 0;
	va_start(arg_ptr, args);
	while (*args)
	{
		if (*args != '%')
		{
			write(1, args, 1);
			len++;
		}
		else
		{
			args++;
			len = find_format(*args, arg_ptr, len);
			if (len == -1)
				return (0);
		}
		args++;
	}
	va_end(arg_ptr);
	return (len);
}
