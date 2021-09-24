/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 19:53:48 by junyounp          #+#    #+#             */
/*   Updated: 2021/09/24 19:54:10 by junyounp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	result = 0;
	if (nb == 0)
		return (1);
	i = 1;
	if (nb > 0)
	{
		result = 1;
		while (i <= nb)
		{
			result *= i;
			i++;
		}
	}
	return (result);
}
