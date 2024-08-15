#include "../libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t		i;

	if (!s)
		return NULL;
	i = 0;
	while(*(s + i))
	{
		if (*(s + i) == c)
			return s + i;
	}
	if (*(s + i) == c)
		return s + i;
	return NULL;
}
