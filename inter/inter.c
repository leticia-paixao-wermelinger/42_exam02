#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	k;

	k = 0;
	i = 0;
	j = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			k = 0;
			while (k < i)
			{
				if (argv[1][i] == argv[1][k])
				{
					i++;
					k = -1;
					break ;
				}
				k++;
			}
			if (k < 0)
				continue ;
			while (argv[2][j])
			{
				if (argv[2][j] == argv[1][i])
				{
					write(1, &argv[1][i], 1);
					break ;
				}
				j++;
			}
			j = 0;
			i++;
		}
	}
	write(1, "\n", 1);
}
