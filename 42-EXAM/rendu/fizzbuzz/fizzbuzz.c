#include <unistd.h>


void	writenumber(char i)
{
	if (i >= 10)
	{
		writenumber(i / 10);
		writenumber(i % 10);
	}
	else
	{
		i = i + '0';
		write(1, &i, 1);
	}
}
int	main()
{
	int i;

	i = '0';
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz\n", 9);
		else if (i % 3 == 0 )
			write (1, "fizz\n", 5);
		else if (i % 5 == 0)
			write (1, "buzz\n", 5);
		else
		{
			writenumber(i);
			write (1, "\n", 1);
		}
		i++;
	}
}

