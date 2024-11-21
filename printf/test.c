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
#include "limits.h"
#include <stdio.h> 

int	main(void)
{
	int	real;
	int	dup;

	// printf("--> NULL format:");
	// real = printf(NULL);
	// dup = ft_printf(NULL);
	// printf("real = %d\ndup = %d\n", real, dup);

	printf("--> PRINT CHAR: \n");
	real = printf("%c", 'a');
	printf("\n");
	dup = ft_printf("%c", 'a');
	printf("\n");
	printf("real = %d\ndup = %d\n", real, dup);
	printf("\n");

	printf("--> PRINT STRING: \n");
	real = printf("%s", "Why's that");
	printf("\n");
	dup = ft_printf("%s", "Why's that");
	printf("\n");
	printf("real = %d\ndup = %d\n", real, dup);
	printf("\n");

	printf("--> PRINT NULL STRING: \n");
	real = printf("%s", NULL);
	printf("\n");
	dup = ft_printf("%s", NULL);
	printf("\n");
	printf("real = %d\ndup = %d\n", real, dup);
	printf("\n");

	printf("--> PRINT INT: \n");
	real = printf("total is %d %%", 13);
	printf("\n");
	dup = ft_printf("total is %d %%", 13); 
	printf("\n");
	printf("real = %d\ndup = %d\n", real, dup);
	printf("\n");

	printf("--> PRINT NULL INT: \n");
	real = printf("total is %i %%", NULL);
	printf("\n");
	dup = ft_printf("total is %i %%", NULL); 
	printf("\n");
	printf("real = %d\ndup = %d\n", real, dup);
	printf("\n");

	printf("--> PRINT hexadecimal: \n");
	real = printf("total is %x", -456);
	printf("\n");
	dup = ft_printf("total is %x", -456); 
	printf("\n");
	printf("real = %d\ndup = %d\n", real, dup);
	printf("\n");

	printf("--> PRINT HEXEDECIMAL: \n");
	real = printf("total is %X", INT_MAX);
	printf("\n");
	dup = ft_printf("total is %X", INT_MAX); 
	printf("\n");
	printf("real = %d\ndup = %d\n", real, dup);
	printf("\n");

	printf("--> PRINT POINTER: \n");
	real = printf("total is %p", 23);
	printf("\n");
	dup = ft_printf("total is %p", 23); 
	printf("\n");
	printf("real = %d\ndup = %d\n", real, dup);
	printf("\n");

	printf("--> PRINT NULL POINTER: \n");
	real = printf("total is %p", NULL);
	printf("\n");
	dup = ft_printf("total is %p", NULL); 
	printf("\n");
	printf("real = %d\ndup = %d\n", real, dup);
	printf("\n");
	
	printf("--> PRINT EDGE CASE: \n");
	real = printf("total %t of population is %d%", 5); // not correct?
	printf("\n");
	dup = ft_printf("total %t of population is %d%", 5);
	printf("\n");
	printf("real = %d\ndup = %d\n", real, dup); 
	printf("\n");
}
