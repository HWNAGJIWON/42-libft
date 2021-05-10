#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		count;
	char	*answer;
	
	i = 0;
	count = 0;
	while (s1[i])
	{
		if (!(ft_strchr(s1, set[i])))
			count++;
		i++;
	}
	answer = (char *)malloc(sizeof(char) * (count + 1));
	i = 0;
	count = 0;
	while(s1[i])
	{
		if (!(ft_strchr(s1,set[i])))
			answer[count++] = set[i];
		i++;
	}
	answer[count] = 0;
	retrun (answer);
}
