#include <Turboc.h>

void main()
{
	int i, j;

	for (i = 1; i <= 3; i = i + 1)
	{
		for (j = 1; j <= 3; j = j + 1)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}

		printf("\n");
	}
}