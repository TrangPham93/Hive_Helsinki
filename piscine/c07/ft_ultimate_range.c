/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:55:01 by trpham            #+#    #+#             */
/*   Updated: 2024/09/18 14:58:15 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*dup;

	if (min >= max)
		return (0);
	dup = malloc((max - min) * sizeof(int));
	if (dup == NULL)
		return (-1);
	i = 0;
	dup[i] = min;
	while (++i < (max - min))
		dup[i] = dup[i - 1] + 1;
	*range = dup;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*arr;
	int	i;

	i = 0;
	printf("%d", ft_ultimate_range(&arr, 2, 5));
	//free(arr);
}
*/
