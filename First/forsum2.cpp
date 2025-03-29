//#pragma warning(disable:4700)
#include <stdio.h>

int main()
{
	int d;

	printf("정수를 입력하세요: ");
	scanf("%d", &d);

	int i, sum;
	//printf("%d %d", i, sum);
	sum = 0;
	for (i = 0; i <= d; i = i + 1)
	{
		sum = sum + i;
	}

	printf("합계: %d", sum);
}