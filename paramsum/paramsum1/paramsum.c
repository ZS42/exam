#include <unistd.h>

void ft_putnbr(int a)
{
	char c;

	if (a > 9)
	{
		ft_putnbr(a / 10);
		ft_putnbr(a % 10);
	}
	else
	{
		c = a + '0';
		write (1, &c, 1);
	}
}

int	main (int ac, char ** av)
{
	int a;

	(void)av;
	if (ac < 2)
		write(1, "0\n", 2);
	else
	{
		a = ac - 1;
		ft_putnbr(a);
		write (1, "\n", 1);
	}
}
