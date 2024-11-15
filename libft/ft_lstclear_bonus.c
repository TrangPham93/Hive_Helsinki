/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:23:53 by trpham            #+#    #+#             */
/*   Updated: 2024/11/15 11:06:00 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	del_f(void	*content)
{
	free(content);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	if (!lst || !*lst || !del)
		return ;
	while ((*lst))
	{
		temp = *lst;
		del_f((*lst)->content);
		(*lst) = (*lst)->next;
		free(temp);
	}
	lst = NULL;
}
