#include <stdio.h>

int main()
{
	typedef int jungsoo;

	jungsoo a;
	a = 10;
	printf("%d\n", a);

	typedef enum { True, False } Bool;
	Bool b = False;
	printf("%d\n", b);

	typedef int* pint;
	pint pi = &a;
	*pi = 20;
	printf("%d\n", *pi);

	typedef int arint[10];
	arint c = { 1, 2, 3, 4, 5 };
	for (int i = 0; i < 10; i = i + 1)
	{
		printf("%d ", c[i]);
	}
	printf("\n");

	typedef struct { int a; double b; } Friend;
	Friend d;
	d.a = 5;
	d.b = 3.14;
	printf("%d\n", d.a);
	printf("%f\n", d.b);
}