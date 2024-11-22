/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:42:22 by trpham            #+#    #+#             */
/*   Updated: 2024/11/22 15:55:48 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"
#include "limits.h"
#include <stdio.h> 

int	main(void)
{
	int	real;
	int	dup;

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
	real = printf("%s", ((char *)0));
	printf("\n");
	dup = ft_printf("%s", ((char *)0));
	printf("\n");
	printf("real = %d\ndup = %d\n", real, dup);
	printf("\n");

	printf("--> PRINT EMPTY STRING: \n");
	real = printf("%s", "");
	printf("\n");
	dup = ft_printf("%s", "");
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

	printf("--> PRINT INT_MIN - 1: \n");
	real = printf("total is %d %%", INT_MIN - 1);
	printf("\n");
	dup = ft_printf("total is %d %%", INT_MIN - 1); 
	printf("\n");
	printf("real = %d\ndup = %d\n", real, dup);
	printf("\n");

	printf("--> PRINT INT_MAX: \n");
	real = printf("total is %d", INT_MAX);
	printf("\n");
	dup = ft_printf("total is %d", INT_MAX); 
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
	real = printf("total is %p", &"23");
	printf("\n");
	dup = ft_printf("total is %p", &"23"); 
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

	long	*a = (long *)LONG_MIN;
	long	*b = (long *)LONG_MAX;
	printf("--> PRINT really big POINTER: \n");
	real = printf("total is %p %p", &a, &b);
	printf("\n");
	dup = ft_printf("total is %p %p", &a, &b); 
	printf("\n");
	printf("real = %d\ndup = %d\n", real, dup);
	printf("\n");

	long	*c = (long *)ULONG_MAX;
	long	*d = (long *)-ULONG_MAX;
	printf("--> PRINT ultra big POINTER: \n");
	real = printf("total is %p %p", &c, &d);
	printf("\n");
	dup = ft_printf("total is %p %p", &c, &d); 
	printf("\n");
	printf("real = %d\ndup = %d\n", real, dup);
	printf("\n");

	printf("--> PRINT STRING & INT COMBI: \n");
	real = printf("This is a string %s and this is an int %i end", "Why's that", 214748364);
	printf("\n");
	dup = ft_printf("This is a string %s and this is an int %i end", "Why's that", 214748364);
	printf("\n");
	printf("real = %d\ndup = %d\n", real, dup);
	printf("\n");
	
	// printf("--> PRINT EDGE CASE: \n");
	// real = printf("total %% of population is %d%", 5); // not working with cflags
	// printf("\n");
	// dup = ft_printf("total %% of population is %d%", 5);
	// printf("\n");
	// printf("real = %d\ndup = %d\n", real, dup); 
	// printf("\n");

}
