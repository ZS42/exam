#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	while (ac > 1)
	{
		i = 1;
		j = 0;
		while (i < ac)
		{
			while (av[i][j] != '\0')
			{
				if ((av[i][j] >= 'A' && av[i][j] <= 'Z') || (av[i][j] >= 'a' && av[i][j] <= 'z'))
				{
					if ((av[i][j + 1] == ' ' || av[i][j + 1] == '\0') &&
					(av[i][j] >= 'A' && av[i][j] <= 'Z'))
						av[i][j] += 32;
					else if ((av[i][j + 1] == ' ' || av[i][j + 1] == '\0') &&
					(av[i][j] >= 'a' && av[i][j] <= 'z'))
						av[i][j] -=32;
					write(1, &av[i][j], 1);
				}
				j++;
			}
			write (1, "\n", 1);
			i++;
		}
	}
	if (ac == 1)
		write (1, "\n", 1);
}
