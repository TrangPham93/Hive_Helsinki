unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char reverse;

	reverse = 0;
	while (octet > 0)
	{
		reverse = reverse << 1;
		if ((octet & 1) == 1)
			reverse = reverse ^ 1;
		octet = octet >> 1;
	}
	return (reverse);
}
#include <stdio.h>

int main()
{
	printf("%d\n", reverse_bits(11));
}