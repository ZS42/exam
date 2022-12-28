#include <stdio.h>
#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int *tab;
	int i;
	int size;

	i = 0;
	size = 0;
	if (start > end)
	{
		size = start - end + 1;
		printf("start > end %d %d %d\n", start, end, size);
		tab = (int *)malloc(sizeof(int) * size);
		if (!tab)
			return (NULL);
		while (size > 0)
		{
			tab[i] = end;
			i++;
			size--;
			end++;
		}
		return (tab);
	}
	if (start <= end)
	{
		size = end - start + 1;
		printf(" start < end %d %d %d\n", start, end, size);
		tab = (int *)malloc(sizeof(int) * size);
		if (!tab)
			return (NULL);
		while (size > 0)
		{
			tab[i] = end;
			i++;
			size--;
			end--;
		}
		return (tab);
	}
	return (NULL);
}

int	main()
{
	int *ptr;
	int size;
	int i;

	i = 0;
	size = 4;
	ptr = ft_rrange(0, -3);
	while (size > 0)
	{
		printf("%d\n", ptr[i]);
		i++;
		size--;
	}
	return (0);
}