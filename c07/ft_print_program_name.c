/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:38:27 by trpham            #+#    #+#             */
/*   Updated: 2024/09/17 14:38:29 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_program_name(char *a)
{
	while (*a)
	{
		write(1, a, 1);
		a++;
	}
}

int	main(int argc, char *argv[])
{
	argc = 0;
	ft_print_program_name(argv[argc]);
	write(1, "\n", 1);
	return (0);
}
