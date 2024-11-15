/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:08:01 by trpham            #+#    #+#             */
/*   Updated: 2024/11/15 11:18:05 by trpham           ###   ########.fr       */
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
	printf("Before strchr     : %s\n", s);
	printf("After ft_strchr l : %s\n", ft_strrchr(s, 'l'));
	printf("After strchr l    : %s\n", strrchr(s, 'l'));
	printf("\n");
	printf("Before strchr     : %s\n", s);
	printf("After ft_strchr z : %s\n", ft_strrchr(s, 'z'));
	printf("After strchr z    : %s\n", strrchr(s, 'z'));
	printf("\n");
	printf("Before strchr 	     : %s\n", s);
	printf("After ft_strchr  null: %s\n", ft_strrchr(s, '\0'));
	printf("After strchr  null   : %s\n", strrchr(s, '\0'));
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
	char	*s3 = "how ";
	char	*s4 = "howare";
	printf("strncmp    :%d\n", strncmp(s3, s4, 4));
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
	char	*s2 = "ho";
	char	*result;
	
	printf("-> TEST STRNSTR:\n");
	printf("\n");
	result = ft_strnstr(s1, s2, 7);
	printf("NOhowb | ho | 7 : %s\n", result ? result : "null");
	printf("\n");

	result = ft_strnstr(s1, s2, 5);
	printf("NOhowb | ho | 5 :%s\n", result ? result : "null");
	printf("\n");

	result = ft_strnstr(s1, s2, 0);
	printf("NOhowb | ho | 3 : %s\n", result ? result : "null");
	printf("\n");

	char	*s3 = "how ";
	char	*s4 = "";

	result = ft_strnstr(s3, s4, 3);
	printf("how | '' | 3 : %s\n", result ? result : "null");
	printf("\n");

	char	*s5 = "hoa";
	char	*s6 = "hoan";

	result = ft_strnstr(s5, s6, 2);
	printf("hoa | hoan | 2 : %s\n", result ? result : "null");
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
	a = ft_substr(s, 3, 4);
	char	*s1 = "";
	char	*a1;
	a1 = ft_substr(s1, 1, 0);
	char	*s2 = "one";
	char	*a2;
	a2 = ft_substr(s2, 7, 4);
	
	printf("-> TEST SUBSTR:\n");
	printf("\n");

	printf("Str 'one two' | start = 3 | len = 4 : %s\n", a ? a : "null");
	printf("\n");
	printf("Str '' | start = 1 | len = 0 : %s\n", a1 ? a1 : "null");
	printf("\n");
	printf("Str 'one' | start = 7 | len = 4 : %s\n", a2 ? a2 : "null");
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

	char	*s3 = "";
	char	*s4 = "tow";

	printf("-> TEST STRJOIN:\n");
	printf("\n");

	s = ft_strjoin(s1, s2);
	printf("Join s1 = one | s2 = two : %s\n", s ? s : "null");
	free(s);
	s = ft_strjoin(s3, s4);
	printf("Join s1 = '' | s2 = tow : %s\n", s ? s : "null");
	free(s);
	printf("\n");
}

void	test_ft_strtrim(void)
{
	char	*s1 = "bacHellocb";
	char	*s2 = "abc";
	char	*s3 = "baccb";
	char	*s4 = "abc";
	char	*s5 = "";
	char	*s6 = "abc";
	char	*a;

	printf("-> TEST STRTRIM:\n");
	printf("\n");

	a = ft_strtrim(s1, s2);
	printf("'bacHellocb' | 'abc' 	: %s\n", a ? a : "null");
	printf("\n");
	free(a);
	a = ft_strtrim(s3, s4);
	printf("'baccb' | 'abc' 	: %s\n", a ? a : "null");
	printf("\n");
	free(a);
	a = ft_strtrim(s5, s6);
	printf("'' | 'abc' 		: %s\n", a ? a : "null");
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
		printf("%d\n", *(int *)current->content);
		current = current->next;
		printf("\n");
	}
	free(a_list);
	free(b_list);

} 
void	test_ft_lstsize(void)
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
		printf("%d\n", *(int *)current->content); // print only the last content
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
		printf("%d\n", *(int *)current->content);
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
		printf("%d\n", *(int *)current->content);
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
		printf("%d\n", *(int *)a_list->content);
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
		printf("%d\n", *(int *)temp->content);
		temp = temp->next;
	}

	ft_lstclear(&a_list, del_f);
	if (!a_list)
		printf("list is empty\n");
	else
		printf("list is not empty\n");
	printf("\n");

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
	test_ft_memcmp();
	test_ft_strnstr();
	test_ft_atoi();
	test_ft_calloc();
	test_ft_strdup();
	test_ft_substr();
	test_ft_strjoin();
	test_ft_strtrim();
	test_ft_split();
	test_ft_itoa();
	test_ft_strmapi();
	test_ft_striteri();
	test_ft_putchar_ft();
	test_ft_putstr_fd();
	test_ft_putnbr_fd();
	test_ft_lstnew();
	test_ft_lstsize();
	// test_ft_lstlast();
	test_ft_lstadd_front();
	test_ft_lstadd_back();
	test_ft_lstdelone();
	test_ft_lstclear();
	return(0);
}