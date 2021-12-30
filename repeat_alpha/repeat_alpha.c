#include <unistd.h>

int		main(int argc, char ** argv)
{
	int repeat;
	int index;
	int letter;

	index = 0;
	while (argv[1][index] != '\0')
	{
		letter = argv[1][index];
		if (letter >= 'A' && letter <='Z')
			repeat = letter - 'A' + 1;
		else if(letter >= 'a' && letter <='z')
		   repeat = letter - 'a' + 1;	
        else
			repeat = 1;
			while (repeat > 0)
			{
				write(1, &argv[1][index], 1);
				repeat--;
			}	
			index++;
	}
	write(1, "\n", 1);
}
