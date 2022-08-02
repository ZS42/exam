#include <unistd.h>

int main(int argc, char **argv)
{
	int j;

	j = 0;
	if (argc != 2)
		write (1, "a", 1);
	if (argc ==2)
	{
		while (argv[1][j])
		{	
			if (argv[1][j] == 'a')
			{
				write(1, "a", 1);
				break ;
			}
			j++;
		}
	}
	write(1,"\n", 1);
}					
