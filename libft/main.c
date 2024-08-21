#include "../libft.h"
#include <stdio.h>

int main(const int argc, const char **argv)
{
	int i = 0;
	char **arr;
	
	i = argc - argc;
	
	arr = ft_split(argv[1], argv[2][0]);
	while(*arr)
	{
		printf("%s\n", *arr);
		++arr;
	}

	return 0;
}
