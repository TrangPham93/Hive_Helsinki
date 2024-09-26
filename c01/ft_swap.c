/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:09:30 by trpham            #+#    #+#             */
/*   Updated: 2024/09/09 17:09:48 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int	main(void)
{
	int	first;
	int	second;
	int	*first_pnt;
	int	*second_pnt;

	first = 5;
	second = 7;
	first_pnt = &first;
	second_pnt = &second;
	
	printf("%d\n", *first_pnt);
	printf("%d\n", *second_pnt);
	printf("%p\n", first_pnt);
	printf("%p\n", second_pnt);
	
	ft_swap(first_pnt, second_pnt);
	
	printf("%d\n", *first_pnt);
	printf("%d\n", *second_pnt);
	printf("%p\n", first_pnt);
	printf("%p\n", second_pnt);
}
*/
