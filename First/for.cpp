#include <stdio.h>

int main()
{
	int d;

	printf("������ �Է��ϼ���: ");
	scanf("%d", &d);

	int i;
	for (i = 0; i < d; i = i + 1)
	{
		printf("���� = %d\n", i);
	}

	printf("i = %d", i);
}