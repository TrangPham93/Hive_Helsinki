/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 12:04:33 by trpham            #+#    #+#             */
/*   Updated: 2025/01/14 13:21:00 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_node *stack_1, t_node *stack_2)
{
	t_node	*head;
	// t_node	*temp;

	head = NULL;
	// temp = NULL;
	if (stack_2 == NULL)
		return ;
	head = stack_2;
	head->next = stack_1;
	stack_1->prev = head;
	stack_1 = head;
	stack_2 = stack_2->next;
	
	
}