#pragma warning(disable:4996)
#include <stdio.h>

int Max(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int main()
{
	int a, b, m;

	printf("�� ���� �Է��ϼ���: ");
	scanf("%d %d", &a, &b);

	m = Max(a, b);
	printf("�� �� �� ū ���� %d�Դϴ�.\n", m);
}