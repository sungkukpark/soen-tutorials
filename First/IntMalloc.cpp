#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* ar;
	ar = (int*)malloc(10 * sizeof(int));

	// ar�� ����ϴ� ����
	// ...

	free(ar);

	return 0;
}