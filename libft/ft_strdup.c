#include <stdlib.h>
#include "../libft.h"

static inline size_t	ft_getlen(const char *s)
{
         size_t i = 0;

         while (*(s + i) && ++i);
         return i;
}

char	*ft_strdup(const char *s)
{
	char *cpy = NULL;
	size_t length = ft_getlen(s);
	size_t i = 0;

	cpy = (char *)malloc(length * sizeof(char));
	if (!cpy)
		return cpy;
	while (i < length)
	{
		*(cpy + i) = *(s + i);
		++i;
	}
	return cpy;
}
