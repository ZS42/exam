#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int i;

	i = 0;
	if (!s1 || !s2)
		return (1);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int main()
{
	char s1[] = "Happen";
	char s2[] = "Happy";

	printf("%d\n", ft_strcmp(s1, s2));
}