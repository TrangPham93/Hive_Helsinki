/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:09:00 by trpham            #+#    #+#             */
/*   Updated: 2025/01/08 17:52:22 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	node_lst_size(t_node *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;	
	}
	return (count);

}

t_node *swap_stack(t_node *lst)
{
	// t_node	*head = lst;
	int	first;
	int	second;
	int	len;
	t_node	node1;
	t_node	node2;
	t_node	temp_node;

	//check lst length
	len = node_lst_size(lst);
	printf("length of stack: %d\n", len);

	if (len < 2)
		return (lst);	
	node1->next = lst;
	// // current = lst;
	// first = lst->content;
	// lst = lst->next;
	// second = lst->content;
	// lst->content = first;
	// lst = lst->prev;
	// lst->content = second;
	temp_node = node1->next;


	return (lst);
}