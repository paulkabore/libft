#include "../libft.h"

int ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return c - 'a' + 'Z';
	return c;
}
