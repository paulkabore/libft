#include "../libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t i = 0;

	if (dsize)
	{	
		while (*(dst + i) && ++i);
		while (i < dsize - 1 && *src)
		{
			*(dst + i) = *src++;
			++i;
		}
		*(dst + i) = '\0';
	}
	while (*src++ && ++i);
	return i;
}
