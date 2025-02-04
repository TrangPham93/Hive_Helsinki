/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 10:34:57 by trpham            #+#    #+#             */
/*   Updated: 2025/02/04 15:55:42 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./libft/includes/libft.h"
#include "./libft/includes/ft_printf.h"

int	main(int argc, char *argv[])
{
	t_node	*stack_a;
	t_node	*stack_b;
	char	**input_arr;
	int		stack_size;
	char	moves[999999];

	stack_a = NULL;
	stack_b = NULL;
	if (argc > 1)
	{
		input_arr = ft_handle_input(argc, argv);
		if (input_arr == NULL || ft_valid_input(input_arr) == -1)
		{
			error();
		}
		stack_a = create_stack(input_arr);
		if (argc == 2)
			ft_free_input_arr(input_arr);
		else
			free(input_arr);
		if (stack_a == NULL)
		{
			free_stack(stack_a);
			return (0) ;
		}
		stack_size = stack_size_cal(stack_a);
		// printf("size of stack_a %d\n", stack_size);
		// print_list(stack_a);
		// print_list(stack_b);
		ft_sort(&stack_a, &stack_b, stack_size, moves);
	}
	print_list(stack_a);
	print_list(stack_b);
	
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
		printf ("print size of 1\n");
	else if (is_sorted(*stack_a) == 0)
		printf("stack is sorted\n");
	else if (stack_size == 2)
		i = sort_stack_of_two(stack_a, moves, i);
	else if (stack_size == 3)
		i =	sort_stack_of_three(stack_a, moves, i);
	else if (stack_size == 4)
		i = sort_stack_of_four(stack_a, stack_b, moves, i);
	else if (stack_size == 5)
		i = sort_stack_of_five(stack_a, stack_b, moves, i);
	else
	{
		partition_by_mean(stack_a, stack_b, stack_size, moves, i);
		sort_stack_of_five(stack_a, stack_b, moves, i);
		while (*stack_b)
			execute_best_move(stack_a, stack_b, moves, i);
	}
	print_moves(moves, i);
}

void	print_moves(char moves[], int i)
{
	int	j;
	int	temp;

	j = 0;
	while (j <= i)
	{
		temp = j;
		j = optimized_move(moves, j);
		if (j - temp != 1)
			normal_move(moves, j);
		j++;
	}
}

int	optimized_move(char	moves[], int i)
{
	if ((moves[i] == '1' && moves[i + 1] == '2')
		|| (moves[i] == '2' && moves[i + 1] == '1'))
		write(1, "ss\n", 3);
	else if ((moves[i] == '3' && moves[i + 1] == '4')
		|| (moves[i] == '4' && moves[i + 1] == '3'))
		write(1, "rr\n", 3);
	else if ((moves[i] == '5' && moves[i + 1] == '6')
		|| (moves[i] == '6' && moves[i + 1] == '5'))
		write(1, "rrr\n", 4);
	i++;
	return (i);
}
int	normal_move(char moves[], int i)
{
	if (moves[i] == '1')
		write(1, "sa\n", 3);
	if (moves[i] == '2')
		write(1, "sb\n", 3);
	if (moves[i] == '3')
		write(1, "ra\n", 3);
	if (moves[i] == '4')
		write(1, "ra\n", 3);
	if (moves[i] == '5')
		write(1, "rra\n", 4);
	if (moves[i] == '6')
		write(1, "rrb\n", 4);
	if (moves[i] == '7')
		write(1, "pb\n", 3);
	if (moves[i] == '8')
		write(1, "pa\n", 3);
	return (i);
}
