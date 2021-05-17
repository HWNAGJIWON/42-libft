/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 12:23:46 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/05/14 14:32:17 by jeolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, unsigned long n)
{
	unsigned long	i;
	int				temp;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		temp = *((unsigned char *)str1 + i) - *((unsigned char *)str2 + i);
		if (temp == 0)
			i++;
		else
			break ;
	}
	if (temp > 0)
		return (1);
	else if (temp < 0)
		return (-1);
	else
		return (0);
}
