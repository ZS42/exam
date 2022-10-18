# include <unistd.h>
# include <stdio.h>


void	ft_write_number(int i)
{
	if (i < 9)
	{
		char c = (i % 10) + '0';
		write(1, "1", 1);
	}
	else
	{
		char c2 = (i / 10) + '0';
		write(1, &c2, 1);
		char c1 = (i % 10) + '0';
		write(1, &c1, 1);
	}
}

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write (1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write (1, "fizz", 4);
		else if (i % 5 == 0)
			write (1, "buzz", 4);
		else
			ft_write_number(i);
		write(1, "\n", 1);
		i++;
	}
}
