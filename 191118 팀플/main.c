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
						printf("\n\n\n괄호 안의 수식은 어떤 경우에서든지 우선순위가 가장 높습니다.\n\n\n");
						system("PAUSE");
					}
					continue;
					break;
				case 2:
					system("cls");
					trueorfalse = Second_Round(); //2단계 게임
					sol_to_main = Check(trueorfalse);
					if (sol_to_main == 2)
						roundcheck += 1;
					else if (sol_to_main == 1 || sol_to_main == 3)
					{
						printf("\n\n\n0! = 1 이고, n! = n*(n-1)*(n-2)*(n-3)'''*1 입니다.\n\n\n");
						system("PAUSE");
					}
					continue;
					break;
				case 3:
					system("cls");
					trueorfalse = Third_Round(); //3단계 게임
					sol_to_main = Check(trueorfalse);
					if (sol_to_main == 2)
						roundcheck += 1;
					else if (sol_to_main == 1 || sol_to_main == 3)
					{
						printf("\n\n\n(원의 넓이) = (반지름) * (반지름) * 원주율(3.14)\n\n\n");
						system("PAUSE");
					}
					continue;
					break;
				case 4:
					system("cls");
					trueorfalse = Forth_Round(); //4단계 게임
					sol_to_main = Check(trueorfalse);
					if (sol_to_main == 2)
						roundcheck += 1;
					else if (sol_to_main == 1 || sol_to_main == 3)
					{
						printf("\n\n\n(좌표가 주어졌을 때 삼각형의 넓이) = | 1/2(어쩌고저쩌고) |(\n\n\n");
						system("PAUSE");
					}
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

