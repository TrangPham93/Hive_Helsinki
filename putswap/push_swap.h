/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 10:41:55 by trpham            #+#    #+#             */
/*   Updated: 2025/01/07 11:43:50 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>

typedef struct s_node
{
	void			*content;
	struct s_node	*next;
	struct s_node	*prev;
	
}	t_node;
t_node	*ft_lstnew(void *content);
#endif