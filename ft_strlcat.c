/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 19:21:32 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/05/21 14:24:26 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	destlen;
	size_t	srclen;
	size_t	i;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	i = 0;
	if (i + destlen > size)
		return (size + srclen);
	if (size > destlen + 1)
	{
		while (src[i] != '\0' && destlen + 1 + i < size)
		{
			dest[destlen + i] = src[i];
			i++;
		}
	}
	dest[i + destlen] = 0;
	return (destlen + srclen);
}
