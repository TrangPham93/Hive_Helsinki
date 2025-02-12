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
/*
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

char    *ft_strrev(char *str)
{
	char *dup;
	int i;
	int len;

	if (!str)
		return (NULL);
	i = 0;
	len = ft_len(str) - 1;
	dup = ft_strdup(str);
	if (!dup)
		return (NULL);
	while (len >= 0)
	{
		str[i] = dup[len];
		len--;
		i++;
	}
	free(dup);
	return (str);
	
}
*/

char    *ft_strrev(char *str)
{
	char	temp;
	int	i;
	int len;

	len = ft_len(str);
	i = 0;
	while (i <= len/2)
	{
		temp = str[i];
		str[i] = str[len - 1];
		str[len - 1] = temp;
		len--;
		i++;
	}
	return (str);
}

int main(int ac, char **av)
{
	// char str[] = "hoa";
	
	if (ac == 2)
	{
		printf("%s\n" , ft_strrev(av[1]));

	}
		// printf("%s\n" , ft_strpbrk(av[1], av[2]));
	
}
