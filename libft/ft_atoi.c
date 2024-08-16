#include "../libft.h"

int	ft_atoi(const char *nptr)
{
	size_t i = 0;
	int sgn = 1;
	size_t start = 0;
	long int res = 0;

	while(*(nptr + i) && (*(nptr + i) < 33 || *(nptr + i) == 127) && ++i);
	if (*(nptr + i) && (*(nptr + i) == '-' || *(nptr + i) == '+'))
	{
		if (*(nptr + i) == '-')
			sgn = -1;
		++i;
	}
	start = i;
	while (*(nptr + i) && *(nptr + i) >= '0' && *(nptr + i) <= '9' && ++i);
	while (*(nptr + start) && start < i)
	{
		res = res * 10 + *(nptr + start) - 48;
		++start;
	}
	return (int)(sgn * res);
}
