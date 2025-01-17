/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:09:00 by trpham            #+#    #+#             */
/*   Updated: 2025/01/17 17:08:11 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./libft/includes/libft.h"
#include "./libft/includes/ft_printf.h"

t_node	*swap_stack(t_node *lst)
{
	int		len;
	t_node	*node1;
	t_node	*node2;

	node1 = NULL;
	node2 = NULL;
	// check if the length is at least 2
	if (lst == NULL || lst->next == NULL)
		return (NULL);
	//check lst length, can remove
	len = node_lst_size(lst);
	printf("length of stack: %d\n", len);
	// set value for node1 and node2
	node1 = lst;
	node2 = lst->next;
	// swap, but need to ask for more robust option
	node1->next = node2->next;
	node2->next = node1;
	node2->prev = NULL;
	lst = node2;
	return (lst);
}

t_node	*rotate_stack(t_node *lst)
{
	t_node	*temp;
	t_node	*head;

	temp = NULL;
	head = NULL;
	if (lst == NULL)
		return (NULL);
	head = lst;
	lst = lst->next;
	lst->prev = NULL;
	temp = lst;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = head;
	head->prev = temp;
	head->next = NULL;
	return (lst);
}

t_node	*reverse_rotate(t_node *lst)
{
	t_node	*temp;
	t_node	*tail;

	temp = NULL;
	tail = NULL;
	if (lst == NULL)
		return (NULL);
	temp = lst;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	tail = temp;
	temp->prev->next = NULL;
	tail->next = lst;
	tail->prev = NULL;
	return (tail);
}

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
