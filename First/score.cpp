#include <stdio.h>

int main(char* argv, int argc)
{
	int Score[2] = { 1, 2 };
	int sum = 0;
	for (int i = 0; i < 2; i = i + 1)
	{
		sum += Score[i];
	}

	printf("%d", sum);
	return 0;
}