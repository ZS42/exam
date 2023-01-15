#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int a;
	int b;
	int pgcd;

	if (ac == 3)
	{
		a = atoi(av[1]);
		b = atoi(av[2]);
		if (a < b)
				pgcd = a;
		else
			pgcd = b;
		while (pgcd > 0)
		{
			if (a % pgcd == 0 && b % pgcd == 0)
				break ;
			--pgcd;
		}
		printf("%i", pgcd);
	}
	printf("\n");
}
