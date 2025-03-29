#include <stdio.h>

int main()
{
	int i, sum;

	sum = 0;
	i = 0;

	while (i <= 100)
	{
		sum += i;
		i += 1;
	}

	printf("1부터 100까지의 합 = %d\n", sum);
}