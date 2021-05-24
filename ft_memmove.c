/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 17:05:59 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/05/21 14:23:02 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	char		*temp;
	const char	*s;

	if (dest == 0 && src == 0)
		return ((void *)0);
	s = src;
	if (dest <= src)
	{
		temp = dest;
		while (count--)
			*temp++ = *s++;
	}
	else
	{
		temp = dest;
		temp += count;
		s += count;
		while (count--)
			*--temp = *--s;
	}
	return (dest);
}
