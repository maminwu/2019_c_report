#include "main.h"
void Check(int checknum) {
	if (checknum == 0) {
		printf("\n다시 하기");
		printf("\n풀기 보기\n");
		system("PAUSE");
	}else if (checknum == 1) {
		printf("\n넘어가기");
		printf("\n풀기 보기\n");
		system("PAUSE");
	}
}

int main()
{
	init(); //콘솔창 크기조정 (가로,세로)
	while (1)
	{
		titleDraw(); //타이틀
		int menuCode = menuDraw(); //메뉴
		int trueorfalse = 0; //math_round에서 받아온 값

		if (menuCode == 0)
		{
			//First_Round(); //1단계 게임

			trueorfalse = First_Round(); //1단계 게임
			Check(trueorfalse);

			trueorfalse = Second_Round(); //2단계 게임
			Check(trueorfalse);

		}
		else if (menuCode == 1)
			infoDraw(); //게임정보
		else if (menuCode == 2)
		{
			//순위보기
		}
		else if (menuCode == 3)
		{
			return 0; //게임종료
		}
		

		
	}
	return 0;
}