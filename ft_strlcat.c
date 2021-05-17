/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:24:27 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/05/14 14:34:06 by jeolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dest, const char *src, unsigned long size)
{
	int	destlen;
	int	srclen;
	int	i;
	int	j;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	i = 0;
	while ((unsigned long)i < size && dest[i])
		i++;
	j = 0;
	while (j < srclen && (unsigned long)(destlen + j + 1) < size)
	{
		dest[destlen + j] = src[j];
		j++;
	}
	dest[j + destlen] = 0;
	if (size > (unsigned long)destlen)
		return (srclen + destlen);
	else
		return (srclen + size);
}
