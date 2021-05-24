/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 20:29:50 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/05/21 20:54:48 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cur;

	if (lst == 0 || del == 0)
		return ;
	cur = *lst;
	while ((*lst))
	{
		cur = (*lst)->next;
		del((*lst)->content);
		free((*lst));
		*lst = cur;
	}
	*lst = 0;
}
