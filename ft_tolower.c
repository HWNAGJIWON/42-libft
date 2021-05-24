/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 17:59:10 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/05/21 14:26:40 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int a)
{
	if (65 <= a && a <= 90)
		return (a + 32);
	return (a);
}
