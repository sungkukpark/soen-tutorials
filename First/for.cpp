#include <stdio.h>

int main()
{
	int d;

	printf("정수를 입력하세요: ");
	scanf("%d", &d);

	int i;
	for (i = 0; i < d; i = i + 1)
	{
		printf("숫자 = %d\n", i);
	}

	printf("i = %d", i);
}