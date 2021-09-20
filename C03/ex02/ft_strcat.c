/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 20:17:33 by junyounp          #+#    #+#             */
/*   Updated: 2021/09/20 20:17:35 by junyounp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	d_i;
	int	s_i;

	d_i = 0;
	while (*(dest + d_i) != '\0')
		d_i++;
	s_i = 0;
	while (*(src + s_i) != '\0')
	{
		dest[d_i + s_i] = src[s_i];
		s_i++;
	}
	dest[d_i + s_i] = '\0';
	return (dest);
}
