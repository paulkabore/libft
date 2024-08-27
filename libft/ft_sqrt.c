#include "../libft.h"

static inline long double ftabs(long double x)
{
	if (x < 0)
		return -x;
	return x;
}

long double ft_sqrt(long double x)
{
	if (x == 0 || x == 1)
		return x;
	long double tmp = x/2;
	long double r = 0.5 * (tmp + x / tmp);

	while (ftabs(r - tmp) > 1e-31)
	{
		tmp = r;
		r = 0.5 * (r + x / r);
	}
	return r;
}
