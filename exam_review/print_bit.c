#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i;

	i = 7;
	while (i >= 0)
	{
		if ((octet & (1 << i)) == 0)
			write(1, "0", 1);
		else
			write(1, "1", 1);
		i--;
	}
}

int main()
{
	print_bits(128);
}