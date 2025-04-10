#pragma warning(disable:4700)
#include <stdio.h>

int global;

int main()
{
	int local;

	printf("global is %d, local is %d\n", global, local);
}