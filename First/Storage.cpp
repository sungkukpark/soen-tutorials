#include <stdio.h>

void func();

int global;				// �Լ� �ܺο��� ����Ǿ����Ƿ� ��������

void main()
{
	int local;			// main �Լ��� ��������

	global = 1;			// ����
	local = 2;			// ����
	i = 3;				// �Ұ���
}

void func()
{
	int i;				// func �Լ��� ��������

	global = 1;			// ����
	local = 2;			// �Ұ���
	i = 3;				// ����
}