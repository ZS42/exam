#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	int				temp;

	i = 0;
	j = 1;
	while (i < size)
	{
		j = 1;
		while (j < size)
		{
			// printf("hi");
			if (tab[j - 1] > tab[j])
			{
				temp = tab[j - 1];
				tab[j - 1] = tab[j];
				tab[j] = temp;
				// printf("%d   %d\n", tab[j - 1], tab[j]);
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	int	size;
	int	i;

	int	tab[]= {9, 7, 5, 1, 3, 2};
	size = 6;
	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	sort_int_tab(tab, size);
	printf("\nafter\n");
	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}
