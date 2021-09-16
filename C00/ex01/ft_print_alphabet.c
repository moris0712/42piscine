/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr>      
+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 12:48:38 by junyounp       #+#    #+#             */
/*   Updated: 2021/09/14 14:58:58 by junyounp      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	str;

	str = 'a';
	while (str <= 122)
	{
		write(1, &str, 1);
		str++;
	}
}
