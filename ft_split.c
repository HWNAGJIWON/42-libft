/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 20:36:17 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/05/21 20:36:21 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
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

static char	**ft_free(char **res, int line)
{
	while (line > 0)
	{
		free(res[line - 1]);
		line--;
	}
	free(res);
	return (0);
}

static char	**ft_size_words(const char *s, char c, char **res)
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
				return (ft_free(res, j));
			j++;
		}
		else
			i++;
	}
	return (res);
}

char		**ft_split(const char *s, char c)
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
