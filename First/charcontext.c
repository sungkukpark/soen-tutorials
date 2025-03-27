#include <Turboc.h>

int main()
{
	char ch = 'A';

	printf("문자일 때 = %c, 정수일 때 = %c\n", ch, ch);
	gotoxy(ch, 5);
	_putch(ch);
}