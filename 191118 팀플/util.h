#include "main.h"

void init(); //�ܼ�â ũ������ (����,����)
void init_2();
void gotoxy(int, int); // Ŀ����ġ �̵��Լ�
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