#include <stdio.h>

int main()
{
	int i, j;

	printf("ù ��° ������ �Է��ϼ���: ");
	scanf("%d", &i);

	printf("�� ��° ������ �Է��ϼ���: ");
	scanf("%d", &j);

	if (i > j)
	{
		printf("%d�� %d���� �� �۽��ϴ�\n", j, i);
	}
	else if (i < j)
	{
		printf("%d�� %d���� �� Ů�ϴ�\n", j, i);
	}
	else
	{
		printf("%d�� %d�� ���� ���Դϴ�\n", j, i);
	}
}