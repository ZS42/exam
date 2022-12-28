#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int	*tab;
	int size;
	int i;

	i = 0;
	size = 0;
	if (start > end)
	{
		size = start - end + 1;
		tab = (int *)malloc(sizeof(int) * size + 1);
		if (!tab)
			return (NULL);
		while (size > 0)
		{
			tab[i] = start;
			i++;
			start--;
			size--;
		}
		return(tab);
	}
	if (end > start)
		size = end - start + 1;
	tab = (int *)malloc(sizeof(int) * size );
	if (!tab)
		return (NULL);
	i = 0;
	while (size > 0)
	{
		tab[i] = start;
		i++;
		start++;
		size--;
	}
	return(tab);
}

int main()
{
	int i;
	int *ptr;

	i = 0;
	ptr = ft_range(0, -3);
	while (i <= 3)
	{
		printf("%d\n", ptr[i]);
		i++;
	}
}