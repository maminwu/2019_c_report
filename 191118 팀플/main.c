#include "main.h"


int main()
{
	init(); //�ܼ�â ũ������ (����,����)
	while (1)
	{
		titleDraw(); //Ÿ��Ʋ
		int menuCode = menuDraw(); //�޴�
		int trueorfalse = -1; //math_round���� �޾ƿ� ��
		int sol_to_main = 0;
		Check(trueorfalse);

		if (menuCode == 0)
		{
			new_name(0,0); 
			while (1) {

				switch (sol_to_main) {
				case 0:
					trueorfalse = First_Round(); //1�ܰ� ����
					Check(trueorfalse);
					sol_to_main = Check();
					continue;
					break;
				case 1:
					trueorfalse = Second_Round(); //2�ܰ� ����
					Check(trueorfalse);
					continue;
					break;
				}
			}
			/*trueorfalse = First_Round(); //1�ܰ� ����
			Check(trueorfalse);

			trueorfalse = Second_Round(); //2�ܰ� ����
			Check(trueorfalse);

			trueorfalse = Third_Round(); //2�ܰ� ����
			Check(trueorfalse);

			trueorfalse = Forth_Round(); //2�ܰ� ����
			Check(trueorfalse);
			*/
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