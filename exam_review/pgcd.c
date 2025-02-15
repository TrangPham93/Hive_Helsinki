#include <stdio.h>
#include <stdlib.h>



int main(int ac, char **av)
{
	// int a;
	int min;

	// a = 1;
	if (ac == 3)
	{
		if (atoi(av[1]) <= atoi(av[2]))
			min = atoi(av[1]);
		else
			min = atoi(av[2]);
		while (min > 0)
		{
			if (atoi(av[1]) % min == 0 && atoi(av[2]) % min == 0)
				break;
			min--;
		}
		printf("%d", min);
	}
	printf("\n");
}