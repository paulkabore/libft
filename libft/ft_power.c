#include "../libft.h"

long double	ft_power(long double x, unsigned int n)
{
	unsigned int i = 1;
	long double r = x;
	if (x == 0 && n == 0)
		return -1; //should exit or return error
	if (n == 0)
		return 1;
	while (i < n)
	{
		r *= x;
		++i;
	}
	return r;
}
