/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 14:03:16 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/05/18 20:58:36 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		s1_is_contained(char s1, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s1)
			return (1);
		i++;
	}
	return (0);
}

char	*post(char const *s1)
{
	if (s1 == 0)
		return (0);
	return ((char *)s1);
}

int		find_start(char *s1, char *set)
{
	int	start;

	start = 0;
	while (s1[start] && s1_is_contained(s1[start], (char *)set))
		start++;
	return (start);
}

int		find_end(char *s1, char *set)
{
	int	end;

	end = ft_strlen(s1) - 1;
	while (s1[end] && s1_is_contained(s1[end], (char *)set))
		end--;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*result;

	i = 0;
	if (s1 == 0 || set == 0)
		return (post(s1));
	start = find_start((char *)s1, (char *)set);
	end = find_end((char *)s1, (char *)set);
	if (start > end)
		return (ft_strdup(""));
	if (!(result = (char *)malloc(sizeof(char) * (end - start + 1))))
		return (0);
	while (start <= end)
	{
		result[i] = s1[start++];
		i++;
	}
	result[i] = 0;
	return (result);
}
