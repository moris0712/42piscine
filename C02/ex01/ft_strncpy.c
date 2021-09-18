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

//  n이 src의 길이보다 큰 경우 dest 결과는 길이 n까지 널(null) 문자(\0)로 채워집니다.
// strncpy()는 src문자열의 길이와 관계없이 정확히 n바이트를 쓰는것으로 지정된다? 
// 두번째 while루프가없으면 함수는 strlen(src) 바이트만 쓴다
