#include "../libft.h"
#include <stdio.h>

long double ft_sqrt2(long double x)
{
	uint8_t i = 3;
	if (x == 0 || x == 1)
		return x;
	long double r = 1 + 0.5 * (x ) - ft_power(x , 2) / 8;

printf("Power: %Lf\n", ft_power(x-1, 2));
	while (i < 10)
	{
		r = r + (-3/8 + i/4) *  ft_power(x , i) / (ft_factorial(i));
		++i;
	}
	return r;
}
