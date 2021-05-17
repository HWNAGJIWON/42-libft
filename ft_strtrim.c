/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 14:03:16 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/05/14 14:35:08 by jeolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_in_the_str(char *s, char c)
{
	int	i;

	i = 0;
	if (c == 0)
		return (1);
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		ft_find_start(char *s, char *set)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (ft_in_the_str(set, s[i]) != 1)
			return (i);
		i++;
	}
	return (i);
}

int		ft_find_end(char *s, char *set)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (ft_in_the_str(set, s[i]) == 0)
			return (i);
		i--;
	}
	return (ft_strlen(s));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	int		j;
	char	*str;

	start = ft_find_start((char *)s1, (char *)set);
	end = ft_find_end((char *)s1, (char *)set);
	if (s1 != 0 && set != 0)
	{
		if (end == start)
			str = (char *)malloc(sizeof(char) * 1);
		else
			str = (char *)malloc(sizeof(char) * (end - start + 1));
		if (!str)
			return (0);
	}
	i = start;
	if (end == start)
		i = end + 1;
	j = 0;
	while (i <= end)
	{
		str[j++] = (char)s1[i];
		// printf("str[%d] = %c", j-1, str[j-1]);
		i++;
	}
	str[i] = 0;
	return (str);
}
