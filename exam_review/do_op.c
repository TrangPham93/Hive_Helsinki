/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:53:58 by trpham            #+#    #+#             */
/*   Updated: 2025/02/12 15:57:14 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	main(int ac, char **av)
{
	int result;
	
	if (ac == 4)
	{
		if (*av[2] == '+')
			result = atoi(av[1]) + atoi(av[3]);
		else if (*av[2] == '-')
			result = atoi(av[1]) - atoi(av[3]);
		else if (*av[2] == '*')
			result = atoi(av[1]) * atoi(av[3]);
		else if (*av[2] == '/')
			result = atoi(av[1]) / atoi(av[3]);
		else if (*av[2] == '%')
			result = atoi(av[1]) % atoi(av[3]);
		printf("%d", result);
	}
	printf("\n");
	// write(1, "\n", 1);
	return (0);
}

