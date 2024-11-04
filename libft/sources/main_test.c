#include <stdio.h>
#include <string.h>
#include "libft.h"

/* remember to compile header file and function file together
gcc main_test.c ft_strlen.c -o test_program
-o place the primary output in a file calle test_program
 */

int	main(void)
{
	printf("%d\n", ft_strlen("visao laithe"));
	printf("%d\n", strlen("Visao laithe"));
	return (0);
}