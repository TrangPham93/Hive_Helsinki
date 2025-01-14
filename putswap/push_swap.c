/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 10:34:57 by trpham            #+#    #+#             */
/*   Updated: 2025/01/14 20:59:52 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdint.h>

static t_node	*ft_doubly_lstnew(int content);
static int ft_is_valid_number(char	*str);

int	main(int argc, char *argv[])
{
	int		i;
	t_node	*head;
	t_node	*new;
	t_node	*lst;
	int		num;

	i = 0;
	lst = NULL;
	head = NULL;
	if (argc == 1)
		return (-1);
	// handle the argument and return a list
	else if (argc > 1)
	{
		while (++i < argc)
		{
			if (ft_is_valid_number(argv[i]) == 0)
			{
				num = ft_atoi(argv[i]);
				new = ft_doubly_lstnew(num);
				if (!head)
				{
					head = new;
					lst = head;
				}
				else
				{
					lst->next = new;
					new->prev = lst;
					lst = lst->next;
				}
			}
			else
			{
				printf("Error\n");
				while (head)
				{
					lst = head;
					head = head->next;
					free(lst);
				}
				return (-1);
			}
		}
	}
	printf("Print original lst:\n");
	lst = head;
	while (lst)
	{
		printf("%d ", lst->content);
		lst = lst->next;
	}
	// printf("--> Print successfully\n");
	head = swap_stack(head);
	lst = head;
	printf("After swap:\n");
	while (lst)
	{
		printf("%d ", lst->content);
		lst = lst->next;
	}
	printf("\n");
	
	printf("ROTATION:\n");
	// lst = head;
	head = rotate_stack(head);
	lst = head;
	while (lst)
	{
		printf("%d ", lst->content);
		lst = lst->next;
	}
	printf("\n");

	
	printf("Reversed ROTATION:\n");
	// lst = head;
	head = reverse_rotate(head);
	lst = head;
	while (lst)
	{
		printf("%d ", lst->content);
		lst = lst->next;
	}
	printf("\n");
	
	lst = head;
	while (head)
	{
		lst = head;
		head = head->next;
		free(lst);
	}
	return (0);
}

static t_node	*ft_doubly_lstnew(int content)
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

static int ft_is_valid_number(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			i++;
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (-1);
	}
	return (0);		
}

