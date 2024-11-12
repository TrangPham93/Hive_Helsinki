/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:30:00 by trpham            #+#    #+#             */
/*   Updated: 2024/11/12 16:13:15 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
}
/* #include <stdio.h>
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	
}
int	main(void)
{
	int a = 5;
	int b = 7;
	int c = 9;
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
	current = a_list;
	ft_lstadd_back(&a_list, new);
	while (current)
	{
		printf("%d\n", *(int *)current->content);
		current = current->next;
	}
	while (a_list)
	{
		t_list	*temp = a_list;
		a_list = a_list->next;
		free(temp);
	}
	return (0);
} */ 