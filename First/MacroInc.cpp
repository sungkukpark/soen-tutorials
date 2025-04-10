#include "stdio.h"
#define double(x) ((x)+(x))

int main()
{
	int a, b;
	a = 3;

	b = double(a);
	printf("a = %d, b = %d\n", a, b);
	return 0;
}