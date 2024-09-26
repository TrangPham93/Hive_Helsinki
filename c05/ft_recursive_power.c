/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:00:06 by trpham            #+#    #+#             */
/*   Updated: 2024/09/16 15:00:09 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0)
	{
		result = nb * ft_recursive_power(nb, power - 1);
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d",ft_recursive_power(-2,3));
}
*/
