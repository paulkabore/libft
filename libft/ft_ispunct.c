#include "../libft.h"

int ft_ispunct(int c)
{
	return (c > 32 && c < 48) || (c > 57 && c < 65) || (c > 90 && c < 97) || (c > 122 && c < 127);
}
