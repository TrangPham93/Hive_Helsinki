/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 18:18:38 by trpham            #+#    #+#             */
/*   Updated: 2024/09/09 18:18:41 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
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
	ft_div_mod(num, deno, division, remainder);
	printf("%d\n", *division);
	printf("%d\n", *remainder);
}
*/
