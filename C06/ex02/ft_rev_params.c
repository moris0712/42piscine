/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 17:47:57 by junyounp          #+#    #+#             */
/*   Updated: 2021/09/23 18:01:20 by junyounp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	main(int count, char *args[])
{
	int	i;

	count--;
	while (count > 0)
	{
		i = 0;
		while (args[count][i] != '\0')
			i++;
		write(1, args[count], i);
		write(1, "\n", 1);
		count--;
	}
}
