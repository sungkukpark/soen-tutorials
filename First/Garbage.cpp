#include <stdio.h>

int global_ar[5];

int main()
{
	int local_ar[5];
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("local_ar[%d] = %d\n", i, local_ar[i]);
	}
	puts("");

	for (i = 0; i < 5; i++)
	{
		printf("global_ar[%d] = %d\n", i, global_ar[i]);
	}

	return 0;
}