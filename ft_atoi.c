/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 16:23:46 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/05/14 14:28:08 by jeolee           ###   ########.fr       */
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

int			ft_atoi(char *str)
{
	int	i;
	int	answer;
	int	minus;

	minus = 0;
	i = 0;
	answer = 0;
	while (ft_isspace(str[i]) == 1)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus = 1;
		i++;
	}
	while (48 <= str[i] && str[i] <= 57)
	{
		answer = 10 * answer + (str[i] - 48);
		i++;
	}
	if (minus == 1)
		return (answer * -1);
	return (answer);
}
