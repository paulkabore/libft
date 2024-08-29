#include "../libft.h"

unsigned long long int ft_factorial(uint8_t n)
{
	uint8_t i = 1;
	unsigned long int r = 1;

	if (n == 0 || n == 1)
		return 1;
	while(i <= n)
	{
		r *= i;
		++i;
	}
	return r;
}
