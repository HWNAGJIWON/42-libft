/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 15:27:56 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/05/14 14:34:46 by jeolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *big, char *little, unsigned long len)
{
	unsigned long	b;
	unsigned long	l;
	unsigned long	little_len;

	b = 0;
	l = 0;
	little_len = ft_strlen(little);
	if (little_len == 0)
		return (big);
	while (b < len)
	{
		if (little[l] == big[b])
			l++;
		else
			l = 0;
		if (little_len == l)
			break ;
		b++;
	}
	if (little_len == l)
		return (big + b - l + 1);
	return (0);
}
