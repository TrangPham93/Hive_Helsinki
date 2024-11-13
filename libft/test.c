/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:08:01 by trpham            #+#    #+#             */
/*   Updated: 2024/11/13 15:27:01 by trpham           ###   ########.fr       */
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
	printf("\n");
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
	printf("\n");
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
	printf("\n");
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
	printf("\n");
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
	printf("\n");
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
	printf("\n");
	for (int i = 0; i < 4; i++)
	{
		int	result = ft_strlen(test[i]);
		if (result == stdard[i])
			printf("✅ test %d passed | test value %s | result is %d | expected is %d\n", i + 1, test[i], result, stdard[i]);
		else
			printf("❌ test %d failed | test value %s | result is %d | expected is %d\n", i + 1, test[i], result, stdard[i]);
	}
}
void	test_ft_memset(void)
{
	char	str[20] = "or longer";
	char	test_str[20] = "or longer";

	printf("-> TEST MEMSET:\n");
	printf("\n");
	printf("memset test 1: %s\n", (unsigned char *)memset(str, '-', 3));
	printf("memset test 2: %s\n", (unsigned char *)memset(str, '-', 15));
	printf("\n");
	printf("ft_memset test 1: %s\n", (unsigned char *)ft_memset(test_str, '*', 3));
	printf("ft_memset test 2: %s\n", (unsigned char *)ft_memset(test_str, '*', 15));
}
void	test_ft_bzero(void)
{
	char	str[20] = "or longer";
	char	test_str[20] = "or longer";

	printf("-> TEST BZERO:\n");
	printf("\n");
	bzero(str, 3);
	printf("bzero test 1: %s\n", str + 3);
	bzero(str, 4);
	printf("bzero test 2: %s\n", str + 4);
	// 	The characters after the first three null bytes are still in memory, 
	// 	but they're not printed because printf 
	// stops at the first null terminator it encounters.
	printf("\n");
	ft_bzero(test_str, 3);
	printf("ft_bzero test 1: %s\n", test_str + 3);
	ft_bzero(test_str, 4);
	printf("ft_bzero test 2: %s\n", test_str + 4);
}

void	test_ft_memcpy(void)
{
	char	dest1[20] = "or longer";
	char	dest2[20] = "or longer";
	// char	dest3[20] = "or longer";
	// char	dest4[20] = "or longer";
	char	src1[20] = "noliin";
	char	src2[20] = "noliin";
	char	src3[20] = "noliin";
	char	src4[20] = "noliin";

	printf("-> TEST MEMCPY:\n");
	printf("\n");
	printf("memcpy   : %s\n", (unsigned char *)memcpy(dest1, src1, 2));
	printf("ft_memcpy: %s\n", (unsigned char *)ft_memcpy(dest2, src2, 2));
	printf("\n");
	printf("memcpy   : %s\n", (unsigned char *)memcpy(dest1, src1, 4));
	printf("ft_memcpy: %s\n", (unsigned char *)ft_memcpy(dest2, src2, 4));
	// printf doesn't print after first encounter with null
	printf("\n");
	printf("memcpy   : %s\n", (unsigned char *)memcpy(dest1, src1, 0));
	printf("ft_memcpy: %s\n", (unsigned char *)ft_memcpy(dest1, src1, 0));
	printf("\n");
	printf("memcpy   : %s\n", (unsigned char *)memcpy(src3 + 2, src3, 7));
	printf("ft_memcpy: %s\n", (unsigned char *)ft_memcpy(src4 + 2, src4, 7));
	// This overlapping causes undefined behavior because:
    // You're modifying the source data as you're reading from it.
    // You're writing beyond the end of the originally allocated memory.
}

void	test_ft_memmove(void)
{
	char	dest[30] = "KKKKKKKKKKKK";
	char	src[10] = "abcdefghi";
	char	test_dest[20] = "KKKKKKKKKKKK";
	char	test_src[10] = "abcdefghi";

	printf("-> TEST MEMMOVE:\n");
	printf("\n");
	printf("memmove   : %s\n", (unsigned char *)memmove(dest, src, 2));
	printf("ft_memmove: %s\n", (unsigned char *)ft_memmove(test_dest, test_src, 2));

	// printf("%s\n", memmove(dest, src, 4));
	// printf("%s\n", ft_memmove(test_dest, test_src, 4));
	// // format ‘%s’ expects argument of type ‘char *’, 
	// // but argument 2 has type ‘void *’
	printf("\n");
	printf("memmove   : %s\n", (unsigned char *)memmove(dest, src, 0));
	printf("ft_memmove: %s\n", (unsigned char *)ft_memmove(test_dest, test_src, 0));
	printf("\n");
	printf("memmove   : %s\n", (unsigned char *)memmove(dest, src, 10));
	printf("ft_memmove: %s\n", (unsigned char *)ft_memmove(test_dest, test_src, 10));
	printf("\n");
	printf("memmove   : %s\n", (unsigned char *)memmove(src+ 2, src, 5));
	printf("ft_memmove: %s\n", (unsigned char *)ft_memmove(test_src + 2, test_src, 5));

}

void	test_ft_strlcat(void)
{
	char d[20] = "";
	char s[20]	= "HAKHA";

	char d_test[20] = "";
	char s_test[20]	= "HAKHA";
	printf("-> TEST STRLCAT:\n");
	printf("\n");
	printf("strlcat   : %ld\n",strlcat(d, s, 0));
	printf("ft_strlcat: %ld\n",ft_strlcat(d_test, s_test, 0));
	printf("\n");
	printf("strlcat   :%ld\n",strlcat(d, s, 2));
	printf("ft_strlcat: %ld\n",ft_strlcat(d_test, s_test, 2));
	printf("\n");
	printf("strlcat   :%ld\n",strlcat(d,s,5));
	printf("ft_strlcat: %ld\n",ft_strlcat(d_test, s_test, 5));
	printf("\n");

	char d1[20] = "Vis";
	char s1[20]	= "";

	char d_test1[20] = "Vis";
	char s_test1[20]	= "";

	printf("strlcat   : %ld\n",strlcat(d1, s1, 8));
	printf("ft_strlcat: %ld\n",ft_strlcat(d_test1, s_test1, 8));
}

void	test_ft_strlcpy(void)
{
	char d[20] = "Vis";
	char s[20]	= "HAKHA";
	printf("-> TEST STRLCPY:\n");
	printf("\n");

	printf("strlcpy   :%ld\n",strlcpy(d,s,2));
	printf("ft_strlcpy: %ld\n",ft_strlcpy(d,s,2));
	printf("\n");
	printf("strlcpy   :%zu\n",strlcpy(d,s,0));
	printf("ft_strlcpy: %zu\n",ft_strlcpy(d,s,0));


	// Where dst is the destination buffer, 
	// src is the source string, 
	// and size is the size of the destination buffer
	// With the strlcpy() function, however, 
	// only size characters maximum are copied, 
	// and the value returned is the size of string src. 
	// (The value returned is always the size of string src 
	// regardless of how many characters are copied.)
} 
#include <ctype.h>
#include <stdio.h>

void	test_ft_toupper(void)
{
	printf("-> TEST TOUPPER:\n");
	printf("\n");
	printf("toupper   :%c\n", toupper('c'));
	printf("ft_toupper: %c\n",ft_toupper('c'));
	printf("\n");
	printf("toupper   :%c\n", toupper('K'));
	printf("ft_toupper: %c\n",ft_toupper('K'));
	printf("\n");
	printf("toupper   : %c\n", toupper('\0'));
	printf("ft_toupper: %c\n",ft_toupper('\0'));
	printf("\n");
	printf("toupper   :%d\n", toupper(5));
	printf("ft_toupper: %d\n",ft_toupper(5));
	printf("\n");
	printf("toupper   :%c\n", toupper('d'));
	printf("ft_toupper: %c\n",ft_toupper('d'));

}
void	test_ft_tolower(void)
{
	printf("-> TEST TOLOWER:\n");
	printf("\n");
	printf("tolower   : %c\n", tolower('A'));
	printf("ft_tolower: %c\n",ft_tolower('A'));
	printf("\n");
	printf("tolower   : %c\n", tolower('k'));
	printf("ft_tolower: %c\n",ft_tolower('k'));
	printf("\n");
	printf("tolower   : %d\n", tolower('\0'));
	printf("ft_tolower: %d\n",ft_tolower('\0'));
	printf("\n");
	printf("tolower   : %d\n", tolower(5));
	printf("ft_tolower: %d\n",ft_tolower(5));
	printf("\n");
	printf("tolower   : %c\n", tolower('Z'));
	printf("ft_tolower: %c\n",ft_tolower('Z'));
}

void	test_ft_strchr(void)
{
	char 	*s = "Vi sao lai the";
	printf("-> TEST STRCHR:\n");
	printf("\n");
	printf("Before strchr	: %s\n", s);
	printf("After ft_strchr :%s\n", ft_strchr(s, 'l'));
	printf("After strchr 	:%s\n", strchr(s, 'l'));
	printf("\n");
	printf("Before strchr 	:%s\n", s);
	printf("After ft_strchr :%s\n", ft_strchr(s, 'z'));
	printf("After strchr 	:%s\n", strchr(s, 'z'));
	printf("\n");
	printf("Before strchr 	:%s\n", s);
	printf("After ft_strchr :%s\n", ft_strchr(s, '\0'));
	printf("After strchr 	:%s\n", strchr(s, '\0'));

	char 	*s1 = "Vi sao sai the";
	printf("\n");
	printf("Before strchr 	:%s\n", s1);
	printf("After ft_strchr :%s\n", ft_strchr(s, 's'));
	printf("After strchr 	:%s\n", strchr(s, 's'));

}

void	test_ft_strrchr(void)
{
	char 	*s = "Vi sao lai the";
	printf("-> TEST STRRCHR:\n");
	printf("\n");
	printf("Before strchr  : %s\n", s);
	printf("After strchr l : %s\n", ft_strrchr(s, 'l'));
	printf("After strchr l : %s\n", strrchr(s, 'l'));
	printf("\n");
	printf("Before strchr  : %s\n", s);
	printf("After strchr z : %s\n", ft_strrchr(s, 'z'));
	printf("After strchr z : %s\n", strrchr(s, 'z'));
	printf("\n");
	printf("Before strchr 	  : %s\n", s);
	printf("After strchr  null: %s\n", ft_strrchr(s, '\0'));
	printf("After strchr  null: %s\n", strrchr(s, '\0'));
	printf("\n");
	
	char 	*s1 = "Vi sao sai the";
	
	printf("Before strchr s: %s\n", s1);
	printf("After strchr  s: %s\n", ft_strrchr(s, 's'));
	printf("After strchr  s: %s\n", strrchr(s, 's'));
}

void	test_ft_strncmp(void)
{
	char	*s1 = "howb";
	char	*s2 = "howare";
	printf("-> TEST STRNCMP:\n");
	printf("\n");
	
	printf("%d\n", strncmp(s1, s2, 3));
	printf("%d\n", ft_strncmp(s1, s2, 3));
	printf("\n");
	printf("%d\n", strncmp(s1, s2, 4));
	printf("%d\n", ft_strncmp(s1, s2, 4));
	printf("\n");
	printf("%d\n", strncmp(s1, s2, 5));
	printf("%d\n", ft_strncmp(s1, s2, 5));
	printf("\n");
	printf("%d\n", strncmp(s1, s2, 8));
	printf("%d\n", ft_strncmp(s1, s2, 8));
	printf("\n");
	printf("%d\n", strncmp(s1, s2, 0));
	printf("%d\n", ft_strncmp(s1, s2, 0));
	printf("\n");
	char	*s3 = "how ";
	char	*s4 = "howare";
	printf("%d\n", strncmp(s3, s4, 4));
	printf("%d\n", ft_strncmp(s3, s4, 4));
}

void	test_ft_memchr(void)
{
	char 	*p = "Vi sao lai the";
	printf("-> TEST MEMCHR:\n");
	printf("\n");
	printf("Beforememchr l: %p\n", p);
	printf("Aftermemchr  l:%p\n", ft_memchr(p, 'l',15));
	printf("Aftermemchr  l:%p\n",memchr(p, 'l',15));
	printf("\n");
	printf("Beforememchr  :%p\n", p);
	printf("Aftermemchr z: %p\n", ft_memchr(p, 'z',5));
	printf("Aftermemchr z: %p\n",memchr(p, 'z',5));
	printf("\n");
	printf("Beforememchr     :%p\n", p);
	printf("Aftermemchr null :%p\n", ft_memchr(p, '\0',5));
	printf("Aftermemchr null :%p\n",memchr(p, '\0',5));
	printf("\n");
	char 	*s1 = "Vi sao sai the";

	printf("Beforememchr :%p\n", s1);
	printf("Aftermemchr p: %p\n", ft_memchr(s1, 'p',5));
	printf("Aftermemchr p: %p\n",memchr(s1, 'p',5));

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
	test_ft_bzero();
	test_ft_memcpy();
	test_ft_memmove();
	test_ft_strlcat();
	test_ft_strlcpy();
	test_ft_tolower();
	test_ft_toupper();
	test_ft_strchr();
	test_ft_strrchr();
	test_ft_strncmp();
	test_ft_memchr();
	// test_ft_memcmp();
	// test_ft_strnstr();
	// test_ft_atoi();
	// test_ft_strmapi();
	// test_ft_strncmp();
	// test_ft_strnstr();
	
	// test_ft_strtrim();
	// test_ft_substr();
	return(0);
}