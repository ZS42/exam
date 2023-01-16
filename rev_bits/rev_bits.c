#include <unistd.h>

void	rev_bits(unsigned char octet)
{
	int	bits;
	int	i;

	bits = 8;
	i = 0;
	while (i < 8)
	{
		if (octet & 128 >> i)
			write(1, "0", 1);
		else
			write (1, "1", 1);
		bits--;
		i++;
	}
}

int	main()
{
	rev_bits(65);
	write (1, "\n", 1);
	rev_bits('H');
	return (0);
}
