#include "math_sol.h"

int Check(int checknum) //����,���信 ���� ������ ������ �ϱ� 
{

	int x = 7, y = 7;
	
	if (checknum == 0) //�����Դϴ�.
	{
		int x = 7, y = 7;

		gotoxy(x - 2, y); printf("> �ٽ� �ϱ�"); //0
		gotoxy(x, y + 1); printf("Ǯ�� ����\n\n"); //1

		while (1)
		{
			int n = keyControl(); //Ű�����̺�Ʈ�� Ű������ �޾ƿ���
			switch (n)
			{
			case UP: {
				if (y > 7) //��� ���ö󰡰�
				{
					gotoxy(x - 2, y); //'>'�� ��ĭ ������ ����Ϸ���
					printf(" "); //���� ��ġ �����
					gotoxy(x - 2, --y); //����� ���� �̵��� ��ġ�� �̵�
					printf(">"); //'>'����
				}
				break; }
			case DOWN: {
				if (y < 8) //��� ����������
				{
					gotoxy(x - 2, y);
					printf(" ");
					gotoxy(x - 2, ++y);
					printf(">");
				}
				break; }
			case SUBMIT:
			{ return y - 7; }

			}
		}
		system("PAUSE");
		
	}

	else if (checknum == 1) //�����Դϴ�.
	{

		gotoxy(x - 2, y); printf("> ���� ������");
		gotoxy(x, y + 1); printf("Ǯ�� ����\n\n");

		while (1)
		{
			int n = keyControl(); //Ű�����̺�Ʈ�� Ű������ �޾ƿ���
			switch (n)
			{
			case UP: {
				if (y > 7) //��� ���ö󰡰�
				{
					gotoxy(x - 2, y); //'>'�� ��ĭ ������ ����Ϸ���
					printf(" "); //���� ��ġ �����
					gotoxy(x - 2, --y); //����� ���� �̵��� ��ġ�� �̵�
					printf(">"); //'>'����
				}
				break; }
			case DOWN: {
				if (y < 8) //��� ����������
				{
					gotoxy(x - 2, y);
					printf(" ");
					gotoxy(x - 2, ++y);
					printf(">");
				}
				break; }
			case SUBMIT:
			{ return y - 7;}
			}
		}
		system("PAUSE");
	}
}
