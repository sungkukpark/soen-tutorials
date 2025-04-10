#include <stdio.h>

int before = 11;

int main()
{
	extern int before;
	extern int after;

	printf("before = %d, after = %d\n", before, after);
	return 0;
}

int after = 22;