# include <unistd.h>
int	main(int argc, char	**argv)
{
	int i;

	i = 0;
	if (argc == 1)
		write (1, "a\n", 2);
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == 'a')
			{
				write (1, "a\n", 2);
			}
			i++;
		}
	}
	write (1, "\n", 1);
}	



