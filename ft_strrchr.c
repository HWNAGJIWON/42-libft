/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 17:27:19 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/05/18 16:19:38 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int				i;
	unsigned char	find;
	char			*last;

	find = (unsigned char)c;
	last = (char *)str;
	i = ft_strlen(str);
	while (i > 0)
	{
		if (last[i] == find)
			return (&last[i]);
		i--;
	}
	if (str[i] == find)
		return (last);
	return (0);
}
