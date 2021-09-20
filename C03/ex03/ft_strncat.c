/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 21:34:28 by junyounp          #+#    #+#             */
/*   Updated: 2021/09/20 21:34:52 by junyounp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	d_i;
	unsigned int	s_i;

	d_i = 0;
	while (*(dest + d_i) != '\0')
		d_i++;
	s_i = 0;
	while (s_i < nb)
	{
		dest[d_i + s_i] = src[s_i];
		s_i++;
	}
	return (dest);
}
