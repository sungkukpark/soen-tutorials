#pragma warning(disable:4700)
#include <stdio.h>

int main()
{
	int i;						// �Լ� ����
	{
		int i;					// ��� ����
		i = 3;
		printf("i = %d\n", i);
	}
	printf("i = %d\n", i);
}