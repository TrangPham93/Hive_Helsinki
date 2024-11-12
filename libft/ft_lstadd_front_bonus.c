/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:06:11 by trpham            #+#    #+#             */
/*   Updated: 2024/11/12 13:45:34 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/* #include <stdio.h>

int	main(void)
{
	int a = 5;
	int b = 7;
	int c = 3;
	t_list	*a_list = ft_lstnew(&a);
	t_list	*b_list = ft_lstnew(&b);
	t_list	*new = ft_lstnew(&c);
	t_list	*current;

	if (!a_list || !b_list || !new)
	{
		printf("memory allocation failed\n");
		return (1);
	}
	
	a_list ->next = b_list;
	current = new;
	ft_lstadd_front(&a_list, new);
	while (current)
	{
		printf("%d\n", *(int *)current->content);
		current = current->next;
	}
	while (new)
	{
		t_list	*temp = new;
		new = new->next;
		free(temp);
	}
	return (0);
}  */