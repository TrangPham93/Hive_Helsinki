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

size_t	ft_strspn(const char *s, const char *accept)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (in_s(accept, s[i]) == -1)
			return (i);
		i++;
	}
	return (i);

}
int main(int ac, char **av)
{
	if (ac ==3)
	{
		printf("%ld\n" , ft_strspn(av[1], av[2]));
		printf("%ld\n" , strspn(av[1], av[2]));
	}
}