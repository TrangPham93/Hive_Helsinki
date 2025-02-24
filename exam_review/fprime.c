/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:11:58 by trpham            #+#    #+#             */
/*   Updated: 2025/02/24 15:58:44 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_prime(int nb)
{
	int i;
	
	i = 2;
	if (nb < 2)
		return(-1);
	while (i  * i <= nb)
	{
		if (nb % i == 0)
			return (-1);
		i++;
	}
	return (0);
}

int	next_prime(int prime)
{
	while (1)
	{
		prime++;
		if (is_prime(prime) == 0)
			return (prime);
	}
	
}


int	main(int ac, char **av)
{
	int nb;
	int	prime;
	
	if (ac == 2)
	{
		nb = atoi(av[1]);
		if (nb == 1)
		{
			printf("%d\n", nb);
			return (0);
		}
		prime = 2;
		while (prime <= nb)
		{
			while (nb % prime == 0)
			{
				printf("%d", prime);
				if (nb != prime)
					printf("*");
				nb = nb / prime;
			}
			prime = next_prime(prime);
			// printf("%d\n", prime);
		}
	}
	printf("\n");
}
