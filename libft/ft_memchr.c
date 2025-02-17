#include "../libft.h"

void    *ft_memchr(void *s, int c, size_t n)
{
	size_t i = 0;
	const unsigned char *str = (unsigned char *)s;

	while (i < n)
	{
		if (*(str + i) == c)
			return s + i;
		++i;
	}
	return NULL;
}
