#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char ** av)
{
	int		a;
	int		b;
	int		result;

	result = 0;
	if (ac == 4)
	{
		a = atoi(av[1]);
		b = atoi(av[3]);
		if (av[2][0] == '+')
			result = a + b;
		else if (av[2][0] == '-')
			result = a - b;
		else if (av[2][0] == '*')
			result = a * b;
		else if (av[2][0] == '/')
			result = a / b;
		else if (av[2][0] == '%')
			result = a % b;
		printf("%d\n", result);
	}
}