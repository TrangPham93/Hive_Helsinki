/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:37:45 by trpham            #+#    #+#             */
/*   Updated: 2025/02/07 14:29:57 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_stack(t_node **lst)
{
	t_node	*temp;
	t_node	*head;

	temp = NULL;
	head = NULL;
	if (*lst == NULL || (*lst)->next == NULL)
		return ;
	head = *lst;
	*lst = (*lst)->next;
	(*lst)->prev = NULL;
	temp = *lst;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = head;
	head->prev = temp;
	head->next = NULL;
}

int	ra(t_node **stack_a, char moves[], int i)
{
	rotate_stack(stack_a);
	moves[i] = '3';
	i++;
	return (i);
}

int	rb(t_node **stack_b, char moves[], int i)
{
	rotate_stack(stack_b);
	moves[i] = '4';
	i++;
	return (i);
}

void	rr(t_node **stack_a, t_node **stack_b)
{
	rotate_stack(stack_a);
	rotate_stack(stack_b);
}
