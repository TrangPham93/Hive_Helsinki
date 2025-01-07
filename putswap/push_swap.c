/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 10:34:57 by trpham            #+#    #+#             */
/*   Updated: 2025/01/07 13:13:06 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
t_node	*ft_lstnew(void *content);

int	main(int argc, char *argv[])
{
	int	i;
	t_node *lst;
	t_node *new;
	t_node *current = NULL;

	i = 1;
	lst = NULL;
	if (argc == 1)
	{
		return (1);
	}
	else if (argc > 1)
	{
		lst = ft_lstnew(argv[i]);
		current = lst;
		while (++i < argc)
		{
			new = ft_lstnew(argv[i]);
			lst->next = new;
			new->prev = lst;
			lst = lst->next;
		}
	}
	else
		printf("Error: give a list of integer");

	while (current)
	{
		printf("%s\n", current->content);
		current = current->next;
	}
	
	return (0);
}

t_node	*ft_lstnew(void *content)
{
	t_node	*temp;

	temp = (t_node *)malloc(sizeof(t_node));
	if (temp == NULL)
		return (NULL);
	temp ->content = content;
	temp ->next = NULL;
	temp ->prev = NULL;
	return (temp);
}

// void	ft_lstadd_back(t_node **lst, t_node *new)
// {
// 	t_node	*temp;

// 	if (!lst || !new)
// 		return ;
// 	if (!*lst)
// 	{
// 		*lst = new;
// 		return ;
// 	}
// 	temp = *lst;
// 	while (temp->next)
// 	{
// 		temp = temp->next;
// 	}
// 	temp->next = new;
// }

// void	ft_print_node(t_node *lst)
// {
// 	while (lst)
// 	{
// 		printf("%s", lst->content);
// 		lst = lst->next;
// 	}
	
// }