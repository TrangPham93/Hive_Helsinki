#include <unistd.h>

int is_prime(int nb)
{
	int i;

	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (1);	
		i++;
	}
	return (0);
}
int putnbr(int nb)
{
	char c;

	if (nb > 9)
		putnbr(nb / 10);
	c = nb % 10 - '0';
	write(1, &c, 1);
}
int atoi(char *s)
{
	
}

int main(int ac, char **av)
{
	int nb;
	int sum;

	if (ac == 2 )
	{
		if (*av[1] == '1')
			sum = 1;
		else if (*av[1] == '2')
			sum = 3;
		else
		{
			nb = 3;
			sum = 3;
			while (nb <= av[1])
			{
				if (is_prime(nb) == 0)
					sum += nb;
				nb++;
			}
		}
	putnbr(sum);
	}
	else
	{
		write(1, "0", 1);
		write(1, "\n", 1);
	}
}


