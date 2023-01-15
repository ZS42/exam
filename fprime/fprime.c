#include <stdio.h>
#include <stdlib.h>

int	ft_is_prime(int a)
{
	int	i;

	i = 2;
	while (i < a)
	{
		if (a % i == 0)
			return (1);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	a;
	int	i;

	if (ac == 2)
	{
		a = atoi(av[1]);
		i = 2;
		if (a == 1)
			printf("1");
		while (i <= a)
		{
			if (ft_is_prime(i) == 0 && (a % i == 0))
			{
				printf("%d", i);
				if (i < a)
					printf("*");
				a = a / i;
			}
			// why else?
			else
				i++;
		}
	}
	printf("\n");
}