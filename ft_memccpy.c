/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 14:42:49 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/05/21 14:22:21 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	int		flag;

	i = 0;
	flag = 0;
	while (i < n)
	{
		((unsigned char *)(dest))[i] = ((unsigned char *)src)[i];
		if (((unsigned char *)src)[i] == (unsigned char)c)
		{
			flag = 1;
			break ;
		}
		i++;
	}
	if (flag == 0)
		return ((void *)0);
	return (dest + i + 1);
}
