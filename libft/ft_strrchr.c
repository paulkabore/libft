#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	long	i;
	long	index;

	i = 0;
	index = -1;
	if (!s)
		return NULL;
	while(*(s + i))
	{
		if (*(s + i) == c)
			index = s + i;
	}
	if (*(s + i) == c)
		return s + i;
	if (index >= 0)
		return s + index;
	return NULL;
}
