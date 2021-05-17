/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 17:27:19 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/05/14 14:34:56 by jeolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	int	i;
	int	past;

	past = -1;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			past = i;
		}
		i++;
	}
	if (past == -1)
		return (0);
	else
		return (str + past);
}
