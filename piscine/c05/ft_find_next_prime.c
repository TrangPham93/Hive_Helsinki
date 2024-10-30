/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:15:06 by trpham            #+#    #+#             */
/*   Updated: 2024/09/16 18:20:48 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i > 1 && i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}

/*
0 is false, 1 is true

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_find_next_prime(14));
	printf("%d\n", ft_find_next_prime(23));
	printf("%d\n", ft_find_next_prime(36));
}
*/
