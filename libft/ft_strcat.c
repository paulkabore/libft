#include "../libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	while(*dest++);
	while((*dest++ = *src++));
	return --dest;
}
