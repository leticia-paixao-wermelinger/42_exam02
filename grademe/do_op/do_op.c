#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	numb1;
	int	numb2;
	int	res;

	numb1 = 0;
	numb2 = 0;
	res = 0;
	if (argc == 4)
	{
		numb1 = atoi(argv[1]);
		numb2 = atoi(argv[3]);
		if (argv[2][0] == '+')
			res = numb1 + numb2;
		else if (argv[2][0] == '-')
			res = numb1 - numb2;
		else if (argv[2][0] == '*')
			res = numb1 * numb2;
		else if (argv[2][0] == '/')
			res = numb1 / numb2;
		else if (argv[2][0] == '%')
			res = numb1 % numb2;
		printf("%i", res);
	}
	printf("\n");
	return (0);
}
