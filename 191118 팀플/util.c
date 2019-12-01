#include "util.h"

void init()
{
	system("mode con cols=160 lines=50"); //콘솔창 크기조정 (가로,세로)
}

void init_2()
{
	system("mode con cols=90 lines=30"); //콘솔창 크기조정 (가로,세로)
}

void gotoxy(int x, int y) //커서위치 이동함수
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE); //콘솔 핸들가져오기
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
	unsigned long dwSize; //커서 두께
	int bVisible; //커서 보이기:1, 안 보이기 : 0
};
void Cursor() 
{
	CONSOLE_CURSOR_INFO c = { 0 };
	c.dwSize = 1; //두께 : 1
	c.bVisible = 0; //커서 숨기기
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &c); //커서 설정
}


