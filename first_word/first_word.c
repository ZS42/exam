#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	while (argc == 2)
	{
	 	if ( argv[1][i] == 32 || argv[1][i] == '\t')
		{ 
			i++;
		}
		while (argv[1][i] !='\t' || argv[1][i] != 32)
		{
			write(1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
}
