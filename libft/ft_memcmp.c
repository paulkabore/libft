#include "../libft.h"

int     memcmp(const void *s1, const void *s2, size_t n)
{
	if (!n)
		return 0;
	
	size_t	i = 0;
	char	*str1 = (char *)s1;
	char	*str2 = (char *)s2;
	int	res = 0;

	while (*(str1 + i) == *(str2 + i) && i < n && ++i);
	return *(str1 + i) - *(str2 + i);
}
