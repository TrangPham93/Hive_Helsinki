/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:56:19 by trpham            #+#    #+#             */
/*   Updated: 2024/11/12 15:22:41 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

/* #include <stdio.h>

int	main(void)
{
	int a = 5;
	int b = 7;
	int c = '\0';
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
	ft_lstadd_front(&a_list, new);
	current = ft_lstlast(new);
	while (current)
	{
		printf("%d\n", *(int *)current->content); // print only the last content
	}
	while (new)
	{
		t_list	*temp = new;
		new = new->next;
		free(temp);
	}
	return (0);
}  */