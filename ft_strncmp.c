/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 15:46:47 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/05/14 14:34:37 by jeolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(void *str1, void *str2, unsigned long n)
{
	unsigned long	i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = str1;
	s2 = str2;
	i = 0;
	while (i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
	}
	return (0);
}
