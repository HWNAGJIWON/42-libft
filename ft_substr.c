/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:05:13 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/05/21 14:27:54 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	size_t			min_len;

	if (!s)
		return (0);
	min_len = ft_strlen(s);
	if (min_len < len)
		len = min_len;
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	i = 0;
	while ((size_t)i < len && start + i < (unsigned int)ft_strlen(s))
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = 0;
	return (str);
}
