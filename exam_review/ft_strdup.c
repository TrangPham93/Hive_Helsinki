#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	ft_len(char *s)
{
	int i;

	i = 0;
	while (*s)
	{
		s++;
		i++;
	}
	return (i);
}

char    *ft_strdup(char *src)
{
	char	*dup;
	int i;

	if (!src)
		return (NULL);
	dup = malloc( sizeof(char) * (ft_len(src) + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int main(int ac, char **av)
{
	char *result;

	if (ac == 2)
	{
		result = ft_strdup(av[1]);
		// printf("%d\n", ft_len(av[1]));
		printf("%s\n" , result);
		free(result);
		// printf("%ld\n" , strdup(av[1]));
	}
}