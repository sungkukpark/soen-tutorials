#include <Turboc.h>

int main()
{
	int i, Num1, Num2;
	
	printf("ù ��° ���ڸ� �Է��ϼ���: ");
	scanf("%d", &Num1);

	printf("�� ��° ���ڸ� �Է��ϼ���: ");
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

	printf("�ּ� ����� = %d\n", i);
}