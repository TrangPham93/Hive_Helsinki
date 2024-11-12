/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:08:01 by trpham            #+#    #+#             */
/*   Updated: 2024/11/12 19:46:45 by trpham           ###   ########.fr       */
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
void	test_ft_isdigit(void)
{
	int	test1 = 'd';
	int	test2 = 'F';
	int	test3 = '5';
	int test4 = '\0';
	int	test[] = {test1, test2, test3, test4};
	int	stdard[] = {isdigit(test1), isdigit(test2), isdigit(test3),isdigit(test4)};

	printf("-> TEST ISDIGIT:\n");
	for (int i = 0; i < 4; i++)
	{
		int	result = ft_isdigit(test[i]);
		if (result == stdard[i])
			printf("✅ test %d passed | test value %c | result is %d | expected is %d\n", i + 1, test[i], result, stdard[i]);
		else
			printf("❌ test %d failed | test value %c | result is %d | expected is %d\n", i + 1, test[i], result, stdard[i]);
	}
}
void	test_ft_isalnum(void)
{
	int	test1 = 'd';
	int	test2 = 'F';
	int	test3 = '5';
	int test4 = '\0';
	int	test[] = {test1, test2, test3, test4};
	int	stdard[] = {isalnum(test1), isalnum(test2), isalnum(test3), isalnum(test4)};

	printf("-> TEST ISALNUM:\n");
	for (int i = 0; i < 4; i++)
	{
		int	result = ft_isalnum(test[i]);
		if (result == stdard[i])
			printf("✅ test %d passed | test value %c | result is %d | expected is %d\n", i + 1, test[i], result, stdard[i]);
		else
			printf("❌ test %d failed | test value %c | result is %d | expected is %d\n", i + 1, test[i], result, stdard[i]);
	}
}
void	test_ft_isascii(void)
{
	int	test1 = 'd';
	int	test2 = 'F';
	int	test3 = '\n';
	int test4 = -5;
	int	test[] = {test1, test2, test3, test4};
	int	stdard[] = {isascii(test1), isascii(test2), isascii(test3), isascii(test4)};

	printf("-> TEST ISASCII:\n");
	for (int i = 0; i < 4; i++)
	{
		int	result = ft_isascii(test[i]);
		if (result == stdard[i])
			printf("✅ test %d passed | test value %c | result is %d | expected is %d\n", i + 1, test[i], result, stdard[i]);
		else
			printf("❌ test %d failed | test value %c | result is %d | expected is %d\n", i + 1, test[i], result, stdard[i]);
	}
}
void	test_ft_isprint(void)
{
	int	test1 = 'd';
	int	test2 = ' ';
	int	test3 = '\n';
	int test4 = '5';
	int	test[] = {test1, test2, test3, test4};
	int	stdard[] = {isprint(test1), isprint(test2), isprint(test3), isprint(test4)};

	printf("-> TEST ISPRINT:\n");
	for (int i = 0; i < 4; i++)
	{
		int	result = ft_isprint(test[i]);
		if (result == stdard[i])
			printf("✅ test %d passed | test value %c | result is %d | expected is %d\n", i + 1, test[i], result, stdard[i]);
		else
			printf("❌ test %d failed | test value %c | result is %d | expected is %d\n", i + 1, test[i], result, stdard[i]);
	}
}
void	test_ft_strlen(void)
{
	char	*test1 = "visao laithe";
	char	*test2 = "";
	char	*test3 = "5";
	char	*test4 = " ";
	char	*test[50] = {test1, test2, test3, test4};
	int		stdard[] = {strlen(test1), strlen(test2), strlen(test3), strlen(test4)};

	printf("-> TEST STRLEN:\n");
	for (int i = 0; i < 4; i++)
	{
		int	result = ft_strlen(test[i]);
		if (result == stdard[i])
			printf("✅ test %d passed | test value %s | result is %d | expected is %d\n", i + 1, test[i], result, stdard[i]);
		else
			printf("❌ test %d failed | test value %s | result is %d | expected is %d\n", i + 1, test[i], result, stdard[i]);
	}
}




int main(void)
{
	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isprint();
	test_ft_strlen();
	test_ft_memset();
	test_ft_memcpy();
	test_ft_memmove();
	test_ft_bzero();
	test_ft_strlcat();
	test_ft_strlcpy();
	test_ft_tolower();
	test_ft_toupper();
	
	return(0);
}