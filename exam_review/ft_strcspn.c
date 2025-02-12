#include <stdlib.h>
#include <string.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i;
	int j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] != reject[j])
				j++;
			else
				return (i);
		}
		i++;
	}
	return (i);
}


int main(int ac, char **av)
{
	if (ac ==3)
	{
		printf("%ld\n" , ft_strcspn(av[1], av[2]));
		printf("%ld\n" , strcspn(av[1], av[2]));
	}
}