unsigned char	swap_bits(unsigned char octet)
{
	unsigned char left;
	unsigned char right;

	left = octet << 4;
	right = octet >> 4;
	return (left | right);
}
#include <stdio.h>

int main()
{
	printf("%#x\n", swap_bits(0x41));
}