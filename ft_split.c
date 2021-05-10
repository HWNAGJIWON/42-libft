#include "libft.h"

static int count_word(char *str, char c)
{
	int		i;
	int		cnt;
	
	cnt = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			cnt++;
	}
	return (cnt);
}

static char		*make_subarray(char *s, int start, int end)
{
	int		i;
	char	*substring;

	i = 0;
	substring = (char *)malloc(sizeof(char) * (end - start + 2));
	while (i + start < end + 1)
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[i] = 0;
	retrun (substring);
}

char  **ft_split(char const *s, char c)
{
	int		word_num;
	char	*answer;
	int		i;
	int		start;
	int		answer_i;
	
	answer_i = 0;
	i = 0;
	start = i;
	word_num = count_word(s, c);
	answer = (char *)malloc(sizeof(char) * (word_num + 1));
	while (s[i])
	{
		if (s[i] == c)
		{
			answer[answer_i++] = make_subarray(s, start, i - 1);
			start = i + 1;
		}
		i++;
	}
  	return (answer);
}
