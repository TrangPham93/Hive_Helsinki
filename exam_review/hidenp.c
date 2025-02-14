#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int len = 0;

	if (ac == 3)
	{
		while (av[1][len])
			len++;
		
		while (av[1][i] && av[2][j])
		{
			if (av[1][i] == av[2][j])
				i++;
			j++;
			// printf("i = %d\n", i);
			// printf("j = %d\n", i);
		}
		if (i == len)
		{
			// printf("found %d\n", i);
			write(1, "1", 1);
		}
		else
		{
			// printf("not found %d\n", i);
			write(1, "0", 1);
		}
	}
	write(1, "\n", 1);
}