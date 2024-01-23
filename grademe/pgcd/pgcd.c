#include <stdio.h>
#include <stdlib.h>

void	hcd(int a, int b)
{
	int	den;
	int	div;

	div = 1;
	den = 1;
	while (div <= a && div <= b)
	{
		if (a % div == 0 && b % div == 0)
			den = div;
		div++;
	}
	printf("%i", den);
}

int	main(int argc, char *argv[])
{
	int	a;
	int	b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		hcd(a, b);
	}
	printf("\n");
}
