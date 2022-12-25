#include <unistd.h>

int	check(char **av, int i)
{
	int	k;

	k = 0;
	while (i > k)
	{
		if (av[1][k] == av[1][i])
			return (0);
		k++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac == 3)
	{
		i = 0;
		while (av[1][i])
		{
			j = 0;
			while (av[2][j])
			{
				if (av[1][i] == av[2][j] && check (av, i) == 1)
				{
					write (1, &av[1][i], 1);
					break ;
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
