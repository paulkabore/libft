#include "../libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i = 0;
	char *d = (char *)dest;
	const char *s = (char *)src;

	while (i < n && *(s + i) != c)
	{
		*(d + i) = *(s + i);
		++i;
	}
	return dest;
}
