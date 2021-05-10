#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char		*answer;
	
	i = 0;
	while (s1[i])
		i++;
	while(s2[j])
		j++;
	if (!(answer = (char *)malloc(sizeof(char) * (i + j + 1))))
		return (0);
	i = 0;
	j = 0;
	while(s1[i])
	{
		answer[i] = s1[i];
		i++;
	}
	while(s2[j])
	{
		answer[i] = s2[j];
		j++;
		i++;
	}
	answer[i] = 0;
	return (answer);
}
