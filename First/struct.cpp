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

	printf("내 친구의 이름은 %s\n", f.Name);
	printf("내 친구의 나이는 %d\n", f.Age);
	printf("내 친구의 키는 %f\n", f.Height);
}