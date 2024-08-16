#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

const int main(const int argc, const char **argv)
{
int i = 1;

while (i < argc)
{
	printf("%d\t", ft_atoi(argv[i]));
	printf("%d\t", atoi(argv[i]));
	++i;
}
printf("\n");

return 0;
}
