#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int i;
	int sl_s1;

	sl_s1 = 0;
	if (!s1 || !s2)
		return (NULL);
	while (s1[sl_s1] && *s1)
		sl_s1++;
	i = 0;
	if (sl_s1 > 0)
	{
		while (s2[i] && i < sl_s1)
		{	
			s1[i] = s2[i];
			i++;
		}
		s1[i] = '\0';
	}
	return (s1);
}

int main(void)
{
	char s1[] = "Farasat";
	char s2[] = "pilot";
	
	ft_strcpy(s1, s2);
	printf ("%s", s1);
}
