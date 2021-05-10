char	*ft_substr(char const *s, unsigned int start, unsigend long len)
{
	unsigend long	i;
	unsigned long	j;
	char			*sub;
	
	i = 0;
	j = 0;
	if (s[i])
		return (0);
	if(!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	while (s[i])
	{
		if (start =< i && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}
