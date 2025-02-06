/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 10:34:57 by trpham            #+#    #+#             */
/*   Updated: 2025/02/06 16:56:14 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./libft/includes/libft.h"
#include "./libft/includes/ft_printf.h"

int	main(int argc, char *argv[])
{
	t_node	*stack_a;
	t_node	*stack_b;
	int		stack_size;
	char	moves[999999];

	stack_a = NULL;
	stack_b = NULL;
	if (argc > 1)
	{
		stack_a = ft_handle_input(argc, argv);
		if (!stack_a)
		{
			free_stack(stack_a);
			return (0);
		}
		printf("initial input :\n");
		print_list(stack_a);
		stack_size = stack_size_cal(stack_a);
		ft_memset(moves, 0, 999999);
		ft_sort(&stack_a, &stack_b, stack_size, moves);
	}
	// print_list(stack_a);
	// print_list(stack_b);
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}

void	ft_sort(t_node **stack_a, t_node **stack_b, int stack_size,
				char moves[])
{
	int	i;

	i = 0;
	if (stack_size == 1)
		;
	else if (is_sorted(*stack_a) == 0)
		;
	else if (stack_size == 2)
		i = sort_stack_of_two(stack_a, moves, i);
	else if (stack_size == 3)
		i = sort_stack_of_three(stack_a, moves, i);
	else if (stack_size == 4)
		i = sort_stack_of_four(stack_a, stack_b, moves, i);
	else if (stack_size == 5)
		i = sort_stack_of_five(stack_a, stack_b, moves, i);
	else
	{
		i = partition_by_mean(stack_a, stack_b, stack_size, moves, i);
		i = sort_stack_of_five(stack_a, stack_b, moves, i);
		while (*stack_b)
			i = execute_best_move(stack_a, stack_b, moves, i);
		i = move_to_top_a(stack_a, find_min_node(*stack_a), moves, i);
	}
	print_moves(moves, i);
}


void	error(void)
{
	write(2, "Error\n", 6);
	exit (-1);
}