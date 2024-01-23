#include <unistd.h>

int	printing(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			count = str[i] - 65 + 1;
			while (count > 0)
			{
				write(1, &str[i], 1);
				count--;
			}
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			count = str[i] - 97 + 1;
			while (count > 0)
			{
				write(1, &str[i], 1);
				count--;
			}
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	return (count);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		printing(argv[1]);
	write(1, "\n", 1);
	return (0);
}
