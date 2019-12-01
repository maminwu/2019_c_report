#include "main.h"

void init(); //콘솔창 크기조정 (가로,세로)
void init_2();
void gotoxy(int, int); // 커서위치 이동함수
void setcolor(unsigned short text, unsigned short back);
void Cursor();

enum color4 {
	Black = 0,
	Blue,
	Green,
	Cyan,
	Red,
	Magenta,
	Brown,
	Lgray,
	Dgray,
	Lblue,
	Lgreen,
	Lcyan,
	Lred,
	Lmagenta,
	Yellow,
	White
};