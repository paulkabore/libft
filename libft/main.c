#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int main(const int argc, const char **argv)
{
int i = 1;

char dst[20];

while (i < argc)
{
	printf("%zu\t %s %zu - ", ft_strlcpy(dst, argv[i], 20), dst, ft_strlen(dst));
	printf("%zu\t %s %zu - ", strlcpy(dst, argv[i], 20), dst, ft_strlen(dst));
	++i;
}
printf("\n");

return 0;
}
