#include <unistd.h>
#include <stdlib.h>

int	count_lower_camel_case(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			count++;
		count++;
		i++;
	}
	return (count);
}

char *create_str(char *or_str, int count)
{
	char	*str;
	int		i;
	int		or_i;

	i = 0;
	or_i = 0;
	str = (char *)malloc((count + 1) * sizeof(char));
	while (or_str[or_i])
	{
		if (or_str[or_i] >= 'A' && or_str[or_i] <= 'Z')
		{
			str[i] = '_';
			i++;
			str[i] = or_str[or_i] + 32;
			i++;
		}
		else
		{
			str[i] = or_str[or_i];
			i++;
		}
		or_i++;
	}
	return (str);
}

int	main(int argc, char *argv[])
{
	int	count;
	int	i;
	char	*str;

	i = 0;
	count = 0;
	str = NULL;
	if (argc == 2)
	{
		count = count_lower_camel_case(argv[1]);
		str = create_str(argv[1], count);
		while (str[i])
		{
			write(1, &str[i], 1);
			i++;
		}
		free(str);
	}
	write(1, "\n", 1);
	return (0);
}
