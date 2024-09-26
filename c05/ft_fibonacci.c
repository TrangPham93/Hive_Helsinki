/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:09:08 by trpham            #+#    #+#             */
/*   Updated: 2024/09/16 15:09:13 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	result;

	result = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index > 1)
	{
		result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_fibonacci(6));
}
*/
