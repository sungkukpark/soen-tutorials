#include <stdio.h>

int main()
{
	int num = 629;
	int* pi;

	pi = &num;
	printf("Num�� ���� %d�Դϴ�.\n", *pi);

	*pi = 5;
	printf("Num�� ���� %d�Դϴ�.\n", *pi);
	printf("Num�� �ּ��� ���� %p�Դϴ�\n", &pi);
}