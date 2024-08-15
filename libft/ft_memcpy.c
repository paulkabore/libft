#include "../libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i = 0;
	const char *s = (char *)src;
	char *d = (char *)dest;

	while (i < n)
	{
		*(d + i) = *(s + i);
		++i;
	}
	return dest;
}
