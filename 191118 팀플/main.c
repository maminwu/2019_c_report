#include "main.h"


int main()
{
	init(); //�ܼ�â ũ������ (����,����)
	while (1)
	{
		
		titleDraw(); //Ÿ��Ʋ
		int menuCode = menuDraw(); //�޴�
		int trueorfalse = 0; //math_round���� �޾ƿ� ��
		int sol_to_main = 0;
		int roundcheck = 1;

		//Check(trueorfalse);
		
		if (menuCode == 0)
		{

			init_2();
			new_name(0, 0);
			FILE* fp = NULL;
			//PlaySound(TEXT(BGMPATH), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP); // ������� ���

			int i;
			float gap;
			time_t startTime = 0, endTime = 0;
			gotoxy(0, 27); printf("�ð� ������ �����մϴ�.");
			Sleep(500);
			startTime = clock();
			for (i = 1; i <= 100000000; i++) {}

			
			while (1)
			{
				
				switch (roundcheck) {
				case 1:
					system("cls");
					trueorfalse = First_Round(); //1�ܰ� ����
					sol_to_main = Check(trueorfalse);
					if (sol_to_main == 2)
						roundcheck += 1;
					else if (sol_to_main == 1 || sol_to_main == 3)
					{
						printf("\n\n\n��ȣ ���� ������ � ��쿡������ �켱������ ���� �����ϴ�.\n\n\n");
						if (sol_to_main == 3)
							roundcheck += 1;
						system("PAUSE");
					}
					continue;
					break;
				case 2:
					system("cls");
					trueorfalse = Second_Round(); //2�ܰ� ���� 
					sol_to_main = Check(trueorfalse);
					if (sol_to_main == 2)
						roundcheck += 1;
					else if (sol_to_main == 1 || sol_to_main == 3)
					{
						printf("\n\n\n0! = 1 �̰�, n! = n*(n-1)*(n-2)*(n-3)'''*1 �Դϴ�.\n\n\n");
						if (sol_to_main == 3)
							roundcheck += 1;
						system("PAUSE");
					}
					continue;
					break;
				case 3:
					system("cls");
					trueorfalse = Third_Round(); //3�ܰ� ����
					sol_to_main = Check(trueorfalse);
					if (sol_to_main == 2)
						roundcheck += 1;
					else if (sol_to_main == 1 || sol_to_main == 3)
					{
						printf("\n\n\n(���� ����) = (������) * (������) * ������(3.14)\n\n\n");
						if (sol_to_main == 3)
							roundcheck += 1;
						system("PAUSE");
					}
					continue;
					break;
				case 4:
					system("cls");
					trueorfalse = Forth_Round(); //4�ܰ� ����
					sol_to_main = Check(trueorfalse);
					if (sol_to_main == 2)
						roundcheck += 1;
					else if (sol_to_main == 1 || sol_to_main == 3)
					{
						printf("\n\n\n(��ǥ�� �־����� �� �ﰢ���� ����) = | 1/2( p1x p3x p2x p1x )|\n");
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


			fp = fopen("Nickname.txt", "a"); // ���� ���� ���� ����
			if (fp == NULL) // ���� ���� ����
				printf("���� ��� ���� �ۼ� ����!\n\n");
			else
			{
				fprintf(fp, "%.2lf��\n\n", gap); // �ð� ���
				fclose(fp);
			}


			gotoxy(15, 15); printf("�ð� ������ �������ϴ�.");
			gotoxy(15, 16); printf("�����ð� : %.2f ��\n\n", gap);
			//PlaySound(NULL, 0, 0);

			Sleep(1000);
			printf("����ȭ������ �̵��մϴ�.");
			system("PAUSE");
			init();
			titleDraw();
			
		}

		else if (menuCode == 1)
		{
			init_2();
			Help(); //��������
		}
		else if (menuCode == 2)
		{
			viewlog(); // ���� ���� �Լ�
			
		}
		else if (menuCode == 3)
		{
			return 0; //��������
		}
	}
	return 0;
}

