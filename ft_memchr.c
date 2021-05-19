/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 11:11:12 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/05/14 14:32:06 by jeolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, unsigned long n)
{
	unsigned long	i;
	int				flag;

	flag = 0;
	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)str + i) == (unsigned char)c)
		{
			flag = 1;
			break ;
		}
		i++;
	}
	if (flag == 0)
		return ((void *)0);
	else
		return ((unsigned char *)str + i);
}
