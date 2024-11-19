/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:42:22 by trpham            #+#    #+#             */
/*   Updated: 2024/11/19 15:00:08 by trpham           ###   ########.fr       */
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
	printf("%d\n", 23);
	ft_printf("%d\n", 23);
	printf("\n");

}