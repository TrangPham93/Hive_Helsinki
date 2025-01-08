/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 10:34:57 by trpham            #+#    #+#             */
/*   Updated: 2025/01/08 14:46:30 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdint.h>

static t_node	*ft_doubly_lstnew(int content);
static int ft_is_valid_number(char	*str);

// int	ft_atoi(const char *nptr)
// {
// 	int			i;
// 	long long	result;
// 	int			sign;

// 	i = 0;
// 	result = 0;
// 	sign = 1;
// 	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
// 		i++;
// 	if (nptr[i] == '-' || nptr[i] == '+')
// 	{
// 		if (nptr[i] == '-')
// 			sign = -1;
// 		i++;
// 	}
// 	while (nptr[i] >= '0' && nptr[i] <= '9')
// 	{
// 		result = result * 10 + (nptr[i] - '0');
// 		i++;
// 	}
// 	if (result * sign > INT_MAX)
// 		return (-1);
// 	else if (result * sign < INT_MIN)
// 		return (0);
// 	return (result * sign);
// }

int	main(int argc, char *argv[])
{
	int		i;
	t_node	*lst;
	t_node	*new;
	t_node	*current;
	int		num;

	i = 0;
	lst = NULL;
	current = NULL;
	if (argc == 1)
		return (1);
	else if (argc > 1)
	{
		while (++i < argc)
		{
			if (ft_is_valid_number(argv[i]) == 0)
			{
				num = ft_atoi(argv[i]);
				new = ft_doubly_lstnew(num);
				if (!lst)
				{
					lst = new;
					current = lst;
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
				printf("Error");
				while (lst)
				{
					current = lst;
					lst = lst->next;
					free(current);
				}
				return (-1);
			}
		}
	}
	else
		printf("Error: give a list of integer");
	while (current)
	{
		lst = current;
		printf("%d\n", lst->content);
		current = current->next;
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