#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	int in_word = 0;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] != ' ' && av[1][i] != '\t')
			{
				write(1, &av[1][i], 1);
				in_word = 1;
			}
			else
			{
				if (in_word == 1 && av[1][i + 1] != '\0' && av[1][i + 1] != ' ' && av[1][i + 1] != '\t')
				{
					write(1, " ", 1);
					in_word = 0;
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
