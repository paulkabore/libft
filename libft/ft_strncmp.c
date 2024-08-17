#include "../libft.h"

int strcmp(const char *s1, const char *s2, size_t n)
{
	size_t i = 0;

	while (*(s1 + i) == *(s2 + i) && i < n)
		++i;
	return *(s1 + i) - *(s2 + i);
}
