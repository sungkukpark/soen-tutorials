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

	printf("1���� 100������ �� = %d\n", sum);
}