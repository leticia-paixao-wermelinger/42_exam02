#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	replace(char *str, char c1, char c2)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c1)
			str[i] = c2;
		i++;
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	char	c1;
	char	c2;
	char	*str;
	if (argc == 4)
	{
		if (ft_strlen(argv[2]) != 1 || ft_strlen(argv[3]) != 1)
		{
			write(1, "\n", 1);
			return (0);
		}
		c1 = (char)argv[2][0];
		c2 = (char)argv[3][0];
		str = argv[1];
		replace(str, c1, c2);
		ft_putstr(str);
	}
	write(1, "\n", 1);
	return (0);
}
