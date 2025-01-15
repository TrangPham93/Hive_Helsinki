/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 10:41:55 by trpham            #+#    #+#             */
/*   Updated: 2025/01/15 15:55:10 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <stdlib.h>
# include <stdio.h>

typedef struct s_node
{
	int				content;
	int				index;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

t_node *swap_stack(t_node *lst);
t_node	*rotate_stack(t_node *lst);
t_node	*reverse_rotate(t_node *lst);
t_node	*ft_doubly_lstnew(int content);
int		ft_is_valid_number(char	*str);
void 	print_list(t_node *lst);
void 	free_list(t_node *lst);
void	push_stack(t_node **stack_1, t_node **stack_2);



#endif