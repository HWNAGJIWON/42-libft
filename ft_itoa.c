/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 16:42:59 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/05/14 14:31:02 by jeolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_size(long long n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		i++;
		n *= -1;
	}
	while (n / 10 > 0)
	{
		i++;
		n = n / 10;
	}
	if (0 < n && n <= 10)
		i++;
	return (i);
}

void	ft_fill(char *str, int i, long long n, int size)
{
	int	negative;

	negative = 0;
	if (n < 0)
	{
		negative = 1;
		n *= -1;
		str[0] = '-';
	}
	str[size + 1] = 0;
	i = size - 1;
	while (i >= negative)
	{
		str[i] = (n % 10) + 48;
		n /= 10;
		i--;
	}
}

char	*ft_itoa(int n2)
{
	int			i;
	int			size;
	char		*str;
	long long	n;

	n = n2;
	i = 0;
	size = count_size(n);
	if (!(str = (char *)malloc(sizeof(char) * (size + 1))))
		return (0);
	ft_fill(str, i, n, size);
	return (str);
}
