/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:54:21 by trpham            #+#    #+#             */
/*   Updated: 2024/11/12 13:28:27 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Dynamic Data Structure >< Static Data Structure (Array)
Memory is allocated at run-time >< Memory is allocated at compile-time
Size can be modified during runtime >< Size is fixed and cannot be modified
Access time may be slower due to indexing and pointer usage >< 
Access time is faster as it is fixed
singly linked list :  
	it consists of nodes where each node contains a data field 
	and a reference to the next node in the node. 
	The last node points to null,
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*temp;

	temp = (t_list *)malloc(sizeof(t_list));
	if (temp == NULL)
		return (NULL);
	temp ->content = content;
	temp ->next = NULL;
	return (temp);
}
/* 
temp->content = content: passed content pointer to the node's content field */

/* 
#include <stdio.h>

int	main(void)
{
	int a = 5;
	int b = 7;
	// int b = '\0';
	t_list	*a_list = ft_lstnew(&a);
	t_list	*b_list = ft_lstnew(&b);
	t_list	*current;

	if (!a_list || !b_list)
	{
		printf("memory allocation failed\n");
		return (1);
	}
	
	a_list ->next = b_list;
	current = a_list;
	while (current)
	{
		printf("%d\n", *(int *)current->content);
		current = current->next;
	}
	free(a_list);
	free(b_list);
	return (0);
} */