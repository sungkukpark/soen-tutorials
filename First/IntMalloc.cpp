#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* ar;
	ar = (int*)malloc(10 * sizeof(int));

	// ar을 사용하는 구간
	// ...

	free(ar);

	return 0;
}