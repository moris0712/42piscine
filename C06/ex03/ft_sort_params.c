/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 18:02:02 by junyounp          #+#    #+#             */
/*   Updated: 2021/09/23 18:02:33 by junyounp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	*u_s1;
	unsigned char	*u_s2;
	int				i;

	u_s1 = (unsigned char *)s1;
	u_s2 = (unsigned char *)s2;
	i = 0;
	while (*(u_s1 + i) == *(u_s2 + i) && \
		(*(u_s1 + i) != '\0' || *(u_s2 + i) != '\0'))
		i++;
	return (*(u_s1 + i) - *(u_s2 + i));
}

void	print_args(char *args[], int store_count)
{
	int	i;
	int	j;

	i = 1;
	while (i <= store_count)
	{
		j = 0;
		while (args[i][j] != '\0')
			j++;
		write(1, args[i], j);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int count, char *args[])
{
	int		i;
	int		store_count;
	char	*temp;

	count--;
	store_count = count;
	while (count > 1)
	{
		i = 1;
		while (i < count)
		{
			if (ft_strcmp(args[i], args[i + 1]) > 0)
			{
				temp = args[i];
				args[i] = args[i + 1];
				args[i + 1] = temp;
			}
			i++;
		}
		count--;
	}
	print_args(args, store_count);
}
