#include <stdio.h>

int main()
{
	int i;

	printf("������ �Է��ϼ���: ");
	scanf("%d", &i);

	if (i % 2 == 0)
	{
		printf("%d�� ¦���Դϴ�.\n", i);
	}
	else
	{
		printf("%d�� Ȧ���Դϴ�.\n", i);
	}
}