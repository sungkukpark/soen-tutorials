#include <stdio.h>

int main()
{
	enum fruit
	{
		APPLE,
		ORANGE,
		BANANA
	};

	fruit a = APPLE;

	if (a == APPLE)
	{
		printf("%d: ����Դϴ�.\n", a);
	}
}