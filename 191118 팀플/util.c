#include "util.h"

void init()
{
	system("mode con cols=160 lines=50"); //�ܼ�â ũ������ (����,����)
}

void init_2()
{
	system("mode con cols=90 lines=30"); //�ܼ�â ũ������ (����,����)
}

void gotoxy(int x, int y) //Ŀ����ġ �̵��Լ�
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE); //�ܼ� �ڵ鰡������
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consoleHandle, pos);
}

void setcolor(unsigned short text, unsigned short back)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), text | (back << 4));
}


