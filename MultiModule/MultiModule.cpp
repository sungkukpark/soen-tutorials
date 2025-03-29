#include <stdio.h>
#include "Util.h"

int main()
{
	int a, b, result;
	a = 2;
	b = 10;

	result = Power(a, b);
	printf("%d", result);

	//printf("두 수를 입력하세요: ");
	//scanf_s("%d%d", &a, &b);

	//result = Max(a, b);
	//printf("두 수 중 큰 값은 %d입니다.\n", max);
	
	return 0;
}