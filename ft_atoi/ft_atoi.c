// starting len at one to account for units placei
int	ft_nbr_len(char *str)
{
	int	len;

	len = 1;
	while (str > 10)
	{
		str = str / 10;
		i++;
	}
	return (len);
}

int	ft_atoi(const char *str)
{
	int len;

	len = ft_nbr_len(str);
	while (len-- > 0)
	{
		str = str % 10 + '0';
		write (1, str , 1);
	}
}