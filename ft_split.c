/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 21:40:25 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/05/19 14:11:35 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(const char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (words);
}

char	**ft_size_words(const char *s, char c, char **res)
{
	int	i;
	int	j;
	int	size_word;

	i = 0;
	j = 0;
	while (s[i])
	{
		size_word = 0;
		if (s[i] != c)
		{
			while (s[i] != c && s[i])
			{
				++size_word;
				++i;
			}
			if (!(res[j] = malloc(sizeof(char) * (size_word + 1))))
				return (0);
			j++;
		}
		else
			i++;
	}
	return (res);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**dest;

	i = 0;
	j = 0;
	if (!s || !(dest = malloc(sizeof(char *) * (ft_count_words(s, c) + 1))))
		return (0);
	if (!(ft_size_words(s, c, dest)))
		return (0);
	while (s[i] && !(k = 0))
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i])
				dest[j][k++] = s[i++];
			dest[j][k] = 0;
			j++;
		}
		else
			i++;
	}
	dest[j] = 0;
	return (dest);
}
