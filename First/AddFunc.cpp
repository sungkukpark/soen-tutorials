#pragma warning(disable:4996)
#include <stdio.h>

int Add(int a, int b)
{
	return a + b;
}

int main()
{
	int a = 3, b = 4;
	int c = 5, d = 6;

	printf("3 + 4 = %d\n", Add(a, b));
	printf("5 + 6 = %d\n", Add(5, 6));
}