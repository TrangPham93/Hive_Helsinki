unsigned int    lcm(unsigned int a, unsigned int b)
{
	int hcf;
	int abs;

	if (a == 0 || b == 0)
		return (0);
	if (a <= b)
		hcf = a;
	else
		hcf = b;
	while (hcf > 0)
	{
		if (a % hcf == 0 && b % hcf == 0)
			break;
		hcf--;
	}
	if (a * b > 0)
		abs = a * b;
	else
		abs = -(a * b);
	return (abs / hcf);
}
#include <stdio.h>

int main()
{
	
	printf("%u\n", lcm(0, 10));	
}