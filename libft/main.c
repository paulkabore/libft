#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int main(const int argc, const char **argv)
{
int i = 1;

char dst[40];
char dst1[40];
strcpy(dst, "Hello!");
strcpy(dst1, "Hello!");
dst[6] = '\0';
dst1[6] = '\0';

while (i < argc)
{
	printf("%zu %s %zu", ft_strlcat(dst, argv[i], 40), dst, ft_strlen(dst));
	printf("%zu %s %zu", strlcat(dst1, argv[i], 40), dst1, ft_strlen(dst1));
	++i;
}
printf("\n");

return 0;
}
