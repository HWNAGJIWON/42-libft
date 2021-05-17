/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 17:05:59 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/05/14 14:32:36 by jeolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, unsigned long count)
{
	char		*temp;
	const char	*s;

	if (dest <= src)
	{
		temp = dest;
		s = src;
		while (count--)
			*temp++ = *s++;
	}
	else
	{
		temp = dest;
		temp += count;
		s = src;
		s += count;
		while (count--)
			*--temp = *--s;
	}
	return (dest);
}
