#include <stdio.h>
#include <windows.h>

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

	printf("문자열을 출력할 위치를 입력하세요: ");
	scanf("%d", &i);

	if (i == 1)
	{
		gotoxy(20, 10);
	}
	else if (i == 2)
	{
		gotoxy(40, 10);
	}
	else
	{
		gotoxy(60, 10);
	}

	printf("Programmer\n");
}