#include <stdio.h>

int main()
{
	int i = 1234;
	void* vp;

	vp = &i;
	printf("%d\n", *(int*)vp);	// void�� �����ͷδ� �ش� �������� ���� ������ ������ ���� �� ����

	return 0;
}