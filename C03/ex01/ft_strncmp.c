/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 18:51:53 by junyounp          #+#    #+#             */
/*   Updated: 2021/09/20 18:52:18 by junyounp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned char	*u_s1;
	unsigned char	*u_s2;
	unsigned int	i;

	u_s1 = (unsigned char *)s1;
	u_s2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && *(u_s1 + i) == *(u_s2 + i) && \
		(*(u_s1 + i) != '\0' || *(u_s2 + i) != '\0'))
		i++;
	return (*(u_s1 + i) - *(u_s2 + i));
}
