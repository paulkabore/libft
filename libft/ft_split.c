#include <stdlib.h>
#include "../libft.h"

char    **ft_split(const char *s, int c)
{
	uint32_t i = 0;
	uint32_t j = 0;
	uint32_t k = 0;
	uint32_t size = 0;
	char **arr = NULL;

	//determine number of words
	if (!s) return arr;
	while(*(s + i))
	{
		while(*(s + j) && *(s + j) == c && ++j);
		i = j;
		while(*(s + j) && *(s + j) != c && ++j);
		if (i != j)
		{
			++size;
			i = j;
		}
	}
	if (!size) return arr;
	arr = (char **)malloc((size + 1) * sizeof(char *));
	if (!arr) return arr;

	//determine str sizes and memory allocation
	i = 0;
	j = 0;
	while (i < size)
	{
		while (*(s + j) && *(s + j) == c && ++j);
		k = j;
		while (*(s + k) != c && ++k);
		*(arr + i) = (char *)malloc((k - j + 1) * sizeof(char));
		if (!*(arr + i)) return NULL;
		j = k;
		++i;
	}

	//copy
	i = 0;
        j = 0;
        while (i < size)
        {
                while (*(s + j) == c && ++j);
                k = j;
                while (*(s + k) != c)
		{
			*(*(arr + i) + k - j) = *(s + k);
			++k;
		}
		*(*(arr + i) + k - j) = '\0';
                j = k;
                ++i;
        }
	*(arr + size) = NULL;
	return arr;
}
