#include <stdio.h>

int plus_one(int a);

int main()
{
	int i, j;

	i = 5;
	j = plus_one(i);

	printf("i = %d, °á°ú=%d\n", i, j);
	return 0;
}

int plus_one(int a)
{
	a = a + 1;
	return a;
}