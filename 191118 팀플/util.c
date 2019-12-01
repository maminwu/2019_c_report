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
	
struct CONSOLE_CURSOR_INFO {
	unsigned long dwSize; //Ŀ�� �β�
	int bVisible; //Ŀ�� ���̱�:1, �� ���̱� : 0
};
void Cursor() 
{
	CONSOLE_CURSOR_INFO c = { 0 };
	c.dwSize = 1; //�β� : 1
	c.bVisible = 0; //Ŀ�� �����
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &c); //Ŀ�� ����
}


