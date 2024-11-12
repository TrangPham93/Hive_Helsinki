/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:08:01 by trpham            #+#    #+#             */
/*   Updated: 2024/11/12 19:07:41 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>

void	test_ft_isalpha(void)
{
	int	test1 = 'd';
	int	test2 = 'F';
	int	test3 = '5';
	int test4 = '\0';
	int	test[] = {test1, test2, test3, test4};
	int	stdard[] = {isalpha(test1), isalpha(test2), isalpha(test3), isalpha(test4)};

	printf("-> TEST ISALPHA:\n");
	for (int i = 0; i < 4; i++)
	{
		int	result = ft_isalpha(test[i]);
		if (result == stdard[i])
			printf("✅ test %d passed | test value %c | result is %d | expected is %d\n", i + 1, test[i], result, stdard[i]);
		else
			printf("❌ test %d failed | test value %c | result is %d | expected is %d\n", i + 1, test[i], result, stdard[i]);
	}
}



int main(void)
{
	test_ft_isalpha();

	return(0);
}