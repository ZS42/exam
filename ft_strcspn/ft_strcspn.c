#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

int	main(void)
{
	char s[] = "This is 42 Abu Dhabi";
	char reject[] = "314";

	printf("ft is %zu\n", ft_strcspn(s, reject));
	printf("std is %zu\n", strcspn(s, reject));
}