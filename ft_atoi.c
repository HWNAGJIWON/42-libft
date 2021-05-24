/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 16:23:46 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/05/21 14:19:44 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if ((9 <= c && c <= 13) || c == 32)
		return (1);
	else
		return (0);
}

int			ft_atoi(const char *str)
{
	int		i;
	long	answer;
	int		minus;

	minus = 0;
	i = 0;
	answer = 0;
	while (ft_isspace((char)str[i]))
		i++;
	if ((char)str[i] == '-' || (char)str[i] == '+')
	{
		if (str[i] == '-')
			minus = 1;
		i++;
	}
	while (48 <= (char)str[i] && (char)str[i] <= 57)
	{
		answer = 10 * answer + (char)str[i] - 48;
		i++;
	}
	if (minus == 1)
		return (answer * -1);
	return (answer);
}
