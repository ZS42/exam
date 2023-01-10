#include <stdlib.h>
#include <stdio.h>

int	ft_word_count(char *s)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if ((s[i + 1] == '\0' || s[i + 1] == ' ' || s[i + 1] == '\n'
				|| s[i + 1] == '\t') && (s[i] != ' ' || s[i] != '\n'
				|| s[i] != '\t'))
			count++;
		i++;
	}
	return (count);
}

char	*ft_strdup(char *str, int wl)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)malloc(sizeof(char) * (wl + 1));
	if (!word)
		return (NULL);
	while (i < wl)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

void	ft_free_split(char **s, int wc)
{
	if (!s)
	{
		while (wc--)
			free (s[wc]);
		free (s);
	}
}

int	ft_word_length(char *s)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	while (s[i] != '\0' && s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
	{
		len++;
		i++;
	}
	return (len);
}

char	**ft_split(char *str)
{
	int		wc;
	char	**word_pointer;
	int		wl;
	int		i;

	wc = ft_word_count(str);
	word_pointer = (char **)malloc(sizeof(char *) * (wc + 1));
	if (!word_pointer)
		return (NULL);
	i = 0;
	while (wc > i)
	{
		while (*str && (*str == ' ' || *str == '\n' || *str == '\t'))
			str++;
		wl = ft_word_length(str);
		word_pointer[i] = ft_strdup(str, wl);
		ft_free_split(word_pointer, wc - 1);
		str = str + wl;
		i++;
	}
	return (word_pointer);
}

int main(void)
{
	char s[] = "Happy Birthday to you";
	char **result;
	int i;

	result = ft_split(s);
	i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	return (0);
}