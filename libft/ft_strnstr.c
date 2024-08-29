#include "../libft.h"

char	*ft_strnstr(const char *needle, const char *haystack, size_t n)
{
	size_t i = 0;
	char	*addr = NULL;

	while(*(haystack + i) && *(needle + i) && *(haystack + i) == *(needle + i) && i < n)
	{
		++i;
	}
	return addr;
}
