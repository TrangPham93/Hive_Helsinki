/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:28:28 by trpham            #+#    #+#             */
/*   Updated: 2024/09/18 12:29:40 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return ((void *)0);
	range = malloc((max - min) * sizeof(int));
	if (range == NULL)
		return (NULL);
	i = 0;
	range[i] = min;
	while (++i < (max - min))
		range[i] = range[i - 1] + 1;
	return (range);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*b;
	int	i;

	i = 0;
	b = ft_range(3, 7);
	if (b == NULL)
		printf("%ls", b);
	else
	{
		while (i < (7-3))
		{	
			printf("%d", b[i]);
			i++;
		}
	}
	free(b);
}
*/
