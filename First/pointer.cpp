#include <stdio.h>

int main()
{
	int num = 629;
	int* pi;

	pi = &num;
	printf("Num의 값은 %d입니다.\n", *pi);

	*pi = 5;
	printf("Num의 값은 %d입니다.\n", *pi);
	printf("Num의 주소의 값은 %p입니다\n", &pi);
}