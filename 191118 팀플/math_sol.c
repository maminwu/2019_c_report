#include "math_sol.h"

int Check(int checknum) //����,���信 ���� ������ ������ �ϱ� 
{
	int x = 7, y = 19;

	if (checknum == 0) //�����Դϴ�.
	{
		int checknumber = checknum;
		setcolor(7, 0); gotoxy(x - 2, y); printf("> �ٽ� �ϱ�");
		gotoxy(x, y + 1); printf("Ǯ�� ����\n\n");

		while (1){
			int n = keyControl(); 
			switch (n){
			case UP: {
				if (y > 19) //��� ���ö󰡰�
				{
					gotoxy(x - 2, y); //'>'�� ��ĭ ������ ����Ϸ���
					printf(" "); //���� ��ġ �����
					gotoxy(x - 2, --y); //����� ���� �̵��� ��ġ�� �̵�
					printf(">"); //'>'����
				}
				break; }
			case DOWN: {
				if (y < 20) //��� ����������
				{
					gotoxy(x - 2, y);
					printf(" ");
					gotoxy(x - 2, ++y);
					printf(">");
				}
				break; }
			case SUBMIT:{ 
				return y - 19; 
			}
			}
		}
		system("PAUSE");
		
	}
	else if (checknum == 1) //�����Դϴ�.
	{
		int checknumber = checknum;
		setcolor(7, 0); gotoxy(x - 2, y); printf("> ���� ������");
		gotoxy(x, y + 1); printf("Ǯ�� ����\n\n");

		while (1)
		{
			int n = keyControl(); //Ű�����̺�Ʈ�� Ű������ �޾ƿ���
			switch (n)
			{
			case UP: {
				if (y > 19) //��� ���ö󰡰�
				{
					gotoxy(x - 2, y); //'>'�� ��ĭ ������ ����Ϸ���
					printf(" "); //���� ��ġ �����
					gotoxy(x - 2, --y); //����� ���� �̵��� ��ġ�� �̵�
					printf(">"); //'>'����
				}
				break; }
			case DOWN: {
				if (y <20) //��� ����������
				{
					gotoxy(x - 2, y);
					printf(" ");
					gotoxy(x - 2, ++y);
					printf(">");
				}
				break; }
			case SUBMIT:
			{ 
				return y - 17;
			}
			}
		}
	}
}
