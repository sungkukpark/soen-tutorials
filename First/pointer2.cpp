#include <stdio.h>

int main()
{
	double num1, num2;
	double* pd;

	num1 = 3.14;
	pd = &num1;

	num2 = *pd;
	printf("Num2�� ���� %f�Դϴ�.\n", num2);
}