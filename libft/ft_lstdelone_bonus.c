/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:06:21 by trpham            #+#    #+#             */
/*   Updated: 2024/11/14 15:16:01 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* static void	del(void	*content)
{
	free(content);
} */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/* #include <stdio.h>

int	main(void)
{
	int *a = malloc(sizeof(int));
	int *b = malloc(sizeof(int));
	int *c = malloc(sizeof(int));

	if (!a | !b || !c)
	{
		printf("memory allocation failed\n");
		return (1);
	}
	*a = 5;
	*b = 7;
	*c = '\0';
	t_list	*a_list = ft_lstnew(a);
	t_list	*b_list = ft_lstnew(b);
	t_list	*new = ft_lstnew(c);
	if (!a_list || !b_list || !new)
	{
		printf("list allocation failed\n");
		free(a);
		free(b);
		free(c);
		return (1);
	}
	a_list ->next = b_list;
	b_list ->next = new;
	ft_lstdelone(a_list, del);
	ft_lstdelone(b_list, del);
	ft_lstdelone(new, del);

	return (0);
} */