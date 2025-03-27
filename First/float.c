#include <stdio.h>

int main()
{
	double d;
	d = 123.456;

	printf("고정 소수점: %f\n", d);
	printf("부동 소수점: %e\n", d);
	printf("일반형 : %g\n", d);
	return 0;
}