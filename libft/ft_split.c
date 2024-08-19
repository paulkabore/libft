#include <stdlib.h>
#include "../libft.h"

char    **ft_split(const char *s, int c)
{
	uint32_t i = 0;
	uint32_t j = 0;
	uint32_t size = 0;
	uint32_t len = 0;
	char **arr = NULL;

	if (!s) return arr;
	while(*(s + i))
	{
		j = i;
		while(*(s + j) && *(s + j) == c)
		{
			++len;
			++j;
		}
		i = j;
		while(*(s + j) && *(s + j) != c)
		{
			++j;
			++len;
		}
		if (i != j)
			++size;
	}
	if (!size) return arr;
	arr = (char **)malloc((size + 1)* sizeof(char *));
	if (!arr) return arr;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (*(s + j) == c)
			++j;
		while (*(s + j) != c)
			++j;
		*(arr + i) = (char *)malloc((j + 1) * sizeof(char));
		while (i < j)
		{
			*(arr + i) = *( + 
		}
	}
	return arr;
}
