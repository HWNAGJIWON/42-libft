/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 14:48:29 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/05/18 16:14:25 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dest, char const *src, unsigned long size)
{
	int	i;
	int	srclen;

	if (dest == (void *)0 && src == (void *)0)
		return (0);
	srclen = ft_strlen(src);
	i = 0;
	while (i < srclen && (unsigned long)(i + 1) < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = 0;
	return (srclen);
}
