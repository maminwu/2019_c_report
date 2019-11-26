#include "util.h"

void init()
{
	system("mode con cols=160 lines=50"); //콘솔창 크기조정 (가로,세로)
}

void init_2()
{
	system("mode con cols=80 lines=30"); //콘솔창 크기조정 (가로,세로)
}

void gotoxy(int x, int y) //커서위치 이동함수
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE); //콘솔 핸들가져오기
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consoleHandle, pos);
}

