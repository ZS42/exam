#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int index;
	int	i;

	i = 0;
	index = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >='A' && argv[1][i] <= 'Z')
				index = argv[1][i] - 'A' + 1;
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				index = argv[1][i] - 'a' + 1;
			printf ("%d", index);
			while (index > 0)
			{
				write(1, &argv[1][i], 1);
				index--;
			}
			index = 1;
			i++;
		}
	}
	write (1, "\n", 1);
}
