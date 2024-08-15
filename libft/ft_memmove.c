#include "../libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i = 0;
	char *d = (char *)dest;
	const char *s = (char *)src;

	if (s <= d && s + n >= d)
	{
		i = n - 1;
		while (i >= 0)
		{
			*(d + i) = *(s + i);
			--i;
		}
	}
	while(i < n)
	{
		*(d + i) = *(s + i);
		++i;
	}
	return dest;
}
