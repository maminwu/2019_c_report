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
			new_name(0, 0);
			while (1) {

				switch (roundcheck) {
				case 1:
					system("cls");
					trueorfalse= First_Round(); //1�ܰ� ����
					sol_to_main = Check(trueorfalse);
					if (sol_to_main == 2)
						roundcheck += 1;
					else if (sol_to_main == 1 || sol_to_main == 3)
					{
						printf("\n\n\n��ȣ ���� ������ � ��쿡������ �켱������ ���� �����ϴ�.\n\n\n");
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
						printf("\n\n\n(��ǥ�� �־����� �� �ﰢ���� ����) = | 1/2(��¼����¼��) |(\n\n\n");
						system("PAUSE");
					}
					continue;
					break;
				}
			}
			
		}

		else if (menuCode == 1)
			infoDraw(); //��������
		else if (menuCode == 2)
		{
			//��������
		}
		else if (menuCode == 3)
		{
			return 0; //��������
		}



	}
	return 0;
}

