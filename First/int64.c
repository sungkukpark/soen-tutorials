#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	__int64 a, b, c;
	//printf("%zu", sizeof(a)); // Use %zu for size_t type

	a = 111111111;
	b = 111111111;
	c = a * b;
	printf("%I64d\n", c);
}