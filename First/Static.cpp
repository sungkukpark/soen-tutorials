#include <stdio.h>

void PrintCount();

int main()
{
	int i;

	for (i = 0; i < 5; i++)
	{
		PrintCount();
	}
}

void PrintCount()
{
	static int count = 0;

	count++;
	printf("저는 %d번째로 호출되었습니다.\n", count);
}