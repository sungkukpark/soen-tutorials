//#pragma warning(disable:4700)
#include <stdio.h>
//#include <Turboc.h>
#include <windows.h>
#include <conio.h>

// ȭ���� ��� �����.
void clrscr()
{
	system("cls");
}

int pow_of_two(int num)
{
	return num * num;
}

// Ŀ���� �����
void hide_cursor()
{
#if defined(_WIN32)
	static const HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	GetConsoleCursorInfo(handle, &cci);
	cci.bVisible = false; // show/hide cursor
	SetConsoleCursorInfo(handle, &cci);
#endif
}

// Ŀ���� x,y ��ǥ�� �̵���Ų��.
void gotoxy(int x, int y)
{
	COORD Cur;
	Cur.X = x;
	Cur.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}

int main()
{
	int i;
	clrscr();

	hide_cursor();

	for (i = 1; i <= 80; i = i + 1)
	{
		gotoxy(i, 10);
		_putch('#');

		Sleep(100);
		
		gotoxy(i - 1, 10);
		_putch(' ');
	}
}