#include <unistd.h>

void	ft_putnbr(int n)
{
	char	c;

	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		c = n + '0';
		write (1, &c, 1);
	}
}

int	ft_atoi(char *s)
{
	long long	result;
	int			i;
	int			sign;

	i = 0;
	sign = 1;
	result = 0;
	while (s[i] < 32)
		i++;
	if (s[i] == '-')
		sign *= -1;
	while (s[i] == '-' || s[i] == '+')
		i++;
	while (s[i] > '0' && s[i] <= '9')
	{
		result = result * 10 + s[i] - '0';
		i++;
	}
	return (result * sign);

}

int	main(int ac, char **av)
{
	int	i;
	int	p;
	int	j;

// 	Dont want 0
	i = 1;
// 	should not work if ac >2 even though subject doesnt say it
	if (ac == 2)
	{
		p = ft_atoi(av[1]);
		while (i < 10)
		{
			ft_putnbr(i);
			write (1, " x ", 3);
			ft_putnbr(p);
			write (1, " = ", 3);
			j = i * p;
			ft_putnbr(j);
			write (1, "\n", 1);
			i++;
		}

	}
	else
		write (1, "\n", 1);
	return (0);
}
