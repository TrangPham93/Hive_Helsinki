#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int in_s(const char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (0);
		s++;
	}
	return (-1);
}

char	*ft_strpbrk(const char *s1, const char *s2)
{
	while (*s1)
	{
		if (in_s(s2, *s1) == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}

int main(int ac, char **av)
{
	if (ac ==3)
	{
		printf("%s\n" , strpbrk(av[1], av[2]));
		printf("%s\n" , ft_strpbrk(av[1], av[2]));
	}
}