#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t i = 0;
	char	*addr = NULL;

	while(*(s + i))
	{
		if (*(s + i) == c)
			addr = (char *)s + i;
		++i;
	}
	if (*(s + i) == c)
		return (char *)s + i;
	return addr;
}
