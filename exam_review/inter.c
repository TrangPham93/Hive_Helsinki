#include <unistd.h>

int in_str(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (0);
		s++;
	}
	return (-1);
}

int main(int ac, char *av[])
{
	int i;
	int j;

	i = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			j = i - 1;
			while (j >= 0)
			{
				if (av[1][j] == av[1][i])
					break;
				j--;
			}
			if (in_str(av[2], av[1][i]) == 0 && j < 0)
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}