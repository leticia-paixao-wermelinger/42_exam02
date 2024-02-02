#include <stdlib.h>

int	count_words(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if ((str[i] == '\n' || str[i] == '\t' || str[i] == 32) && !(str[i + 1] == '\n' || str[i + 1] == '\t' || str[i + 1] == 32 || str[i + 1] == 0))
			count++;
		i++;
	}
	return (count);
}

char	*make_substr(char *str, int start, int size)
{
	char	*sub;
	int	i;

	i = 0;
	sub = (char *)malloc((size - start + 2) * sizeof(char));
	if (!sub)
	{
		return (NULL);
	}
	while (str[start] && start <= size)
	{
		sub[i] = str[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}

char    **ft_split(char *str)
{
	int	count;
	int	i;
	int	j;
	int	start;
	char	**new_str;

	start = 0;
	i = 0;
	j = 0;
	count = count_words(str);
	new_str = (char **)malloc((count + 1) * sizeof(char *));
	if (!new_str)
		return (NULL);
	new_str[count] = NULL;
	while (str[i] && j <= count)
	{
		if ((str[i] == '\n' || str[i] == '\t' || str[i] == 32) && !(str[i + 1] == '\t' || str[i + 1] == '\n' || str[i + 1] == 32 || str[i + 1] == 0))
			start = i + 1;
		else if ((str[i + 1] == '\n' || str[i + 1] == '\t' || str[i + 1] == 32 || str[i + 1] == 0) && !(str[i] == '\n' || str[i] == '\t' || str[i] == 32))
		{
			new_str[j] = make_substr(str, start, i);
			j++;
		}
		i++;
	}
	return (new_str);
}
/*
int	main()
{
	#include <stdio.h>
	char	str[] = "   Eu\nestou	com    fomeee   ";
	char	**new_str;
	int		i;

	i = 0;
	new_str = ft_split(str);
	while (new_str[i])
	{
		printf("%s\n", new_str[i]);
		i++;
	}
//	printf("\n");
	i = 0;
	while (new_str[i])
	{
		free(new_str[i]);
		i++;
	}
	free(new_str);
}*/
