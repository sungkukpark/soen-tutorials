#include <Turboc.h>

int main()
{
	int i, Num1, Num2;
	
	printf("첫 번째 숫자를 입력하세요: ");
	scanf("%d", &Num1);

	printf("두 번째 숫자를 입력하세요: ");
	scanf("%d", &Num2);

	i = 1;
	for (;;)
	{
		if (i % Num1 == 0 && i % Num2 == 0)
		{
			break;
		}

		i = i + 1;
	}

	printf("최소 공배수 = %d\n", i);
}