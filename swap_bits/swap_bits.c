unsigned char swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

int	main()
{
	#include <stdio.h>
	unsigned char	c;
	unsigned char	ret;

	c = '12';
	ret = swap_bits(c);
	
}
