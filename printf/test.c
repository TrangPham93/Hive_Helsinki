/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:42:22 by trpham            #+#    #+#             */
/*   Updated: 2024/11/20 10:35:14 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libftprintf.h"

void	test_ft_printf(void)
{
	printf("--> PRINT CHAR: \n");
	printf("%c\n", 'a');
	ft_printf("%c", 'a');
	printf("\n");

	printf("--> PRINT CHAR: \n");
	printf("%s\n", "Why's that");
	ft_printf("%s\n", "Why's that");
	printf("\n");

	printf("--> PRINT INT: \n");
	printf("total is %d %%\n", -123);
	ft_printf("total is %d %%\n", -123); // need to print 'total is ??'
	printf("\n");


}

int	main(void)
{
	test_ft_printf();
	return (0);
}