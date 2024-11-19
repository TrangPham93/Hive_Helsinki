#include "libft.h"
#include <string.h>
#include <limits.h>
#include <stdio.h>


void	test_ft_atoi(void)
{
	const char test1[] = "123";
	const char test2[] = "-123";
	const char test3[] = "+123";
	const char test4[] = "-2147483648";
	const char test5[] = "2147483647";
	const char test6[] = "123abc456";
	const char test7[] = "   \t\n  123";
	const char test8[] = "   +0";
	const char test9[] = "-0";
	const char test10[] = "a123";
	const char test11[] = "";
	const char *tests[] = {test1, test2, test3, test4, test5, test6, test7, test8, test9, test10, test11};
	int correct[] = {123, -123, 123, -2147483648, 2147483647, 123, 123, 0, 0, 0, 0};
	
	printf("➡️ Test cases for ft_atoi\n");

	for (int i = 0; i < 11; i++)
	{
		int result = ft_atoi(tests[i]);
		printf("Test %d: Input: \"%s\" | Expected: %d | Result: %d\n", i + 1, tests[i], correct[i], result);
		if (result == correct[i])
			printf("✅ Test %d passed\n", i + 1);
		else
			printf("❌ Test %d failed\n", i + 1);
	}
}

void	test_ft_bzero(void)
{
	char str[] = "abcdcde";
	char str2[] = "abcdcde";
	int c = 3;
 
 	printf("➡️ Test cases for ft_bzero\n");

	printf("String before original bzero: %c, %c, %c, %c, %c, %c \n", str[0], str[1], str[2], str[3], str[4], str[5]);
	bzero(str, c);
	printf("String after original bzero: %c, %c, %c, %c, %c, %c \n", str[0], str[1], str[2], str[3], str[4], str[5]);
	printf("String before my ft_bzero: %c, %c, %c, %c, %c, %c \n", str2[0], str2[1], str2[2], str2[3], str2[4], str2[5]);
	ft_bzero(str2, c);
	printf("String after my ft_bzero: %c, %c, %c, %c, %c, %c \n", str2[0], str2[1], str2[2], str2[3], str2[4], str2[5]);
}

void	test_ft_calloc(void)
{
	printf("➡️ Test cases for ft_calloc\n");

	int *arr = (int *)ft_calloc(10, sizeof(int));
    if (arr) {
        printf("✅ Test 1 Passed: Allocated 10 integers.\n");
        for (int i = 0; i < 10; i++) {
            if (arr[i] != 0) {
                printf("❌ Test 1 Failed: Memory not initialized to zero.\n");
                free(arr);
            }
        }
        printf("✅ Test 1 Memory initialized to zero: Passed\n");
    	free(arr);
    } else {
        printf("❌ Test 1 Failed: ft_calloc returned NULL.\n");
    }

	arr = (int *)calloc(2, INT_MAX + 1);
    if (arr == NULL) {
        printf("✅ Test 2 Passed: detected overflow and returned NULL.\n");
    } else {
        printf("❌ Test 2 Failed: Expected NULL but got a pointer.\n");
      free(arr);
    }
}


void	test_ft_isalnum(void)
{
	int test1 = '5';
	int test2 = 'F';
	int test3 = 'n';
	int test4 = '\n';

	int tests[] = {test1, test2, test3, test4};
	int correct[] = {1, 1, 1, 0};
	
	printf("➡️ Test cases for ft_isalnum\n");

	for (int i = 0; i < 4; i++)
		{
			int result = ft_isalnum(tests[i]);
			printf("Test %d: Input: \"%c\" | Expected: %d | Result: %d\n", i + 1, tests[i], correct[i], result);
		if (result == correct[i])
			printf("✅ Test %d passed\n", i + 1);
		else
			printf("❌ Test %d failed\n", i + 1);
	}
}

void	test_ft_isalpha(void)
{
	int test1 = '5';
	int test2 = 'F';
	int test3 = 'n';
	int test4 = '\n';

	int tests[] = {test1, test2, test3, test4};
	int correct[] = {0, 1, 1, 0};
	
	printf("➡️ Test cases for ft_isalpha\n");

	for (int i = 0; i < 4; i++)
		{
			int result = ft_isalpha(tests[i]);
			printf("Test %d: Input: \"%c\" | Expected: %d | Result: %d\n", i + 1, tests[i], correct[i], result);
		if (result == correct[i])
			printf("✅ Test %d passed\n", i + 1);
		else
			printf("❌ Test %d failed\n", i + 1);
	}

}

void	test_ft_isascii(void)
{
	int test1 = 0;
	int test2 = -127;
	int test3 = 'A';
	int test4 = 255;

	int tests[] = {test1, test2, test3, test4};
	int correct[] = {1, 0, 1, 0};
	
	printf("➡️ Test cases for ft_isascii\n");

	for (int i = 0; i < 4; i++)
		{
			int result = ft_isascii(tests[i]);
			printf("Test %d: Input: \"%c\" | Expected: %d | Result: %d\n", i + 1, tests[i], correct[i], result);
		if (result == correct[i])
			printf("✅ Test %d passed\n", i + 1);
		else
			printf("❌ Test %d failed\n", i + 1);
	}

}
void	test_ft_isprint(void)
{
	int test1 = 0;
	int test2 = -127;
	int test3 = 'A';
	int test4 = 255;

	int tests[] = {test1, test2, test3, test4};
	int correct[] = {1, 0, 1, 0};
	
	printf("➡️ Test cases for ft_isascii\n");

	for (int i = 0; i < 4; i++)
		{
			int result = ft_isprint(tests[i]);
			printf("Test %d: Input: \"%c\" | Expected: %d | Result: %d\n", i + 1, tests[i], correct[i], result);
		if (result == correct[i])
			printf("✅ Test %d passed\n", i + 1);
		else
			printf("❌ Test %d failed\n", i + 1);
	}

}

void	test_ft_isdigit(void)
{
	int test1 = '0';
	int test2 = '9';
	int test3 = 'A';
	int test4 = '2';

	int tests[] = {test1, test2, test3, test4};
	int correct[] = {1, 1, 0, 1};
	
	printf("➡️ Test cases for ft_isdigit\n");

	for (int i = 0; i < 4; i++)
		{
			int result = ft_isdigit(tests[i]);
			printf("Test %d: Input: \"%c\" | Expected: %d | Result: %d\n", i + 1, tests[i], correct[i], result);
		if (result == correct[i])
			printf("✅ Test %d passed\n", i + 1);
		else
			printf("❌ Test %d failed\n", i + 1);
	}
}

void test_ft_isprint(void)
{
	int test1 = 'H';
	int test2 = 30;
	int test3 = 105;
	int test4 = 129;

	int tests[] = {test1, test2, test3, test4};
	int correct[] = {1, 0, 1, 0};
	
	printf("➡️ Test cases for ft_isprint\n");

	for (int i = 0; i < 4; i++)
		{
			int result = ft_isprint(tests[i]);
			printf("Test %d: Input: \"%c\" | Expected: %d | Result: %d\n", i + 1, tests[i], correct[i], result);
		if (result == correct[i])
			printf("✅ Test %d passed\n", i + 1);
		else
			printf("❌ Test %d failed\n", i + 1);
	}
}

void	test_ft_itoa(void)
{
	int test1 = 0;
	int test2 = 1;
	int test3 = -1;
	int test4 = 123;
	int test5 = -123;
	int test6 = 1000;
	int test7 = 2147483647;
	int test8 = -2147483648;
	int tests[] = {test1, test2, test3, test4, test5, test6, test7, test8};
	const char *correct[] = {"0", "1", "-1", "123", "-123", "1000", "2147483647", "-2147483648"};
	
	printf("➡️ Test cases for ft_itoa\n");

	for (int i = 0; i < 8; i++)
	{
		char *result = ft_itoa(tests[i]);
		printf("Test %d: Input: \"%d\" | Expected: %s | Result: %s\n", i + 1, tests[i], correct[i], result);
		if (result != NULL && strcmp(result, correct[i]) == 0)
			printf("✅ Test %d passed\n", i + 1);
		else
			printf("❌ Test %d failed\n", i + 1);
		free (result);
	}
}

void	test_ft_memchr(void)
{
	char str[] = "Hello World!";
	char c = 'r';
	char c2 = 'A';
	size_t n = 10;
	size_t n2 = 0;
	
	printf("➡️ Test cases for ft_memchr\n");
	
	char *test1 = ft_memchr(str, c, n); 
	if (test1 != NULL)
		printf("✅ Test 1 Passed: Found '%c' at position %ld\n", c, test1 - str);
	else
		printf("❌ Test 1 Failed: Character '%c' not found\n", c);
	char *test2 = ft_memchr(str, c2, n); 
	if (test2 == NULL)
		printf("✅ Test 2 Passed: Character '%c' not found\n", c);
	else
		printf("❌ Test 2 Failed: Unexpectedly found '%c'\n", c);
	
	char *test3 = ft_memchr(str, c, n2); 
	if (test3 == NULL)
		printf("✅ Test 1 Passed: no search for zero n\n");
	else
		printf("❌ Test 1 Failed: Unexpectedly found '%c'\n", c);

}

void	test_ft_memcmp(void)
{
	const char str1[] = "Hello!";
	const char str2[] = "Hello World";
	const char str3[] = "World!";
	
	printf("➡️ Test cases for ft_memcmp\n");

	int test1 = ft_memcmp(str1, str2, 4);
	if (test1 == 0)
		printf("✅ Test 1 Passed: first 4 characters are the same\n");
	else
		printf("❌ Test 1 Failed: first 4 characters should be the same\n");
	int test2 = ft_memcmp(str1, str2, 6);
	if (test2 != 0)
		printf("✅ Test 2 Passed: first 6 characters are not the same\n");
	else
		printf("❌ Test 2 Failed: first 6 characters shouldn't be the same\n");
	int test3 = ft_memcmp(str1, str3, 1);
	if (test3 != 0)
		printf("✅ Test 3 Passed: strings are not the same\n");
	else
		printf("❌ Test 3 Failed: strings shoudn't be same\n");
}

void	test_ft_memcpy(void)
{
	char src[] = "Hello, World!";
    char dest[20] = "";

	printf("➡️ Test cases for ft_memcpy\n");

	ft_memcpy(dest, src, strlen(src));
	printf("Test 1: copy the whole src: %s\n", dest);

	char *null_dest = NULL;
    char *null_src = NULL;
    if (ft_memcpy(null_dest, null_src, 10) == NULL)
		printf("✅ Test 2 - NULL Dest and Src: Passed\n");
    else
		printf("❌ Test 2 - NULL Dest and Src: Failed\n");
}

void	test_ft_memmove(void)
{
	char src[] = "Hello, World!";
	char dest[50];

	printf("➡️ Test cases for ft_memmove\n");

	ft_memmove(dest, src, 14);
	printf("Test 1 - Basic move: %s\n", dest);

	char empty_buffer[10] = "Test";
	ft_memmove(empty_buffer, empty_buffer, 0);
	printf("Test 2 - Zero bytes: %s\n", empty_buffer); 
}

void	test_ft_memset(void) 
{
	char buffer1[35] = "";

	printf("➡️ Test cases for ft_memset\n");

	ft_memset(buffer1, 'A', 15);
	printf("Test 1: %s\n", buffer1);

	ft_memset(buffer1, '\0', 10);
	printf("Test 2: '%s'\n", buffer1); 

	char buffer2[10] = "Hello!";
	ft_memset(buffer2, 'Z', 0);
	printf("Test 3: %s\n", buffer2); 

}

void test_ft_putchar_fd(void)
{
	printf("➡️ Test cases for ft_putchar_fd\n");
	
	ft_putchar_fd('A', 1);
	ft_putchar_fd('\n', 1);
}

void test_ft_putendl_fd(void)
{
	printf("➡️ Test cases for ft_putendl_fd\n");
	
	ft_putendl_fd("- Is there a new line?", 1);
	ft_putendl_fd("- I hope so", 1);
}

void	test_ft_putnbr_fd(void)
{
	printf("➡️ Test cases for ft_putnbr_fd\n");
	ft_putnbr_fd(0, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(42, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(2147483647, 1);
	write(1, "\n", 1);
    ft_putnbr_fd(-2147483648, 1);
	write(1, "\n", 1);
}

void	test_ft_putstr_fd(void)
{
	printf("➡️ Test cases for ft_putstr_fd\n");
	ft_putstr_fd("Hello world\n", 1);
}

void test_ft_split(void) 
{
    char *test_cases[] = {"hello world test", "hello", ""};
    char delimiter = ' ';
    int num_cases = 3;
	printf("➡️ Test cases for ft_split\n");
    for (int i = 0; i < num_cases; i++) {
        printf("Test case %d: \"%s\"\n", i + 1, test_cases[i]);

        char **result = ft_split(test_cases[i], delimiter);
        if (result == NULL) {
            printf("Result is NULL\n");
        } else {
            int j = 0;
            while (result[j] != NULL) {
                printf("word[%d]: '%s'\n", j, result[j]);
                free(result[j]);
                j++;
            }
            free(result);
        }
        printf("\n");
    }
}

void	test_ft_strchr(void) 
{
	printf("➡️ Test cases for ft_strchr_fd\n");
	const char *str1 = "Hello, World!";
	char search1 = 'W';
	char *result1 = ft_strchr(str1, search1);
	printf("Test 1 - Expected: %s, Got: %s\n", "World!", result1);

	const char *str2 = "Hello, World!";
	char search2 = 'x';
	char *result2 = ft_strchr(str2, search2);
	printf("Test 2 - Expected: (null), Got: %s\n", result2);

	const char *str3 = "";
	char search3 = 'H';
	char *result3 = ft_strchr(str3, search3);
	printf("Test 3 - Expected: (null), Got: %s\n", result3);
}

void	test_ft_strdup(void)
{

	printf("➡️ Test cases for ft_strdup\n");
	const char *test_cases[] = {"Hello, world!", "", "1234567890", NULL};

	for (int i = 0; test_cases[i] != NULL; i++) 
	{
		char *dup = ft_strdup(test_cases[i]);
		if (dup == NULL) 
			printf("Test case %d: Memory allocation failed or NULL input\n", i + 1);
		else
		{
			printf("Test case %d: Original: \"%s\", Duplicated: \"%s\"\n", i + 1, test_cases[i], dup);
			if (strcmp(test_cases[i], dup) == 0) 
                printf("✅ Test %d passed\n", i + 1);
			else 
				printf("❌ Test %d failed\n", i + 1);
            		free(dup);
        	}
	}
}

void	to_uppercase(unsigned int i, char *c)
{
	(void) i;
	if (*c >= 'a' && *c <= 'z')
        *c -= 32;
}
void	test_ft_striteri(void)
{
	printf("➡️ Test cases for ft_striteri\n");
	char str[] = "hello world";
	printf("Original string: %s\n", str);
	ft_striteri(str, to_uppercase);
	printf("Modified string: %s\n", str);
}

void test_ft_strjoin(void)
{

	printf("➡️ Test cases for ft_strjoin\n");
    char *test1 = ft_strjoin("Hello ", "World!");
	char *test2 = ft_strjoin("", "World!");
	char *test3 = ft_strjoin("", "");
	char *test4 = ft_strjoin("123", "456");
	

	char *tests[] = {test1, test2, test3, test4};
	char *expected[] = {"Hello World!", "World!", "", "123456"};

	for (int i = 0; i < 4; i++)
	{
		if (tests[i] != NULL && strcmp(tests[i], expected[i]) == 0)
			printf("✅ Test %d passed\n", i + 1);
		else
			printf("❌ Test %d failed\n", i + 1);
		free(tests[i]);
	}
}
void test_ft_strlcat(void)
{

	printf("➡️ Test cases for ft_strlcat\n");
    char dest[20];
    const char *src;
    size_t size;
    size_t result;

    strcpy(dest, "Hello");
    src = " World";
    size = 20;
    result = ft_strlcat(dest, src, size);
    printf("Test 1: %s, Expected: Hello World, Result Length: %zu, Expected Length: %zu\n", dest, result, ft_strlen("Hello World"));

    strcpy(dest, "Hello");
    src = " World";
    size = 10;  // Smaller than length of dest + src
    result = ft_strlcat(dest, src, size);
    printf("Test 2: %s, Expected: Hello Wor, Result Length: %zu, Expected Length: %zu\n", dest, result, ft_strlen("Hello") + ft_strlen(" World"));

    strcpy(dest, "Hello");
    src = " World";
    size = 0;
    result = ft_strlcat(dest, src, size);
    printf("Test 3: %s, Expected: Hello, Result Length: %zu, Expected Length: %zu\n", dest, result, ft_strlen(" World"));
}

void test_ft_strlcpy(void)
{

	printf("➡️ Test cases for ft_strlcpy\n");
    char dest[100];
    size_t result;

    const char *src1 = "Hello, World!";
    result = ft_strlcpy(dest, src1, sizeof(dest));
    printf("Test Case 1:\n");
    printf("Source: '%s', Destination: '%s', Length returned: %zu\n", src1, dest, result);

    const char *src2 = "Hello";
    result = ft_strlcpy(dest, src2, 6); 
    printf("\nTest Case 2:\n");
    printf("Source: '%s', Destination: '%s', Length returned: %zu\n", src2, dest, result);

    const char *src3 = "Hello, World!";
    result = ft_strlcpy(dest, src3, 6); 
    printf("\nTest Case 3:\n");
    printf("Source: '%s', Destination: '%s', Length returned: %zu\n", src3, dest, result);

}
void test_ft_strlen()
{
	printf("➡️ Test cases for ft_strlen\n");

    const char *tests[] = {"", "Hello", "Test with newline\n", "Special chars !@#$^&*", NULL};

    // Expected results corresponding to the test cases
    size_t expected[] = {0, 5, 18, 21};

    for (int i = 0; tests[i] != NULL; i++)
    {
        size_t result = ft_strlen(tests[i]);
        if (result == expected[i])
        {
            printf("✅ Test passed for input \"%s\": expected %zu, got %zu\n", tests[i], expected[i], result);
        }
        else
        {
            printf("❌ Test failed for input \"%s\": expected %zu, got %zu\n", tests[i], expected[i], result);
        }
    }
}
char example_function(unsigned int index, char c) {
    return (c + index);
}

void test_ft_strmapi(void)
{
	printf("➡️ Test cases for ft_strmapi\n");
	const char *input = "abcdef";
    char *result = ft_strmapi(input, example_function);
    
    if (result) {
        printf("Original: %s\n", input);
        printf("✅ Transformed: %s\n", result);
        free(result); 
    } else {
        printf("❌ Failed to allocate memory for the result.\n");
    }
}
void test_ft_strncmp(void) 
{

	printf("➡️ Test cases for ft_strncmp\n");

    const char *tests[][3] = 
	{
        {"abc", "abc", "3"},
        {"abc", "abcd", "3"},
        {"abc", "abx", "3"},
        {"abc", "", "3"},
    };

    for (int i = 0; i < 4; i++) {
        const char *s1 = tests[i][0];
        const char *s2 = tests[i][1];
        size_t n = atoi(tests[i][2]);

        int result = ft_strncmp(s1, s2, n);
        int expected = strncmp(s1, s2, n);

        printf("Test %d: ft_strncmp(\"%s\", \"%s\", %zu) = %d, strncmp = %d\n", i + 1, s1, s2, n, result, expected);
    }
}

void test_ft_strnstr(void)
{

	printf("➡️ Test cases for ft_strnstr\n");
	char *result;
    result = ft_strnstr("Hello, world!", "world", 13);
    if (result) 
        printf("Test 1: %s\n", result);
    else 
        printf("Test 1: NULL\n");

    result = ft_strnstr("Hello, world!", "Goodbye", 13);
    if (result) 
        printf("Test 2: %s\n", result);
    else 
        printf("Test 2: NULL. Needle not found\n");


    result = ft_strnstr("Hello, world!", "Hello", 13);
    if (result) 
        printf("Test 3: %s\n", result);
	else 
        printf("Test 3: NULL\n");

    result = ft_strnstr("Hello, world!", "", 13);
    if (result) 
        printf("Test 4: %s\n", result);
	else 
        printf("Test 4: NULL\n");
}

void test_ft_strrchr() {

	printf("➡️ Test cases for ft_strrchr\n");
    const char *str1 = "Hello World";
    const char *str2 = "abcabcabc2";
    
    char *result;

    result = ft_strrchr(str1, 'o');
    printf("Test 1 - Expected: %s, Got: %s\n", strrchr(str1, 'o'), result);
    
    result = ft_strrchr(str1, 'z');
    printf("Test 2 - Expected: %p, Got: %p\n", strrchr(str1, 'z'), result);

    result = ft_strrchr(str2, 'a');
    printf("Test 3 - Expected: %s, Got: %s\n", strrchr(str2, 'a'), result);
}

void test_ft_strtrim(void) 
{
    char *result;
	printf("➡️ Test cases for ft_strtrim\n");
    result = ft_strtrim("!!Hello World!!", "!");
    printf("Input: \"!!Hello World!!\", Set: \"!\"\n");
    printf("Result: \"%s\"\n", result);
    if (result && strcmp(result, "Hello World") == 0) {
        printf("✅ PASS\n");
    } else {
        printf("❌ FAIL (Expected: \"Hello World\")\n");
    }
    free(result);
}

void test_ft_substr(void) 
{

	printf("➡️ Test cases for ft_substr\n");
    char *result;

    result = ft_substr("Hello, World!", 7, 5);
    printf("Test 1: %s\n", result);
    free(result);

    result = ft_substr("Hello, World!", 15, 5);
    printf("Test 2: '%s'\n", result);
    free(result);

    result = ft_substr("Hello, World!", 0, 0);
    printf("Test 3: '%s'\n", result);
    free(result);

}

void test_ft_tolower() 
{
	printf("➡️ Test cases for ft_tolower\n");
	printf("ft_tolower('A') = '%c' (Expected: 'a')\n", ft_tolower('A'));
    printf("ft_tolower('a') = '%c' (Expected: 'a')\n", ft_tolower('a'));
    printf("ft_tolower('1') = '%c' (Expected: '1')\n", ft_tolower('1'));
    printf("ft_tolower('@') = '%c' (Expected: '@')\n", ft_tolower('@'));
	
}

void test_ft_toupper() 
{
	printf("➡️ Test cases for ft_toupper\n");
	printf("ft_toupper('A') = '%c' (Expected: 'A')\n", ft_toupper('A'));
    printf("ft_toupper('a') = '%c' (Expected: 'A')\n", ft_toupper('a'));
    printf("ft_toupper('1') = '%c' (Expected: '1')\n", ft_toupper('1'));
    printf("ft_toupper('@') = '%c' (Expected: '@')\n", ft_toupper('@'));
	
}

int main(void)
{
	test_ft_atoi();
	
	test_ft_calloc();
	test_ft_isalnum();
	test_ft_isalpha();
	test_ft_isascii();
	test_ft_isdigit();
	test_ft_isprint();
	test_ft_itoa();
	test_ft_memchr();
	test_ft_memcmp();
	test_ft_memcpy();
	test_ft_memmove();
	test_ft_memset();
	test_ft_putchar_fd();
	test_ft_putendl_fd();
	test_ft_putnbr_fd();
	test_ft_putstr_fd();
	test_ft_split();
	test_ft_strchr();
	test_ft_strdup();
	test_ft_striteri();
	test_ft_strjoin();
	test_ft_strlcat();
	test_ft_strlcpy();
	test_ft_strlen();
	test_ft_strmapi();
	test_ft_strncmp();
	test_ft_strnstr();
	test_ft_strrchr();
	test_ft_strtrim();
	test_ft_substr();
	test_ft_tolower();
	test_ft_toupper();
	return(0);
}
