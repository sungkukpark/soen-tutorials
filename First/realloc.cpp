#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* ar;

	ar = (int*)malloc(5 * sizeof(int));
	ar[4] = 1234;

	ar = (int*)realloc(ar, 10 * sizeof(int));
	ar[9] = 5678;

	printf("ar[4] = %d, ar[9] = %d\n", ar[4], ar[9]);

	return 0;
}