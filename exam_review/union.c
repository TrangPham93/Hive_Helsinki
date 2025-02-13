
#include <unistd.h>

int in_str(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;	
	}
	return (0);
}

int main(int ac, char **av)
{
	char s[256] = {0};
	int i;
	int j;

	i = 0;
	j = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			if (in_str(s, av[1][i]) == 0)
				s[j++] = av[1][i];
			i++;
		}
		i = 0;
		while (av[2][i])
		{
			if (in_str(s, av[2][i]) == 0)
				s[j++] = av[2][i];
			i++;
		}
		i = 0;
		while (i < j)
			write(1, &s[i++], 1);
	}
	write(1, "\n", 1);
}
