#include <stdio.h>

int main()
{
	int arScore[5];
	int i;
	int sum;

	int arLength = sizeof(arScore) / sizeof(arScore[0]);
	for (i = 0; i < arLength; i++)
	{
		printf("%d번 학생의 성적을 입력하세요: ", i + 1);
		scanf("%d", &arScore[i]);
	}

	sum = 0;
	for (i = 0; i < arLength; i++)
	{
		sum += arScore[i];
	}

	printf("\n총점은 %d점이고 평균은 %d점입니다.\n", sum, sum / arLength);
	return 0;
}