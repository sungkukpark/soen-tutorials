#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	char name[10];

	printf("�̸��� ����? ");
	gets_s(name);
	printf("�ʰ� �ٷ� �� ������ %s����.\n", name);

	return 0;
}