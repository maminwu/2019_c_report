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

			init_2();
			new_name(0, 0);
			FILE* fp = NULL;
			//PlaySound(TEXT(BGMPATH), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP); // 배경음악 재생

			int i;
			float gap;
			time_t startTime = 0, endTime = 0;
			gotoxy(0, 27); printf("시간 측정을 시작합니다.");
			Sleep(500);
			startTime = clock();
			for (i = 1; i <= 100000000; i++) {}

			
			while (1)
			{
				
				switch (roundcheck) {
				case 1:
					system("cls");
					trueorfalse = First_Round(); //1단계 게임
					sol_to_main = Check(trueorfalse);
					if (sol_to_main == 2)
						roundcheck += 1;
					else if (sol_to_main == 1 || sol_to_main == 3)
					{
						printf("\n\n\n괄호 안의 수식은 어떤 경우에서든지 우선순위가 가장 높습니다.\n\n\n");
						if (sol_to_main == 3)
							roundcheck += 1;
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
						if (sol_to_main == 3)
							roundcheck += 1;
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
						if (sol_to_main == 3)
							roundcheck += 1;
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
						printf("\n\n\n(좌표가 주어졌을 때 삼각형의 넓이) = | 1/2( p1x p3x p2x p1x )|\n");
						printf("                          ( p1y p3y p2y p1x )\n\n\n");

						if (sol_to_main == 3)
							system("cls");
					}
				default:
					break;
				}
				break;
			}
	
			endTime = clock();
			gap = (float)(endTime - startTime) / (CLOCKS_PER_SEC);


			fp = fopen("Nickname.txt", "a"); // 점수 저장 파일 열기
			if (fp == NULL) // 파일 열기 오류
				printf("점수 기록 파일 작성 실패!\n\n");
			else
			{
				fprintf(fp, "%.2lf초\n\n", gap); // 시간 기록
				fclose(fp);
			}


			gotoxy(15, 15); printf("시간 측정이 끝났습니다.");
			gotoxy(15, 16); printf("측정시간 : %.2f 초\n\n", gap);
			//PlaySound(NULL, 0, 0);

			Sleep(1000);
			printf("메인화면으로 이동합니다.");
			system("PAUSE");
			init();
			titleDraw();
			
		}

		else if (menuCode == 1)
		{
			init_2();
			Help(); //게임정보
		}
		else if (menuCode == 2)
		{
			viewlog(); // 점수 보기 함수
			
		}
		else if (menuCode == 3)
		{
			return 0; //게임종료
		}
	}
	return 0;
}

