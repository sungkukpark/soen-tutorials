#include <stdio.h>

int main()
{
	int i;

	printf("���� �Է��� �ּ���: ");
	scanf("%d", &i);

	switch (i)
	{
	case 0:
		printf("�Է��� ���� 0�Դϴ�.\n");
		break;

	case 1:
		printf("1�� �Է��߽��ϴ�.\n");
		break;

	case 2:
		printf("2�Դϴ�.\n");
		break;

	default:
		printf("0, 1, 2�� �ƴ� �ٸ� ���Դϴ�.\n");
		break;
	}
}