#include <unistd.h>

int is_prime(int nb)
{
	int i;

	i = 2;
	if (nb == 1)
		return (1);
	while (i < nb)
	{
		if (nb % i == 0)
			return (1);	
		i++;
	}
	return (0);
}
void putnbr(int nb)
{
	char c;

	if (nb > 9)
		putnbr(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}
int ft_atoi(char *s)
{
	int nb = 0;

	while (*s && *s >= '0' && *s <= '9')
	{
		nb = nb * 10 + (*s - '0') ;
		s++;
	}
	return (nb);
}

int main(int ac, char **av)
{
	int nb;
	int sum;

	if (ac == 2 )
	{
		nb = 0;
		sum = 0;
		while (nb <= ft_atoi(av[1]))
		{
			if (is_prime(nb) == 0)
				sum += nb;
			nb++;
		}
		putnbr(sum);
	}
	else
	{
		write(1, "0", 1);
	}
	write(1, "\n", 1);
}


