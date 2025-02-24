/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:16:59 by trpham            #+#    #+#             */
/*   Updated: 2025/02/24 18:19:28 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *temp;
	t_list *prev = NULL;
	
	while ((*cmp)((*begin_list)->data, data_ref) == 0)
	{
		temp = *begin_list;
		(*begin_list) = (*begin_list)->next;
		free(temp);
	}
	temp = *begin_list;
	t_list *to_free; 
	while (temp)
	{
		if ((*cmp)(temp->data, data_ref) == 0)
		{
			to_free = temp;
			if (prev)
				prev->next = temp->next;
			temp = temp->next;
			free(to_free);
		}
		else
		{
			prev = temp;
			temp = temp->next;
		}
	}
}

t_list *create_node(void *s)
{
	t_list *new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return ((void *)0);
	new_node->data = s;
	new_node->next = NULL;
	return (new_node);
		
}

int main()
{
	t_list *node_a = create_node("remove");
	t_list *node_b = create_node("remove");
	t_list *node_c = create_node("r");

	node_a->next = node_b;
	node_b->next = node_c;
	t_list *temp = node_a;
	while (temp)
	{
		printf("%s\n", (char *)temp->data);
		temp = temp->next;
	}
	ft_list_remove_if(&node_a, "remove", strcmp);
	// temp = node_a;
	printf("after removing\n");
	while (node_a)
	{
		printf("%s\n", (char *)node_a->data);
		node_a = node_a->next;
	}
	
}