int Max(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int Power(int a, int b)
{
	int result = 1;

	for (int i = 0; i < b; ++i)
	{
		result *= a;
	}
	
	return result;
}