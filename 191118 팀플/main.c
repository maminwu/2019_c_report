#include "main.h"


int main()
{
	init(); //콘솔창 크기조정 (가로,세로)
	while (1)
	{
		titleDraw(); //타이틀
		int menuCode = menuDraw(); //메뉴
		int trueorfalse = 0; //math_round에서 받아온 값
		int sol_to_main = 0;
		int roundcheck = 1;

		//Check(trueorfalse);
		
		if (menuCode == 0)
		{
			new_name(0, 0);
			while (1) {

				switch (roundcheck) {
				case 1:
					system("cls");
					trueorfalse= First_Round(); //1단계 게임
					sol_to_main = Check(trueorfalse);
					if (sol_to_main == 2)
						roundcheck += 1;
					else if (sol_to_main == 1 || sol_to_main == 3)
					{

					}
					continue;
					break;
				case 2:
					system("cls");
					trueorfalse = Second_Round(); //2단계 게임
					sol_to_main = Check(trueorfalse);
					if (sol_to_main == 2)
						roundcheck += 1;
					continue;
					break;
				case 3:
					system("cls");
					trueorfalse = Third_Round(); //3단계 게임
					sol_to_main = Check(trueorfalse);
					if (sol_to_main == 2)
						roundcheck += 1;
					continue;
					break;
				case 4:
					system("cls");
					trueorfalse = Forth_Round(); //4단계 게임
					sol_to_main = Check(trueorfalse);
					if (sol_to_main == 2)
						roundcheck += 1;
					continue;
					break;
				}
			}
			
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

