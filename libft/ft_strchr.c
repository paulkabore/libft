#include "../libft.h"

char	*ft_strchr(const char *s, int c)
{
	//char *addr = NULL;
	size_t i = 0;

	while(*(s + i))
	{
		if (*(s + i) == c)
			return (char *)s + i;
		++i;
	}
	if (*(s + i) == c)
		return (char *)s + i;
	return (char *)NULL;
}
