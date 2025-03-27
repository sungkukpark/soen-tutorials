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
		printf("%d: 사과입니다.\n", a);
	}
}