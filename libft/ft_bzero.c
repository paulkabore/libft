#include "../libft.h"

void	ft_bzero(void *s, unsigned long n)
{
	unsigned long	i;
	char		*p;

	i = 0;
	if (!s)
		return;
	p = (char *)s;
	while(i < n)
	{
		*(p + i) = '\0';
		++i;
	}
}
