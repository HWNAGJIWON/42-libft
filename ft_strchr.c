/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:44:10 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/05/07 19:00:21 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char * str, int c)
{
	int		i;
	int		find;

	i = 0;
	find = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			find = 1;
			break;
		}
		i++;
	}
	if (find == 1)
		return (str + i);
	else
		return (0);
}
