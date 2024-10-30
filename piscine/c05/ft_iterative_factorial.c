/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:21:54 by trpham            #+#    #+#             */
/*   Updated: 2024/09/16 11:57:32 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	facto;
	int	i;

	facto = 1;
	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i <= nb)
	{
		facto = facto * i;
		i++;
	}
	return (facto);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_factorial(4));
}
*/
