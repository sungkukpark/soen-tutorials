#include <stdio.h>

void plus_ref(int *a);

int main()
{
	int i;

	i = 5;
	plus_ref(&i);

	printf("°á°ú = %d\n", i);
	return 0;
}

void plus_ref(int *a)
{
	*a = *a + 1;
}