#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	return(octet >> 4 | octet << 4);
}

int main()
{
	printf("%d", swap_bits(20));
}

// example 1
// 0000 0010 (2)
// >> 4    0010 0000
// << 4    0000 0000
// |       0010 0000 (32)

// example 2
// 0100 0001 (65)
// >> 4    0001 0000
// << 4    0000 0100
// |       0001 0100 (20)