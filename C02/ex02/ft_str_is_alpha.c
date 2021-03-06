/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 22:32:35 by junyounp       #+#    #+#             */
/*   Updated: 2021/09/16 15:59:07 by junyounp     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{		
		if (*(str + i) < 65 || \
			(90 < *(str + i) && *(str + i) < 97) \
			|| 122 < *(str + i))
			return (0);
		i++;
	}	
	return (1);
}
