/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:05:13 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/05/14 14:35:17 by jeolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, unsigned long len)
{
	unsigned long	i;
	unsigned long	j;
	char			*str;

	i = 0;
	if (!s[i])
		return (0);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	j = 0;
	while (s[i])
	{
		if (start <= i && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}
