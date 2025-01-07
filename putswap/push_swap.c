/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 10:34:57 by trpham            #+#    #+#             */
/*   Updated: 2025/01/07 11:51:01 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
t_node	*ft_lstnew(void *content);

// void ft_push_swap(char *stack)
// {
// 	int c;

// 	c = 0;
// 	while (stack[c])
// 	{
// 		printf("%c\n", stack[c]);
// 		c++;
// 	}
	
// }

int	main(int argc, char *argv[])
{
	int	i;
	t_node lst;
	t_node new;

	i = 0;
	if (argc == 1)
	{
		return (1);
	}
	else if (argc > 1)
	{
		lst = ft_lstnew(argv[i]);
		while (++i < argc)
		{
			printf("%s\n",argv[i]);
			new = ft_lstnew(argv[i]);
			if (i > 1)
			{
				ft_lstadd_back(lst, new)
			}
			
		}
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

void	ft_lstadd_back(t_node **lst, t_node *new)
{
	t_node	*temp;

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