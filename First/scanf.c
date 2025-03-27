#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int a, b;
	int sum;

	printf("첫 번째 숫자를 입력하세요: ");
	scanf("%d", &a);

	printf("두 번째 숫자를 입력하세요: ");
	scanf("%d", &b);

	sum = a + b;
	printf("입력한 두 수의 합은 %d입니다\n", sum);
}