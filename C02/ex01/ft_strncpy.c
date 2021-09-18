/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 20:22:47 by junyounp        #+#    #+#             */
/*   Updated: 2021/09/16 18:06:22 by junyounp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src [i] != '\0' && (i < n))
	{
		dest [i] = src [i];
		i++;
	}
	while (i < n)
		dest [i++] = '\0';
	return (dest);
}
