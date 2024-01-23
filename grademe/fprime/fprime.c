#include <stdio.h>
#include <stdlib.h>

int	is_prime(int prime)
{
	int	n;

	n = 1;
	while (n <= (prime / 2))
	{
		if (prime % n == 0 && n != 1 && n != prime)
			return (0);
		n++;
	}
	return (1);
}

void	prime_facts(int a)
{
	int	check_prc;
	int	prime;

	prime = 2;
	check_prc = 0;
	while (prime <= a)
	{
		if (is_prime(prime) == 1)
		{
			while (a % prime == 0)
			{
				if (check_prc == 1)
					printf("*");
				printf("%i", prime);
				check_prc = 1;
				a = a / prime;
			}
		}
		prime++;
	}
	if (check_prc == 0)
		printf("%i", a);
}

int	main(int argc, char *argv[])
{
	int	a;

	if (argc == 2)
	{
		a = atoi(argv[1]);
		if (a <= 0)
		{
			printf("\n");
			return (0);
		}
		prime_facts(a);
	}
	printf("\n");
}
