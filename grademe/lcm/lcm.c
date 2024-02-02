unsigned int	lcm(unsigned int a, unsigned int b)
{
	int	n;

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		n = a;
	else
		n = b;
	while (n)
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		n++;
	}
	return (n);
}
/*
int	main()
{
	#include <stdio.h>
	int	ret;

	ret = lcm(229, 665);
	printf("%i\n", ret);
}*/
