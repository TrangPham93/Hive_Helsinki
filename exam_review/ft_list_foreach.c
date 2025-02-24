/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:59:58 by trpham            #+#    #+#             */
/*   Updated: 2025/02/24 17:14:48 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

void upper(void *s)
{
	char *temp;

	temp = s;
	while (*temp)
	{
		*temp += 32;
		temp++;
	}
	// return (temp);
}

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *temp;

	temp = begin_list;
	while (temp)
	{
		if (temp->data)
			(*f)(temp->data);
		temp = temp->next;
	}
	
}
t_list *create_node(char *s)
{
	t_list *new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	// new_node->data = NULL;
	new_node->data = s;
	new_node->next = NULL;
	return (new_node);
}
#include <stdio.h>

int main()
{
	t_list *node_a = create_node("ha");
	t_list *node_b = create_node("ka");

	node_a->next = node_b;
	while (node_a)
	{
		printf("%s\n", (char *)node_a->data);
		node_a = node_a->next;
	}
	
	ft_list_foreach(node_a, upper);
	while (node_a)
	{
		printf("%s\n", (char *)node_a->data);
		node_a = node_a->next;
	}
	
}