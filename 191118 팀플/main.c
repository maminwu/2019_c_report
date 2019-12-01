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
		int heartnum = 7;

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

				switch (roundcheck)
				{
				case 1:
					system("cls");
					heart(heartnum);
					trueorfalse = First_Round(); //1단계 게임
					sol_to_main = Check(trueorfalse);
					if (sol_to_main == 2)
					{
						roundcheck += 1;
					}
					else if (sol_to_main == 1 || sol_to_main == 3)
					{
						printf("\n\n\n괄호 안의 수식은 어떤 경우에서든지 우선순위가 가장 높습니다.\n\n\n");
						if (sol_to_main == 3)
							roundcheck += 1;
						system("PAUSE");

					}
					else if (sol_to_main == 0)
					{
						heartnum += -1;
						if (heartnum < 1)
						{
							system("cls");
							gotoxy(5, 5); printf("2초 뒤 게임이 종료됩니다.");
							Sleep(3000);
							break;
						}
					}
					continue;
					break;

				case 2:
					system("cls");
					heart(heartnum);
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
					else if (sol_to_main == 0)
					{
						heartnum += -1;
						if (heartnum < 1)
						{
							system("cls");
							gotoxy(5, 5); printf("2초 뒤 게임이 종료됩니다.");
							Sleep(3000);
							break;
						}
					}
					continue;
					break;

				case 3:
					system("cls");
					heart(heartnum);
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
					else if (sol_to_main == 0)
					{
						heartnum += -1;
						if (heartnum < 1)
						{
							system("cls");
							gotoxy(5, 5); printf("2초 뒤 게임이 종료됩니다.");
							Sleep(3000);
							break;
						}
					}
					continue;
					break;

				case 4:
					system("cls");
					heart(heartnum);
					trueorfalse = Forth_Round(); //4단계 게임
					sol_to_main = Check(trueorfalse);
					if (sol_to_main == 2)
						roundcheck += 1;
					else if (sol_to_main == 1 || sol_to_main == 3)
					{
						printf("\n\n\n일차함수 y=Mx+b 일때, (A,B)를 지나므로 B=M*A+b로 나타낼 수있다.\n");
						printf("따라서 y절편 b= B-M*A 로 구할 수있다.\n\n\n");
						if (sol_to_main == 3)
							roundcheck += 1;
						system("PAUSE");
					}
					else if (sol_to_main == 0)
					{
						heartnum += -1;
						if (heartnum < 1)
						{
							system("cls");
							gotoxy(5, 5); printf("2초 뒤 게임이 종료됩니다.");
							Sleep(3000);
							break;
						}
					}
					continue;
					break;

				case 5:
					system("cls");
					heart(heartnum);
					trueorfalse = Fifth_Round(); //5단계 게임
					sol_to_main = Check(trueorfalse);
					if (sol_to_main == 2)
						roundcheck += 1;
					else if (sol_to_main == 1 || sol_to_main == 3)
					{
						printf("\n\n\n월요일=1, 화요일=2, 수요일=3, 목요일=4, 금요일=5, 토요일=6, 일요일=7\n\n\n");
						if (sol_to_main == 3)
							roundcheck += 1;
						system("PAUSE");
					}
					else if (sol_to_main == 0)
					{
						heartnum += -1;
						if (heartnum < 1)
						{
							system("cls");
							gotoxy(5, 5); printf("2초 뒤 게임이 종료됩니다.");
							Sleep(3000);
							break;
						}
					}
					continue;
					break;

				case 6:
					system("cls");
					heart(heartnum);
					trueorfalse = Sixth_Round(); //6단계 게임
					sol_to_main = Check(trueorfalse);
					if (sol_to_main == 2)
						roundcheck += 1;
					else if (sol_to_main == 1 || sol_to_main == 3)
					{
						printf("\n\n\n점수/학생 수이므로 (4 * 4.2 + 2 * 4.4 + 3 * 4.3) / 3로 구할 수있다.\n\n\n");
						if (sol_to_main == 3)
							roundcheck += 1;
						system("PAUSE");
					}
					else if (sol_to_main == 0)
					{
						heartnum += -1;
						if (heartnum < 1)
						{
							system("cls");
							gotoxy(5, 5); printf("2초 뒤 게임이 종료됩니다.");
							Sleep(3000);
							break;
						}
					}
					continue;
					break;
				case 7:
					system("cls");
					heart(heartnum);
					trueorfalse = Seventh_Round(); //7단계 게임
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
					else if (sol_to_main == 0)
					{
						heartnum += -1;
						if (heartnum < 1)
						{
							system("cls");
							gotoxy(5, 5); printf("2초 뒤 게임이 종료됩니다.");
							Sleep(3000);
							break; 
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
					fprintf(fp, "%.2lf초\n", gap); // 시간 기록
					fprintf(fp, "%d 단계\n\n", roundcheck); //단계 기록
					fclose(fp);
				}


				gotoxy(15, 15); printf("시간 측정이 끝났습니다.");
				gotoxy(15, 16); printf("측정 시간 : %.2f 초", gap);
				gotoxy(15, 17); printf("도달 단계 : %d단계\n\n", roundcheck);
				//PlaySound(NULL, 0, 0);

				Sleep(1000);
				printf("메인화면으로 이동합니다.");
				system("PAUSE");
				init();
				titleDraw();
				break;
			}
		}

		else if (menuCode == 1)
		{
			Help(); //게임 정보 함수
		}
		else if (menuCode == 2)
		{
			init_2();
			viewlog(); // 점수 보기 함수
			init();

		}
		else if (menuCode == 3)
		{
			return 0; //게임종료
		}
	}
	return 0;
}


