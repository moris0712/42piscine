/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr>      
+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 13:01:32 by junyounp      #+#    #+#             */
/*   Updated: 2021/09/14 14:59:35 by junyounp     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	str;

	str = 'z';
	while (str >= 97)
	{
		write(1, &str, 1);
		str--;
	}
}
