#include <stdio.h>
#include <windows.h>

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

	printf("���ڿ��� ����� ��ġ�� �Է��ϼ���: ");
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