/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 18:04:56 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/05/14 14:28:34 by jeolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(unsigned long n, unsigned long size)
{
	void	*p;

	p = (void *)malloc(n * size);
	if (!p)
	{
		return (0);
	}
	ft_bzero(p, n);
	return (p);
}
