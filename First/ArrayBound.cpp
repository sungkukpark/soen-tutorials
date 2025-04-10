#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	char name[10];

	printf("이름이 뭐니? ");
	gets_s(name);
	printf("너가 바로 그 유명한 %s구나.\n", name);

	return 0;
}