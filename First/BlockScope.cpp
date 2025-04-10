#pragma warning(disable:4700)
#include <stdio.h>

int main()
{
	int i;						// 함수 범위
	{
		int i;					// 블록 범위
		i = 3;
		printf("i = %d\n", i);
	}
	printf("i = %d\n", i);
}