/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 18:38:26 by trpham            #+#    #+#             */
/*   Updated: 2024/09/09 18:38:31 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a;
	d = *b;
	*a = c / d;
	*b = c % d;
}

/*
int	main(void)
{
	int	num = 10;
	int	deno = 3;
	int	*division;
	int	*remainder;

	division = &num;
	remainder = &deno;

	ft_ultimate_div_mod(division, remainder);

	printf("%d\n", *division);
	printf("%d\n", *remainder);
}
*/
