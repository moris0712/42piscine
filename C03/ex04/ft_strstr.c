/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 21:54:59 by junyounp          #+#    #+#             */
/*   Updated: 2021/09/20 21:55:16 by junyounp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	s_i;
	int	f_i;

	s_i = 0;
	f_i = 0;
	if (*(to_find + f_i) == '\0')
		return (str);
	while (*(str + s_i) != '\0')
	{
		if (*(str + s_i) == *(to_find + f_i))
			*(str + f_i++) = *(str + s_i);
		else
			f_i = 0;
		if (*(to_find + f_i) == '\0')
		{
			while (*(str + s_i) != '\0')
			{
				s_i++;
				*(str + f_i) = *(str + s_i);
				f_i++;
			}
		}
		s_i++;
	}
	return (str);
}