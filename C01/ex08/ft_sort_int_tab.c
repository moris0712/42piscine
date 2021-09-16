/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:33:12 by junyounp          #+#    #+#             */
/*   Updated: 2021/09/15 15:54:55 by junyounp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	while (size > 0)
	{
		size--;
		i = 0;
		while (i < size)
		{	
			if (*(tab + i) > *(tab + i + 1))
			{
				temp = *(tab + i);
				*(tab + i) = *(tab + i + 1);
				*(tab + i + 1) = temp;
			}
			i++;
		}
	}	
}
