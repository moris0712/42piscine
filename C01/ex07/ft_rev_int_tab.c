/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:31:13 by junyounp          #+#    #+#             */
/*   Updated: 2021/09/15 15:24:26 by junyounp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	half_size;
	int	swap;

	i = 0;
	half_size = size / 2;
	while (i < half_size)
	{
		size--;
		swap = *(tab + i);
		*(tab + i) = *(tab + size);
		*(tab + size) = swap;
		i++;
	}
}
