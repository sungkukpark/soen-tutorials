//#pragma warning(disable:4700)
#include <stdio.h>
//#include <Turboc.h>
#include <windows.h>
#include <conio.h>

// 화면을 모두 지운다.
void clrscr()
{
	system("cls");
}

int pow_of_two(int num)
{
	return num * num;
}

// 커서를 숨긴다
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

// 커서를 x,y 좌표로 이동시킨다.
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