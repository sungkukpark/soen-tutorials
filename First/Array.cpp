#include <stdio.h>

int main()
{
	int arScore[5];
	int i;
	int sum;

	int arLength = sizeof(arScore) / sizeof(arScore[0]);
	for (i = 0; i < arLength; i++)
	{
		printf("%d�� �л��� ������ �Է��ϼ���: ", i + 1);
		scanf("%d", &arScore[i]);
	}

	sum = 0;
	for (i = 0; i < arLength; i++)
	{
		sum += arScore[i];
	}

	printf("\n������ %d���̰� ����� %d���Դϴ�.\n", sum, sum / arLength);
	return 0;
}