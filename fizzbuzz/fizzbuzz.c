# include <unistd.h>
# include <stdio.h>
void	ft_write_number(int i)
{
	if (i > 9)
	{
		ft_write_number(i / 10);
		ft_write_number(i % 10);
	}
	else
	{
		i = i + '0';
		write (1, &i, 1);
	}
}
int	main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write (1, "fizzbuzz\n", 10);
		else if (i % 3 == 0)
			write (1, "fizz\n", 6);
		else if (i % 5 == 0)
			write (1, "buzz\n", 6);
		else
		{
		// if (i < 9)
			//write(1, &"0123456789"[i%10], 1);
		// {
		// 	write (1, &i, 1);
		// 	write(1,"\n", 1);
		// }
		// else
		// {
		// 	i = i / 10;
		// }
			ft_write_number(i);
			write(1,"\n", 1);
		}
		i++;
	}
}

