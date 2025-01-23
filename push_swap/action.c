/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:09:00 by trpham            #+#    #+#             */
/*   Updated: 2025/01/23 17:49:42 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./libft/includes/libft.h"
#include "./libft/includes/ft_printf.h"

void	swap_stack(t_node **lst, char	c)
{
	// int		len;
	t_node	*node1;
	t_node	*node2;

	node1 = NULL;
	node2 = NULL;
	if (lst == NULL || (*lst)->next == NULL)
		return ;
	//check lst length, can remove
	// len = node_lst_size(*lst);
	// set value for node1 and node2
	node1 = *lst;
	node2 = (*lst)->next;
	// swap, but need to ask for more robust option
	node1->next = node2->next;
	node2->next = node1;
	node2->prev = NULL;
	*lst = node2;
	ft_printf("s%c\n", c);
}

void rotate_stack(t_node **lst, char c)
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
	ft_printf("r%c\n", c);
}

void	reverse_rotate(t_node **lst, char c)
{
	t_node	*temp;
	t_node	*tail;

	if (*lst == NULL || (*lst)->next == NULL)
		return ;

	temp = *lst;
	while (temp->next != NULL)
		temp = temp->next;
		
	tail = temp;
	if (temp->prev != NULL)
		temp->prev->next = NULL;
	tail->next = *lst;
	tail->prev = NULL;
	(*lst)->prev = tail;
	*lst = tail;
	ft_printf("rr%c\n", c);
}

void	push_stack(t_node **stack_1, t_node **stack_2, char	c)
{
	t_node	*head;

	if (*stack_1 == NULL)
		return ;
	head = *stack_1;
	*stack_1 = (*stack_1)->next;
	if (*stack_1 != NULL)
		(*stack_1)->prev = NULL;
	head->next = (*stack_2);
	if (*stack_2 != NULL)
		(*stack_2)->prev = head;
	head->prev = NULL;
	*stack_2 = head;
	ft_printf("p%c\n", c);
}
