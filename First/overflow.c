#pragma warning(disable:4996)
#include <Turboc.h>

int main()
{
	short a, b, c;	// ¹üÀ§: -32768 ~ 32767
	unsigned short s, t, u;	// 0 ~ 65535

	a = 20000;
	b = 30000;
	c = a + b;
	printf("%d + %d = %d\n", a, b, c);

	s = 20000;
	t = 30000;
	u = s - t;
	printf("%d - %d = %d\n", s, t, u);
}