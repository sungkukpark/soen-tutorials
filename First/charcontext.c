#include <Turboc.h>

int main()
{
	char ch = 'A';

	printf("������ �� = %c, ������ �� = %c\n", ch, ch);
	gotoxy(ch, 5);
	_putch(ch);
}