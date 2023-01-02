#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	k;
	int	l;

	j = 0;
	k = 0;
	if (ac == 3)
	{
		i = 0;
		while (av[1][i])
		{
			while (av[2][j])
			{
				if (av[1][i] == av[2][j])
				{
					k++;
					break ;
				}
				j++;
			}
			i++;
		}
		l = ft_strlen(av[1]);
		// printf(" %d and %d\n", k, l);
		i = 0;
		if (k == l)
			write (1, &av[1][i], ft_strlen(av[1]));
	}
	write (1, "\n", 1);
}