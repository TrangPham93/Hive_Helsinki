/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:06:20 by trpham            #+#    #+#             */
/*   Updated: 2024/09/16 13:06:25 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	facto;

	facto = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb >= 1)
	{
		facto = nb * ft_recursive_factorial(nb - 1);
	}
	return (facto);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_recursive_factorial(3));
	
}
*/
