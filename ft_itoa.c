/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 14:57:10 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/05/18 17:53:28 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_size(long long n)
{
	int	i;

	i = (n <= 0) ? 1 : 0;
	if (n < 0)
		n *= -1;
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
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
	str[size] = 0;
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
