#include <stdio.h>

void PrintCount();

int main()
{
	int i;

	for (i = 0; i < 5; i++)
	{
		PrintCount();
	}
}

void PrintCount()
{
	static int count = 0;

	count++;
	printf("���� %d��°�� ȣ��Ǿ����ϴ�.\n", count);
}