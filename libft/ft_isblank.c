#include "../libft.h"

int ft_isblank(int c)
{
	return (c >= 0 && c <= 32) || c == 127;
}
