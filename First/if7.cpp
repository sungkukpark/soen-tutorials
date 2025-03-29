#include <stdio.h>

int main()
{
	int i, j;

	printf("첫 번째 정수를 입력하세요: ");
	scanf("%d", &i);

	printf("두 번째 정수를 입력하세요: ");
	scanf("%d", &j);

	if (i > j)
	{
		printf("%d가 %d보다 더 작습니다\n", j, i);
	}
	else if (i < j)
	{
		printf("%d가 %d보다 더 큽니다\n", j, i);
	}
	else
	{
		printf("%d와 %d는 같은 수입니다\n", j, i);
	}
}