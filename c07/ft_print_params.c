/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:16:43 by trpham            #+#    #+#             */
/*   Updated: 2024/09/17 15:21:09 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(char *c)
{
	while (*c)
	{
		write(1, c, 1);
		c++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{	
		ft_print_params(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
