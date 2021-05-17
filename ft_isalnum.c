/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 17:15:13 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/05/14 14:29:49 by jeolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int ag)
{
	if ((48 <= ag && ag <= 57) || (65 <= ag && ag <= 90) ||
		(97 <= ag && ag <= 122))
		return (1);
	return (0);
}
