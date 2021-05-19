/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 18:04:56 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/05/18 16:30:08 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(unsigned long n, unsigned long size)
{
	void	*p;

	if (!(p = malloc(n * size)))
		return ((void *)0);
	ft_bzero(p, n * size);
	return (p);
}
