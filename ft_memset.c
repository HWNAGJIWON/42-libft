/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:07:41 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/05/14 14:32:44 by jeolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, unsigned long num)
{
	unsigned long	i;

	i = 0;
	while (i < num)
	{
		*((char *)ptr + i) = value;
		i++;
	}
	return (ptr);
}
