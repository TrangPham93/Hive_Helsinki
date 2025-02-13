int	    is_power_of_2(unsigned int n)
{
	unsigned int	a;

	a = 1;
	while (a <= n)
	{
		if (a == n)
			return (1);
		a *= 2;
	}
	return (0);
}
#include <stdio.h>
int main()
{
	printf("%d\n", is_power_of_2(16));
}