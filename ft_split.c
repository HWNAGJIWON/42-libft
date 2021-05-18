/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 21:40:25 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/05/18 23:01:42 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		get_num(const char *str, char c)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (str[i])
	{
		if (str[i] != c && str[i])
		{
			num++;
			while (str[i] != c && str[i])
				i++;
		}
		else if (str[i] != 0)
			i++;
	}
	return (num);
}

void	*free_mem(char **allocated, int cnt)
{
	int	i;

	i = 0;
	while (i < cnt)
	{
		free(allocated[i]);
		i++;
	}
	free(allocated);
	return ((void *)0);
}

void	my_strcpy(char *dst, char const *src, int start, int last)
{
	int	i;

	i = 0;
	while (start < last)
	{
		dst[i] = src[start];
		i++;
		start++;
	}
	dst[i] = 0;
}

void	start_split(char const *s, char c, char **str)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && s[i])
		{
			start = i;
			while (s[i] != c && s[i])
				i++;
			if (!(str[j] = (char *)malloc(sizeof(char) * (i - start + 1))))
			{
				free_mem(str, j);
				return ;
			}
			my_strcpy(str[j], s, start, i);
			j++;
		}
		else if (s[i] != 0)
			i++;
	}
}

char	**ft_split(char const *str, char c)
{
	char	**ret;
	int		n;

	if (str == 0)
		return (0);
	n = get_num(str, c);
	ret = (char **)malloc(sizeof(char *) * (n + 1));
	if (str == 0)
		return (0);
	ret[n] = 0;
	if (n == 0)
		return (ret);
	start_split(str, c, ret);
	return (ret);
}
