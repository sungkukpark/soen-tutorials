#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	char addr[128];

	printf("주소를 입력하세요 : ");
	//scanf("%s", addr);
	gets(addr);
	printf("입력받은 주소 = %s\n", addr);
}