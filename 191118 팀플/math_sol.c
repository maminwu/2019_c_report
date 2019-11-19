#include "math_sol.h"

void Check(int checknum) 
{ 
	int x = 7, y = 7;

	if (checknum == 0) 
	{
		gotoxy(x-2, y);  printf("> 다시 하기");
		gotoxy(x, y+1); printf("풀기 보기\n\n");

		while (1) 
		{
			int n = keyControl(); //키보드이벤트를 키값으로 받아오기
			switch (n)
			{
			case UP: {
				if (y > 7) //계속 못올라가게
				{
					gotoxy(x - 2, y); //'>'을 두칸 이전에 출력하려고
					printf(" "); //원래 위치 지우기
					gotoxy(x - 2, --y); //지우고 새로 이동한 위치로 이동
					printf(">"); //'>'삽입
				}
				break; }
			case DOWN: {
				if (y < 8 )//계속 못내려가게
				{
					gotoxy(x - 2, y);
					printf(" ");
					gotoxy(x - 2, ++y);
					printf(">");
				}
				break; }
			case SUBMIT: {
				return y - 7; } 
			}
		}
		system("PAUSE");

	}
	else if (checknum == 1) 
	{
		gotoxy(x-2, y); printf("> 넘어가기");
		gotoxy(x, y+1); printf("풀기 보기\n\n");

		while (1) 
		{
			int n = keyControl(); //키보드이벤트를 키값으로 받아오기
			switch (n)
			{
			case UP: {
				if (y > 7) //계속 못올라가게.
				{
					gotoxy(x - 2, y); //'>'을 두칸 이전에 출력하려고
					printf(" "); //원래 위치 지우기
					gotoxy(x - 2, --y); //지우고 새로 이동한 위치로 이동
					printf(">"); //'>'삽입
				}
				break; }
			case DOWN: {
				if (y < 8)//계속 못내려가게
				{
					gotoxy(x - 2, y);
					printf(" ");
					gotoxy(x - 2, ++y);
					printf(">");
				}
				break; }
			case SUBMIT: {
				return y - 7; } 
			}
		}
		system("PAUSE");
	}
}