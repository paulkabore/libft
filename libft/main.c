#include "../libft.h"
#include <stdio.h>
#include <math.h>

int main(const int argc, const char **argv)
{

	long double i = 0;
	while (i < 10)
	{
		printf("%.31Lf\t%.30f\n", ft_sqrt(i), sqrt(i));
		++i;
	}
	return 0;
}
