/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 17:46:58 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/05/14 14:33:29 by jeolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_c_or_end(char s, char charset)
{
	int	i;

	i = 0;
	if (charset == s)
		return (1);
	if (s == 0)
		return (1);
	return (0);
}

int		count_num_of_words(char *str, char charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (is_c_or_end(str[i], charset) == 1 &&
			is_c_or_end(str[i + 1], charset) == 0)
			count++;
		i++;
	}
	return (count);
}

void	ft_strcpy(char *dest, char *src, char charset)
{
	int	i;

	i = 0;
	while (is_c_or_end(src[i], charset) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
}

void	fill_res(char **res, char *str, char charset)
{
	int	i;
	int	j;
	int	word;

	word = 0;
	i = 0;
	while (str[i])
	{
		if (is_c_or_end(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (is_c_or_end(str[i + j], charset) == 0)
				j++;
			res[word] = (char *)malloc(sizeof(char) * (j + 1));
			ft_strcpy(res[word], str + i, charset);
			i = i + j;
			word++;
		}
	}
}

char	**ft_split(char const *str, char charset)
{
	char	**res;
	int		word;

	word = count_num_of_words((char *)str, charset);
	if ((res = (char **)malloc(sizeof(char *) * (word + 1))) == NULL)
		return (NULL);
	res[word] = 0;
	fill_res(res, (char *)str, charset);
	return (res);
}
