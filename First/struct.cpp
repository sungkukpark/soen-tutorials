#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main()
{
	struct Friend {
		char Name[10];
		int Age;
		double Height;
	};

	Friend f;
	strcpy(f.Name, "Sungkuk Park");
	f.Age = 30;
	f.Height = 171.2;

	printf("�� ģ���� �̸��� %s\n", f.Name);
	printf("�� ģ���� ���̴� %d\n", f.Age);
	printf("�� ģ���� Ű�� %f\n", f.Height);
}