#include "../libft.h"

static size_t	ft_strlen(const char *s)
{
         size_t  i;

         if (!s)
                 return 0;
         i = 0;
         while (*(s + i) && ++i)
                 ;
         return i;
}

char		ft_strdup(const char *s)
{
	char *copy;
	size_t length;
	size_t i;

	i = 0;
	copy = NULL;
	length = ft_strlen(s);

	copy = (char *)malloc(length * sizeof(char));
	if (!copy)
		return NULL;
	while (i < length)
	{
		*(copy + i) = *(s + i);
		++i;
	}
	return copy;
}
