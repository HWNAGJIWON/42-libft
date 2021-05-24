/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 18:18:43 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/05/21 14:23:52 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	int		len;

	len = 0;
	while (s[len])
		len++;
	ptr = ft_calloc(len + 1, 1);
	if (ptr == 0)
		return (0);
	len = 0;
	while (s[len])
	{
		ptr[len] = s[len];
		len++;
	}
	ptr[len] = 0;
	return (ptr);
}
