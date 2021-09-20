/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 00:16:41 by junyounp          #+#    #+#             */
/*   Updated: 2021/09/21 00:17:04 by junyounp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_i;
	unsigned int	s_i;
	unsigned int	temp_d_i;

	d_i = 0;
	while (*(dest + d_i) != '\0')
		d_i++;
	s_i = 0;
	if (d_i >= size)
		while (*(src + s_i) != '\0')
			s_i++;
	else
	{
		temp_d_i = d_i;
		while (temp_d_i < size)
		{
			*(dest + d_i + s_i) = *(src + s_i);
			s_i++;
			temp_d_i++;
		}
		*(dest + d_i + --s_i) = '\0';
	}
	while (*(src + s_i) != '\0')
		s_i++;
	return (d_i + s_i);
}
