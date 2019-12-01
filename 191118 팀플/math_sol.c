#include "math_sol.h"

int Check(int checknum) //정답,오답에 따라 선택지 나오게 하기 
{

	int x = 7, y = 10;


	if (checknum == 0) //오답입니다.
	{
		int checknumber = checknum;
		gotoxy(x - 2, y); printf("> 다시 하기");
		gotoxy(x, y + 1); printf("풀이 보기\n\n");

		while (1)
		{
			int n = keyControl(); //키보드이벤트를 키값으로 받아오기
			switch (n)
			{
			case UP: {
				if (y > 10) //계속 못올라가게
				{
					gotoxy(x - 2, y); //'>'을 두칸 이전에 출력하려고
					printf(" "); //원래 위치 지우기
					gotoxy(x - 2, --y); //지우고 새로 이동한 위치로 이동
					printf(">"); //'>'삽입
				}
				break; }
			case DOWN: {
				if (y < 11) //계속 못내려가게
				{
					gotoxy(x - 2, y);
					printf(" ");
					gotoxy(x - 2, ++y);
					printf(">");
				}
				break; }
			case SUBMIT:
			{ 
				return y - 10; 
			}

			}
		}
		system("PAUSE");
		
	}
	else if (checknum == 1) //정답입니다.
	{
		int checknumber = checknum;
		gotoxy(x - 2, y); printf("> 다음 문제로");
		gotoxy(x, y + 1); printf("풀이 보기\n\n");

		while (1)
		{
			int n = keyControl(); //키보드이벤트를 키값으로 받아오기
			switch (n)
			{
			case UP: {
				if (y > 10) //계속 못올라가게
				{
					gotoxy(x - 2, y); //'>'을 두칸 이전에 출력하려고
					printf(" "); //원래 위치 지우기
					gotoxy(x - 2, --y); //지우고 새로 이동한 위치로 이동
					printf(">"); //'>'삽입
				}
				break; }
			case DOWN: {
				if (y < 11) //계속 못내려가게
				{
					gotoxy(x - 2, y);
					printf(" ");
					gotoxy(x - 2, ++y);
					printf(">");
				}
				break; }
			case SUBMIT:
			{ 
				return y - 10;
			}
			}
		}
		
	}
}
