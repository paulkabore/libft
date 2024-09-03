#include <limits.h>
#include <stdio.h>

int main()
{
	printf("%d : %d\n\n", INT_MIN, INT_MAX);
	printf("%ld : %ld\n\n", LONG_MIN, LONG_MAX);
	printf("Max unsigned long int: %lu\n\n", ULONG_MAX);
	printf("Max unsigned long long int: %llu\n\n", ULLONG_MAX);
	printf("%f : %f\n\n", FLT_MIN, FLT_MAX);
	printf("%lf : %lf\n\n", DBL_MIN, DBL_MAX);
	printf("%Lf : %Lf\n\n", LDBL_MIN, LDBL_MAX);
	printf("%lld : %lld\n\n", LLONG_MIN, LLONG_MAX);
	return 0;
}
