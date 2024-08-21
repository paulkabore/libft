#include <stdio.h>


void f(int a, int b)
{
	printf("%d %d\n", a, b);
}

int main(void)
{
	int a = 1;
	f(a++, a++);

	printf("%d\n", a);
	return 0;
}
