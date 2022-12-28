#include <unistd.h>

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		write (1, "-", 1);
		ft_putnbr(-nbr);
	}
	else if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
	{
		nbr = nbr % 10 + '0';
		write (1, &nbr, 1);
	}
}

int	main(int ac, char **av)
{
	int a;

	(void)av;
	if (ac > 1)
	{
		a = ac - 1;
		ft_putnbr(a);
	}
	write (1, "\n", 1);
}
