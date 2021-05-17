/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 18:21:14 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/05/16 18:22:54 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;

	nbr = (n < 0) ? -n : n;
	if (n < 0)
		ft_putchar_fd('-', fd);
	if (nbr >= 10)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd((nbr % 10) + 48, fd);
}
