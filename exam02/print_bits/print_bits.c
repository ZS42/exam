// use 128 for printing  and 1 for printing reverse
//  need to use 2 ints. Not sure why.

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	bits;
	int	i;

	bits = 8;
	i = 0;
	while (i < 8)
	{
		if (octet & 128 >> i)
			write(1, "1", 1);
		else
			write (1, "0", 1);
		bits--;
		i++;
	}
}

int	main()
{
	print_bits(2);
	write (1, "\n", 1);
	print_bits('H');
	return (0);
}
