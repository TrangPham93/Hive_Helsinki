/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 16:36:20 by trpham            #+#    #+#             */
/*   Updated: 2025/02/14 17:06:41 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list *new_list(int content)
{
	t_list *new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->data = content;
	new_node->next = NULL;

	return (new_node);
}

int	ft_list_size(t_list *begin_list)
{
	int len;
	
	len = 0;
	while (begin_list)
	{
		len++;
		begin_list = begin_list->next;
	}
	return (len);
}

int main()
{
	t_list *head = new_list(3);
	head->next = new_list(5);
	head->next->next = new_list(1);
	
	printf("lst size: %d\n", ft_list_size(head));
	
	t_list *temp;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	return (0);
	
	
	
}
