#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* arScore;
	int i, stNum;
	int sum;

	printf("�л��� ���� �Է��ϼ���: ");
	scanf("%d", &stNum);
	arScore = (int*)malloc(stNum * sizeof(int));

	if (arScore == NULL)
	{
		printf("�޸𸮰� �����մϴ�.\n");
		exit(0);
	}

	for (i = 0; i < stNum; i++) {
		printf("%d�� �л��� ������ �Է��ϼ��� : ", i + 1);
		scanf("%d", &arScore[i]);
	}

	sum = 0;
	for (i = 0; i < stNum; i++) {
		sum += arScore[i];
	}

	printf("\n������ %d���̰� ����� %d���Դϴ�.\n", sum, sum / stNum);
	free(arScore);

	return 0;
}