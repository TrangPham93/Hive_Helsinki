/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:09:00 by trpham            #+#    #+#             */
/*   Updated: 2025/01/13 18:12:51 by trpham           ###   ########.fr       */
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
	int	len;
	t_node	*node1 = NULL;
	t_node	*node2 = NULL;

	// check if the length is at least 2
	if (lst == NULL || lst->next == NULL)
		return (NULL);
	
	//check lst length, can remove
	len = node_lst_size(lst);
	printf("length of stack: %d\n", len);

	// set value for node1 and node2
	node1 = lst;
	printf("Value of Node1 :%d\n",node1->content);
	node2 = lst->next;
	printf("Value of Node2 :%d\n",node2->content);

	// swap, but need to ask for more robust option
	node1->next = node2->next;
    node2->next = node1;
    node2->prev = NULL;
    lst = node2;
	return (lst);
}

t_node	*rotate_stack(t_node *lst)
{
	
	return (lst);
}