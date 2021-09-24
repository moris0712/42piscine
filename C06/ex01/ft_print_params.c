/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 17:41:23 by junyounp          #+#    #+#             */
/*   Updated: 2021/09/23 17:42:06 by junyounp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int count, char *args[])
{
	int	i;
	int	k;

	i = 1;
	while (i < count)
	{
		k = 0;
		while (args[i][k] != '\0')
			k++;
		write(1, args[i], k);
		write(1, "\n", 1);
		i++;
	}
}
