/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:56:53 by junyounp          #+#    #+#             */
/*   Updated: 2021/09/20 13:10:31 by junyounp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	*u_s1;
	unsigned char	*u_s2;
	int				i;

	u_s1 = (unsigned char *)s1;
	u_s2 = (unsigned char *)s2;
	i = 0;
	while (*(u_s1 + i) == *(u_s2 + i) && \
		(*(u_s1 + i) != '\0' || *(u_s2 + i) != '\0'))
		i++;
	return (*(u_s1 + i) - *(u_s2 + i));
}
