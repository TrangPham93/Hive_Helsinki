#include <unistd.h>

void ft_putnbr(int nb)
{
	// char c;
	if (nb > 9)
		ft_putnbr(nb / 10);
	// c = nb % 10 + '0';
	write(1, &(char){nb % 10 + '0'}, 1);
}

int main(int ac, char **av)
{
	// char param;

	(void)av;
	// if (ac <= 10)
	// 	param = ac - 1 + '0';
	// write(1, &param, 1);
	ft_putnbr(ac - 1);
	write(1, "\n", 1);
}