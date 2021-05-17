/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:29:42 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/05/14 14:33:54 by jeolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*answer;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	if (!(answer = (char *)malloc(sizeof(char) * (i + j + 1))))
		return (0);
	i = 0;
	j = 0;
	while (s1[i])
	{
		answer[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		answer[i] = s2[j];
		j++;
		i++;
	}
	answer[i] = 0;
	return (answer);
}
