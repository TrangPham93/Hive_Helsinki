/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:08:01 by trpham            #+#    #+#             */
/*   Updated: 2024/11/16 20:44:39 by trpham           ###   ########.fr       */
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
	printf("ft_memset test 1: %s\n", (unsigned char *)ft_memset(test_str, '-', 3));
	printf("ft_memset test 2: %s\n", (unsigned char *)ft_memset(test_str, '-', 15));
	printf("\n");
	char *s = '\0';
	// printf("memset test 3: %s\n", (unsigned char *)memset(s, '-', 15));
	printf("memset test 3: %s\n", (unsigned char *)ft_memset(s, '-', 15));
	printf("\n");
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
	char	src1[20] = "KHL";
	char	src2[20] = "KHL";

	char	src3[20] = "noliin";
	char	src4[20] = "noliin";  noliin -> liin --> noln

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
	// printf("memcpy   : %s\n", (unsigned char *)memcpy(src3 + 2, src3, 3));
	// printf("ft_memcpy: %s\n", (unsigned char *)ft_memcpy(src4 + 2, src4, 3));
	// printf("\n");

	char	*dest7 = NULL;
	// printf("memcpy   : %s\n", (unsigned char *)memcpy(dest7, src3, 7));
	printf("memcpy return segmetation fault \n");
	printf("ft_memcpy: %s\n", (unsigned char *)ft_memcpy(dest7, src4, 7));
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
	char d[20] = "one two three";
	char s[20]	= "HAKHA";

	char d_test[20] = "one two three";
	char s_test[20]	= "HAKHA";

	printf("-> TEST STRLCAT:\n");
	printf("\n");
	printf("d %s\n", d);
	printf("s %s\n", s);
	printf("strlcat  size 0 : %ld\n",strlcat(d, s, 0));
	printf("d_test %s\n", d_test);
	printf("s_test %s\n", s_test);
	printf("ft_strlcat size 0 : %ld\n",ft_strlcat(d_test, s_test, 0));
	printf("\n");

	printf("d %s\n", d);
	printf("s %s\n", s);
	printf("strlcat size 2 :%ld\n",strlcat(d, s, 2));
	printf("d_test %s\n", d_test);
	printf("s_test %s\n", s_test);
	printf("ft_strlcat size 2 : %ld\n",ft_strlcat(d_test, s_test, 2));
	printf("\n");
	
	printf("d %s\n", d);
	printf("s %s\n", s);
	printf("strlcat  size 5 :%ld\n",strlcat(d,s,5));
	printf("d %s\n", d);
	printf("s %s\n", s);
	printf("\n");
	printf("d_test %s\n", d_test);
	printf("s_test %s\n", s_test);
	printf("ft_strlcat size 5 : %ld\n",ft_strlcat(d_test, s_test, 5));
	printf("d_test %s\n", d_test);
	printf("s_test %s\n", s_test);
	printf("\n");
	
	char d1[20] = "Vis";
	char s1[20]	= "";

	char d_test1[20] = "Vis";
	char s_test1[20]	= "";

	printf("strlcat   : %ld\n",strlcat(d1, s1, 8));
	printf("ft_strlcat: %ld\n",ft_strlcat(d_test1, s_test1, 8));


	// printf("NULL input :%ld\n", strlcat("Visao", NULL, 2));
	// printf("NULL input :%ld\n", ft_strlcat("Visao", NULL, 2));
}

void	test_ft_strlcpy(void)
{
	char d1[15] = "Visao";
	char s1[20]	= "HAKAHAKA";
	char d2[15] = "Visao";
	char s2[20]	= "HAKAHAKA";
	printf("\n");
	printf("-> TEST STRLCPY:\n");
	printf("dest len %ld\n", ft_strlen(d1));
	printf("dest len %ld\n", ft_strlen(d2));
	printf("\n");
	printf("after copy '%s' | '%s' strlcpy size 0  :%zu\n",d1, s1, strlcpy(d1,s1,0));
	printf("after copy '%s' | '%s' ft_strlcpy size 0: %zu\n",d2, s2, ft_strlcpy(d2,s2,0));
	printf("%s\n", d1);
	printf("%s\n", d2);
	printf("\n");
	printf("'%s' | '%s' strlcpy	size 2 :%ld\n", d1, s1, strlcpy(d1,s1,2));
	printf("'%s' | '%s' ft_strlcpy size 2	: %ld\n", d2, s2, ft_strlcpy(d2,s2,2));
	printf("%ld\n", ft_strlen(d1));
	printf("%ld\n", ft_strlen(d2));
	printf("\n");
	printf("'%s' | '%s' strlcpy size 5	:%ld\n", d1, s1, strlcpy(d1,s1,5));
	printf("'%s' | '%s' ft_strlcpy size 5	: %ld\n", d2, s2, ft_strlcpy(d2,s2,5));
	printf("%ld\n", ft_strlen(d1));
	printf("%ld\n", ft_strlen(d2));
	printf("\n");
	

} 

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
	char 	*s = "One two three four";
	printf("-> TEST STRRCHR:\n");
	printf("\n");
	printf("Before strchr     : %s\n", s);
	printf("After ft_strchr t : %s\n", ft_strrchr(s, 't'));
	printf("After strchr t    : %s\n", strrchr(s, 't'));
	printf("\n");
	printf("Before strchr     : %s\n", s);
	printf("After ft_strchr z : %s\n", ft_strrchr(s, 'z'));
	printf("After strchr z    : %s\n", strrchr(s, 'z'));
	printf("\n");
	printf("Before strchr 	     : %s\n", s);
	printf("After ft_strchr  null: %s\n", ft_strrchr(s, '\0'));
	printf("After strchr  null   : %s\n", strrchr(s, '\0'));
	printf("\n");
	
	char 	*s1 = NULL;
	
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
	
	printf("strncmp    :%d\n", strncmp(s1, s2, 3));
	printf("ft_strncmp : %d\n", ft_strncmp(s1, s2, 3));
	printf("\n");
	printf("strncmp    :%d\n", strncmp(s1, s2, 4));
	printf("ft_strncmp : %d\n", ft_strncmp(s1, s2, 4));
	printf("\n");
	printf("strncmp    :%d\n", strncmp(s1, s2, 5));
	printf("ft_strncmp :%d\n", ft_strncmp(s1, s2, 5));
	printf("\n");
	printf("strncmp    :%d\n", strncmp(s1, s2, 8));
	printf("ft_strncmp :%d\n", ft_strncmp(s1, s2, 8));
	printf("\n");
	printf("strncmp    :%d\n", strncmp(s1, s2, 0));
	printf("ft_strncmp :%d\n", ft_strncmp(s1, s2, 0));
	printf("\n");
	char	*s3 = NULL;
	char	*s4 = "howare";
	printf("strncmp    : return Segmentation fault (core dumped) (undefined behavior -> allow)\n");
	printf("ft_strncmp : %d\n", ft_strncmp(s3, s4, 4));
}

void	test_ft_memchr(void)
{
	char 	*p = "Vi sao lai the";
	printf("-> TEST MEMCHR:\n");
	printf("\n");
	printf("Before memchr l   : %s\n", p);
	printf("After ft_memchr  l:%s\n", (unsigned char *)ft_memchr(p, 'l',15));
	printf("After memchr  l   :%s\n", (unsigned char *)memchr(p, 'l',15));
	printf("\n");
	printf("Before   memchr  :%s\n", p);
	printf("After ft_memchr z: %s\n", (unsigned char *)ft_memchr(p, 'z',5));
	printf("After    memchr z: %s\n", (unsigned char *)memchr(p, 'z',5));
	printf("\n");
	printf("Before    memchr     :%s\n", p);
	printf("After ft_memchr null :%s\n", (unsigned char *)ft_memchr(p, '\0',5));
	printf("After    memchr null :%s\n", (unsigned char *)memchr(p, '\0',5));
	printf("\n");
	char 	*s1 = "Vi sao sai the";

	printf("Before    memchr :%s\n", s1);
	printf("After ft_memchr p: %s\n", (unsigned char *)ft_memchr(s1, 'p',5));
	printf("After    memchr p: %s\n", (unsigned char *)memchr(s1, 'p',5));

}

void	test_ft_memcmp(void)
{
	char	*s1 = "howb\n";
	char	*s2 = "howare";
	
	printf("-> TEST MEMCMP:\n");
	printf("\n");
	
	printf("%d\n", memcmp(s1, s2, 3));
	printf("%d\n", ft_memcmp(s1, s2, 3));
	printf("\n");
	printf("%d\n", memcmp(s1, s2, 5));
	printf("%d\n", ft_memcmp(s1, s2, 5));
	printf("\n");
	printf("%d\n", memcmp(s1, s2, 6));
	printf("%d\n", ft_memcmp(s1, s2, 6));
	printf("\n");
	printf("%d\n", memcmp(s1, s2, 0));
	printf("%d\n", ft_memcmp(s1, s2, 0));
	printf("\n");
	char	*s3 = "how ";
	char	*s4 = "howare";
	printf("%d\n", memcmp(s3, s4, 4));
	printf("%d\n", ft_memcmp(s3, s4, 4));

} 

void	test_ft_strnstr(void)
{
	char	*s1 = "NOhowb";
	char	*s2 = "how";
	char	*result;
	
	printf("-> TEST STRNSTR:\n");
	printf("\n");
	result = ft_strnstr(s1, s2, 5);
	printf("'%s' | '%s' | 5 : %s\n", s1, s2, result ? result : "null");
	printf("\n");

	result = ft_strnstr(s1, s2, 3);
	printf("'%s' | '%s' | 3 : %s\n", s1, s2, result ? result : "null");
	printf("\n");

	result = ft_strnstr(s1, s2, 0);
	printf("'%s' | '%s' | 0 : %s\n", s1, s2, result ? result : "null");
	printf("\n");

	char	*s3 = "how";
	char	*s4 = "";

	result = ft_strnstr(s3, s4, 3);
	printf("'%s' | '%s' | 3 : %s\n", s3, s4, result ? result : "null");
	printf("\n");

	char	*s5 = NULL;
	char	*s6 = "hoan";

	result = ft_strnstr(s5, s6, 2);
	printf("'%s' | '%s' | 2 : %s\n", s5, s6, result ? result : "null");
	printf("\n");
	
	char	*s7 = "how";
	char	*s8 = NULL;

	result = ft_strnstr(s7, s8, 3);
	printf("'%s' | '%s' | 3 : %s\n", s7, s8, result ? result : "null");
	printf("\n");
	
}

void	test_ft_atoi(void)
{
	printf("-> TEST ATOI:\n");
	printf("\n");

	printf("atoi    :%d\n", atoi("  -123"));
	printf("ft_atoi : %d\n", ft_atoi("  -123"));
	printf("\n");

	printf("atoi    : %d\n", atoi("+123"));
	printf("ft_atoi : %d\n", ft_atoi("+123"));
	printf("\n");

	printf("atoi    : %d\n", atoi("   +56"));
	printf("ft_atoi : %d\n", ft_atoi("   +56"));
	printf("\n");

	printf("atoi    : %d\n", atoi("  a +56"));
	printf("ft_atoi : %d\n", ft_atoi("  a +56"));
	printf("\n");

	printf("atoi    : %d\n", atoi("   -5 6anb"));
	printf("ft_atoi : %d\n", ft_atoi("   -5 6anb"));
	printf("\n");

	printf("atoi    : %d\n", atoi("188888888888888888888888888888888"));
	printf("ft_atoi : %d\n", ft_atoi("188888888888888888888888888888888"));
	printf("\n");

	printf("atoi    : %d\n", atoi("-188888888888888888888888888888888"));
	printf("ft_atoi : %d\n", ft_atoi("-188888888888888888888888888888888"));
	printf("\n");
	
}

void	test_ft_calloc(void)
{
	char	*s1 = calloc(5, 4);
	char	*s2 = ft_calloc( 5, 4);

	char	*s3 = calloc(5, 0);
	char	*s4 = ft_calloc( 5, 0);

	char	*s5 = calloc(0, 3);
	char	*s6 = ft_calloc( 0, 3);

	printf("-> TEST CALLOC:\n");
	printf("\n");

	if (s1 && s2 && ft_memcmp(s1, s2, 5*4)== 0)
		printf("calloc(5, 4) | comparision return : %s\n", "true");
	else
		printf("calloc(5, 4) | comparision return : %s\n", "false");
	printf("\n");
	if (s3 && s4 && ft_memcmp(s3, s4, 5*0)== 0)
		printf("calloc(5, 0) | comparision return : %s\n", "true");
	else
		printf("calloc(5, 0) | comparision return : %s\n", "false");
	printf("\n");
	if (s5 && s6 && ft_memcmp(s5, s6, 0*3)== 0)
		printf("calloc(0, 3 | comparision return : %s\n", "true");
	else
		printf("calloc(0, 3) | comparision return : %s\n", "false");
	printf("\n");
	free(s1);
	free(s2);
	free(s3);
	free(s4);
	free(s5);
	free(s6);
}

void	test_ft_strdup(void)
{
	char	*s1 = "";
	char	*s = "lkfakldf";
	char	*a;
	
	a = ft_strdup(s);
	printf("-> TEST STRDUP:\n");
	printf("\n");
	printf("ft_strdup of 'lkfakldf' : %s\n", a ? a : "null");
	free(a);
	printf("\n");
	a = ft_strdup(s1);
	printf("ft_strdup of '' : %s\n", a ? a : "null");
	printf("\n");
}
void	test_ft_substr(void)
{
	char	*s = "one two";
	char	*a;
	a = ft_substr(s, 4, 2);
	char	*s1 = "one two";
	char	*a1;
	a1 = ft_substr(s1, 4, 5);
	char	*s2 = "one";
	char	*a2;
	a2 = ft_substr(s2, 7, 4);
	
	printf("-> TEST SUBSTR:\n");
	printf("\n");

	printf("Str '%s' | start = 4 | len = 3 : %s\n", s, a ? a : "null");
	printf("\n");
	printf("Str '%s' | start = 4 | len = 5 : %s\n", s1, a1 ? a1 : "null");
	printf("\n");
	printf("Str '%s' | start = 7 | len = 4 : %s\n", s2, a2 ? a2 : "null");
	printf("\n");

	free(a);
	free(a1);
	free(a2);
}


void	test_ft_strjoin(void)
{
	char	*s1 = "one";
	char	*s2 = "two";
	char	*s;

	char	*s3 = NULL;
	char	*s4 = "tow";

	char	*s5 = "KOK";
	char	*s6 = "";

	printf("-> TEST STRJOIN:\n");
	printf("\n");

	s = ft_strjoin(s1, s2);
	printf("Join s1 = '%s' | s2 = '%s' : %s\n", s1, s2, s ? s : "null");
	free(s);
	s = ft_strjoin(s3, s4);
	printf("Join s1 = '%s' | s2 = '%s' : %s\n", s3, s4, s ? s : "null");
	free(s);
	s = ft_strjoin(s5, s6);
	printf("Join s1 = '%s' | s2 = '%s' : %s\n", s5, s6, s ? s : "null");
	free(s);
	printf("\n");
}

void	test_ft_strtrim(void)
{
	char	*s1 = "bacHelAalocb";
	char	*s2 = "abc";
	char	*s3 = "baccb";
	char	*s4 = "abc";
	char	*s5 = "";
	char	*s6 = "abc";
	char	*a;

	printf("\n");
	printf("-> TEST STRTRIM:\n");
	printf("\n");

	a = ft_strtrim(s1, s2);
	printf("'%s'	| '%s'	: %s\n", s1, s2, a ? a : "null");
	
	free(a);
	a = ft_strtrim(s3, s4);
	printf("'%s'	| '%s'	: %s\n",s3, s4, a ? a : "null");
	
	free(a);
	a = ft_strtrim(s5, s6);
	printf("'%s'	| '%s'	: %s\n",s5, s6, a ? a : "null");
	printf("\n");
	free(a);

}

void	test_ft_split(void)
{
	char	*s = "---split-this---k--nhi---";
	char	**a;
	int			i;

	printf("-> TEST SPLIT:\n");
	printf("\n");

	i = 0;
	a = ft_split(s,'-');
	while (a[i])
	{
		printf("split '---split-this---k--nhi---' | '-'	: %s\n", a[i]);
		i++;
	}
	printf("\n");
	a = ft_split(s,'+');
	i = 0;
	while (a[i])
	{
		printf("split '---split-this---k--nhi---' | '+'	: %s\n", a[i]);
		free(a[i]);
		i++;
	}
	free(a);
	printf("\n");
} 

void	test_ft_itoa(void)
{
	printf("-> TEST ITOA:\n");
	printf("\n");

	printf("test 1 '-123'	:%s\n", ft_itoa(-123));
	printf("test 2 '0'	:%s\n", ft_itoa(0));
	printf("test 3 '1'	:%s\n", ft_itoa(1));
	printf("test 4 '-4'	:%s\n", ft_itoa(-4));
	printf("test 5 '2147483647'	:%s\n", ft_itoa(INT_MAX));
	printf("test 6 '-2147483648'	:%s\n", ft_itoa(INT_MIN));
	printf("\n");

}
static char	ft_testfunc(unsigned int i, char c)
{
	(void) i;
	c = c - 32;
	return (c);
}

void	test_ft_strmapi(void)
{
	printf("-> TEST STRMAPI:\n");
	printf("\n");

	char	*s = "check";
	char	*newstr;

	newstr = ft_strmapi(s, ft_testfunc);
	if (newstr)
		printf("test string 'check'	: %s\n", newstr);
	free(newstr);
	printf("\n");
}
static void	ft_test(unsigned int i, char	*s)
{
	(void) i;
	*s = *s - 32;
	return;
}
void	test_ft_striteri(void)
{
	printf("-> TEST STRITERI:\n");
	printf("\n");

	char	s[] = "check";

	printf("Before %s\n", s);
	ft_striteri(s, ft_test);
	printf("After %s\n", s);
	printf("\n");
} 
void	test_ft_putchar_ft(void)
{
	printf("-> TEST FT_PUTCHAR_FT:\n");
	printf("\n");

	ft_putchar_fd('a', 1);
	ft_putchar_fd('\n', 1);
	printf("\n");
}
void	test_ft_putstr_fd(void)
{
	char	*s = "check";
	
	printf("-> TEST FT_PUTSTRING_FD:\n");
	printf("\n");
	ft_putstr_fd(s, 1);
	write(1, "\n", 1);

}
void	test_ft_putendl_fd(void)
{
	char	*s = "check";

	printf("-> TEST FT_PUTENDL_FD:\n");
	printf("\n");
	ft_putendl_fd(s, 1);

}
void	test_ft_putnbr_fd(void)
{
	printf("-> TEST FT_PUTNBR_FD:\n");
	printf("\n");

	printf("print '-223'	:\n");
	ft_putnbr_fd(-223, 1);
	printf("\n");
	printf("print '-1547821'	:\n");
	ft_putnbr_fd(-1547821, 1);
	printf("\n");
	printf("print '0'	:\n");
	ft_putnbr_fd(0, 1);
	printf("\n");
	printf("print '1664665'	:\n");
	ft_putnbr_fd(1664665, 1);
	printf("\n");

}

void	test_ft_lstnew(void)
{
	int a = 5;
	int b = 7;

	printf("-> TEST FT_LSTNEW:\n");
	printf("\n");

	t_list	*a_list = ft_lstnew(&a);
	t_list	*b_list = ft_lstnew(&b);
	t_list	*current;

	if (!a_list || !b_list)
	{
		printf("memory allocation failed\n");
		printf("\n");
	}
	
	a_list ->next = b_list;
	current = a_list;
	while (current)
	{
		printf("Print node's content :%d\n", *(int *)current->content);
		current = current->next;
	}
	free(a_list);
	free(b_list);
	printf("\n");
} 
void	test_ft_lstlast(void)
{
	int a = 5;
	int b = 7;
	int c = '\0';
	t_list	*a_list = ft_lstnew(&a);
	t_list	*b_list = ft_lstnew(&b);
	t_list	*new = ft_lstnew(&c);
	t_list	*current;

	printf("-> TEST FT_LSTSIZE:\n");
	printf("\n");

	if (!a_list || !b_list || !new)
	{
		printf("memory allocation failed\n");
	}
	a_list ->next = b_list;
	ft_lstadd_front(&a_list, new);
	current = ft_lstlast(new);
	while (current)
	{
		printf("Print the last node's content :%d\n", *(int *)current->content);
		current = current->next;
	}
	while (new)
	{
		t_list	*temp = new;
		new = new->next;
		free(temp);
	}

} 
void	test_ft_lstadd_front(void)
{
	int a = 5;
	int b = 7;
	int c = 3;
	t_list	*a_list = ft_lstnew(&a);
	t_list	*b_list = ft_lstnew(&b);
	t_list	*new = ft_lstnew(&c);
	t_list	*current;

	printf("-> TEST FT_LSTADD_FRONT:\n");
	printf("\n");
	if (!a_list || !b_list || !new)
	{
		printf("memory allocation failed\n");
	}
	
	a_list ->next = b_list;
	current = new;
	ft_lstadd_front(&a_list, new);
	while (current)
	{
		printf("Print node after add front :%d\n", *(int *)current->content);
		current = current->next;
	}
	printf("size of list %d\n", ft_lstsize(new));
	while (new)
	{
		t_list	*temp = new;
		new = new->next;
		free(temp);
	}

}
void test_ft_lstadd_back(void)
{
	int a = 5;
	int b = 7;
	int c = 9;
	t_list	*a_list = ft_lstnew(&a);
	t_list	*b_list = ft_lstnew(&b);
	t_list	*new = ft_lstnew(&c);
	t_list	*current;


	printf("-> TEST FT_LSTADD_BACK:\n");
	printf("\n");
	if (!a_list || !b_list || !new)
	{
		printf("memory allocation failed\n");
		printf("\n");
	}
	
	a_list ->next = b_list;
	current = a_list;
	ft_lstadd_back(&a_list, new);
	while (current)
	{
		printf("Print node after add back :%d\n", *(int *)current->content);
		current = current->next;
		printf("\n");
	}
	while (a_list)
	{
		t_list	*temp = a_list;
		a_list = a_list->next;
		free(temp);
	}
	printf("\n");
}
void	test_ft_lstsize(void)
{
	int a = 5;
	int b = 7;
	int c = 9;
	t_list	*a_list = ft_lstnew(&a);
	t_list	*b_list = ft_lstnew(&b);
	t_list	*new = ft_lstnew(&c);
	t_list	*current;


	printf("-> TEST FT_LSTSIZE:\n");
	printf("\n");
	if (!a_list || !b_list || !new)
	{
		printf("memory allocation failed\n");
	}
	
	a_list ->next = b_list;
	current = a_list;
	ft_lstadd_back(&a_list, new);
	printf("print size of list: %d\n", ft_lstsize(current));
	printf("\n");
}
static void	del_f(void	*content)
{
	free(content);
}
void	test_ft_lstdelone(void)
{
	int *a = malloc(sizeof(int));
	int *b = malloc(sizeof(int));
	int *c = malloc(sizeof(int));

	printf("-> TEST FT_LSTDELONE:\n");
	printf("\n");

	if (!a || !b || !c)
	{
		printf("memory allocation failed\n");
		printf("\n");
		free(a);
		free(b);
		free(c);
	}
	*a = 5;
	*b = 7;
	*c = '\0';
	t_list	*a_list = ft_lstnew(a);
	t_list	*b_list = ft_lstnew(b);
	t_list	*c_list = ft_lstnew(c);
	if (!a_list || !b_list || !c_list)
	{
		printf("list allocation failed\n");
		printf("\n");
		free(a);
		free(b);
		free(c);
		free(a_list);
		free(b_list);
		free(c_list);
	}
	a_list ->next = b_list;
	b_list ->next = c_list;

	ft_lstdelone(b_list, del_f);
	a_list->next = c_list;
	while (a_list)
	{
		printf("Print node before lstdelone: %d\n", *(int *)a_list->content);
		a_list = a_list->next;
		printf("\n");
	}
}

void	test_ft_lstclear(void)
{
	int *a = malloc(sizeof(int));
	int *b = malloc(sizeof(int));
	int *c = malloc(sizeof(int));

	printf("-> TEST FT_LSTDCLEAR:\n");
	printf("\n");
	if (!a || !b || !c)
		printf("memory allocation failed\n");
	printf("\n");
	*a = 5;
	*b = 7;
	*c = 12;

	t_list	*a_list = ft_lstnew(a);
	t_list	*b_list = ft_lstnew(b);
	t_list	*c_list = ft_lstnew(c);
	if (!a_list || !b_list || !c_list)
	{
		printf("create new node failed");
		printf("\n");
		free(a);
		free(b);
		free(c);
	}
	
	ft_lstadd_back(&a_list, b_list);
	ft_lstadd_back(&a_list, c_list);
	t_list	*temp = a_list;

	while (temp)
	{
		printf("Print node before lstclear: %d\n", *(int *)temp->content);
		temp = temp->next;
	}

	ft_lstclear(&a_list, del_f);
	if (!a_list)
		printf("after clear, list is empty\n");
	else
		printf("after clear, list is not empty\n");
	printf("\n");

}
void	iter_f(void	*content)
{
	*(int	*)content += 20;
}

void	test_ft_lstiter(void)
{
	int	*a = malloc(sizeof(int));
	int	*b = malloc(sizeof(int));
	int	*c = malloc(sizeof(int));
	
	printf("-> TEST FT_LSTITER:\n");
	printf("\n");
	
	if (!a || !b || !c)
	{
		printf("content failed\n");
		printf("\n");
		free(a);
		free(b);
		free(c);
	}
	*a = 3;
	*b = 5;
	*c = 7;

	t_list	*a_list = ft_lstnew(a);
	t_list	*b_list = ft_lstnew(b);
	t_list	*c_list = ft_lstnew(c);
	if (!a_list || !b_list || !c_list)
	{
		printf("Node creation failed\n");
		printf("\n");
		free(a);
		free(b);
		free(c);
		free(a_list);
		free(b_list);
		free(c_list);
	}

	ft_lstadd_back(&a_list, b_list);
	ft_lstadd_back(&a_list, c_list);
	
	t_list	*temp = a_list;
	while (temp)
	{
		printf("Print node content: %d\n", *(int*)temp->content);
		temp = temp->next;
	}
	ft_lstiter(a_list, iter_f);
	printf("\n");
	while (a_list)
	{
		printf("After applying function: %d\n", *(int*)a_list->content);
		a_list = a_list->next;
	}
	
}
static void	*lstmap_f(void	*content)
{
	int	*new_content = malloc(sizeof(size_t));
	if (!new_content)
		return (NULL);
	*new_content = *(int	*)content + 20;
	return(new_content);
}
void	test_ft_lstmap(void)
{
	int	*a = malloc(sizeof(int));
	int	*b = malloc(sizeof(int));
	int	*c = malloc(sizeof(int));
	
	printf("-> TEST FT_LSTMAP:\n");
	printf("\n");
	
	if (!a || !b || !c)
	{
		printf("content failed\n");
		printf("\n");
		free(a);
		free(b);
		free(c);
	}
	*a = 3;
	*b = 5;
	*c = 7;

	t_list	*a_list = ft_lstnew(a);
	t_list	*b_list = ft_lstnew(b);
	t_list	*c_list = ft_lstnew(c);
	if (!a_list || !b_list || !c_list)
	{
		printf("Node creation failed\n");
		printf("\n");
		free(a);
		free(b);
		free(c);
		free(a_list);
		free(b_list);
		free(c_list);
	}

	ft_lstadd_back(&a_list, b_list);
	ft_lstadd_back(&a_list, c_list);
	
	t_list	*temp = a_list;
	while (temp)
	{
		printf("Print node content: %d\n", *(int*)temp->content);
		temp = temp->next;
	}
	
	t_list	*newlst;
	newlst = ft_lstmap(a_list, lstmap_f, del_f);
	// ft_lstiter(a_list, lstmap_f);
	// printf("\n");
	while (newlst)
	{
		printf("After applying function: %d\n", *(int*)newlst->content);
		newlst = newlst->next;
	}
	ft_lstclear(&newlst, del_f);
	ft_lstclear(&a_list, del_f);
}
int main(void)
{
	// test_ft_isalpha();
	// test_ft_isdigit();
	// test_ft_isalnum();
	// test_ft_isascii();
	// test_ft_isprint();
	// test_ft_strlen();
	// test_ft_memset();
	// test_ft_bzero();
	test_ft_memcpy();
	// test_ft_memmove();
	// test_ft_strlcat();
	// test_ft_strlcpy();
	// test_ft_tolower();
	// test_ft_toupper();
	// test_ft_strchr();
	// test_ft_strrchr();
	// test_ft_strncmp();
	// test_ft_memchr();
	// test_ft_memcmp();
	// test_ft_strnstr();
	// test_ft_atoi();
	// test_ft_calloc();
	// test_ft_strdup();
	// test_ft_substr();
	// test_ft_strjoin();
	// test_ft_strtrim();
	// test_ft_split();
	// test_ft_itoa();
	// test_ft_strmapi();
	// test_ft_striteri();
	// test_ft_putchar_ft();
	// test_ft_putstr_fd();
	// test_ft_putnbr_fd();
	// test_ft_lstnew();
	// test_ft_lstsize();
	// test_ft_lstlast();
	// test_ft_lstadd_front();
	// test_ft_lstadd_back();
	// test_ft_lstdelone();
	// test_ft_lstclear();
	// test_ft_lstiter();
	return(0);
}