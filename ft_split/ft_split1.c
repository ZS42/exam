#include <stdio.h>
#include <stdlib.h>

int	ft_word_count(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if ((str[i] != ' ' && str[i] != '\n'
				&& str[i] != '\t' && str[i] != '\0')
				&& (str[i + 1] == ' '
				|| str[i + 1] == '\n' || str[i + 1] == '\t'
				|| str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

int	ft_word_len(char *s)
{
	int i;

	i = 0;
	// printf(" Hi %s\n", s);
	while (s[i] != '\0' && s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
	{
		i++;
	}
	return (i);
}

char	*ft_str_dup(char *s, int len)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	// printf("hiiii*** %d %d %s\n",len,i, word);
	return (word);
}

void	ft_free(char **word)
{
	int	i;

	i = 0;
	if (!word)
	{
		while (word[i])
		{
			free (word[i]);
			i++;
		}
		free (word);
	}
}

char	**ft_split(char *str)
{
	int		i;
	int		w_num;
	char	**word;
	int		wl;

	i = 0;
	w_num = ft_word_count(str);
	word = (char **)malloc(sizeof(char *) * (w_num + 1));
	if (!word)
		return (NULL);
	while (w_num > i)
	{
		// use *str to increment so pass incremented value to other fuctions
		while ((*str == ' ' || *str == '\n'
			|| *str == '\t') && *str != '\0')
			str++;

		wl = ft_word_len(str);
		// printf("wdlen%d\n", wl);
		word[i] = ft_str_dup(str, wl);
		ft_free(word);
		// printf("hello %s\n", word[i]);
		str = str + wl;
		i++;
	}
	word[i] = NULL;
	return (word);
}

int	main(void)
{
	char s[] = " This is a    happy day";
	char	**word;
	int		i;

	i = 0;
	word = ft_split(s);
	while (word[i])
	{
		printf("*%s*\n", word[i]);
		i++;
	}

}