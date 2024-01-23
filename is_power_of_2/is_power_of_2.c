int	is_power_of_2(unsigned int n)
{
	int	x;

	x = 0;
	if (n == 1)
		return (0);
	while (n % 2 == 0 && n != 1)
	{
		n = n / 2;
		x++;
	}
	if (n == 1)
		return (1);
	return (0);
}
/*
int	main()
{
	#include <stdio.h>
	
	printf("%i\n", is_power_of_2(1073741824));
}*/
// return 1 if it is a power of 2. otherwise, returns 0
