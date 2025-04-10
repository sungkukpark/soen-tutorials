#include <stdio.h>

int main()
{
	int i = 1234;
	void* vp;

	vp = &i;
	printf("%d\n", *(int*)vp);	// void형 포인터로는 해당 포인터의 값을 역참조 연산해 읽을 수 없다

	return 0;
}