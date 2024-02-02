#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	char	c;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			c = argv[1][i];
			if ((c >= 'A' && c <= 'M') || (c >= 'a' && c <= 'm'))
			{
				c = c + 13;
				write(1, &c, 1);
			}
			else if ((c >= 'N' && c <= 'Z') || (c >= 'n' && c <= 'z'))
			{
				c = c - 13;
				write(1, &c, 1);
			}
			else
				write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
