#include "../libft.h"

int    ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (!n)
		return 0;
	
	size_t	i = 0;
	char	*str1 = (char *)s1;
	char	*str2 = (char *)s2;

	while (*(str1 + i) == *(str2 + i) && i < n && ++i);
	return *(str1 + i) - *(str2 + i);
}
