#include "main.h"
void Check(int checknum) {
	if (checknum == 0) {
		printf("\n�ٽ� �ϱ�");
		printf("\nǮ�� ����\n");
		system("PAUSE");
	}else if (checknum == 1) {
		printf("\n�Ѿ��");
		printf("\nǮ�� ����\n");
		system("PAUSE");
	}
}

int main()
{
	init(); //�ܼ�â ũ������ (����,����)
	while (1)
	{
		titleDraw(); //Ÿ��Ʋ
		int menuCode = menuDraw(); //�޴�
		int trueorfalse = 0; //math_round���� �޾ƿ� ��

		if (menuCode == 0)
		{
			//First_Round(); //1�ܰ� ����

			trueorfalse = First_Round(); //1�ܰ� ����
			Check(trueorfalse);

			trueorfalse = Second_Round(); //2�ܰ� ����
			Check(trueorfalse);

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