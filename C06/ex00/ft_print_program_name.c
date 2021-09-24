/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 17:22:16 by junyounp          #+#    #+#             */
/*   Updated: 2021/09/23 17:25:35 by junyounp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int count, char *args[])
{
	int	i;

	i = 0;
	if (count)
	{
		while (args[0][i] != '\0')
			i++;
		write(1, args[0], i);
		write(1, "\n", 1);
	}
}
