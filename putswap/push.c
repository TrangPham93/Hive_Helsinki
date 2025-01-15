/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 12:04:33 by trpham            #+#    #+#             */
/*   Updated: 2025/01/15 11:59:05 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_stack(t_node **stack_1, t_node **stack_2)
{
	t_node	*head;

	if (*stack_1 == NULL)
		return ;
	head = *stack_1;
	*stack_1 = (*stack_1)->next;
	(*stack_1)->prev = NULL;
	
	head->next = (*stack_2);
	if (*stack_2)
		(*stack_2)->prev = head;
	head->prev = NULL;
	*stack_2 = head;
}