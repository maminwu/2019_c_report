#include "math_sol.h"

int Check(int checknum) //����,���信 ���� ������ ������ �ϱ� 
{

	int x = 7, y = 10;


	if (checknum == 0) //�����Դϴ�.
	{
		int checknumber = checknum;
		gotoxy(x - 2, y); printf("> �ٽ� �ϱ�");
		gotoxy(x, y + 1); printf("Ǯ�� ����\n\n");

		while (1)
		{
			int n = keyControl(); //Ű�����̺�Ʈ�� Ű������ �޾ƿ���
			switch (n)
			{
			case UP: {
				if (y > 10) //��� ���ö󰡰�
				{
					gotoxy(x - 2, y); //'>'�� ��ĭ ������ ����Ϸ���
					printf(" "); //���� ��ġ �����
					gotoxy(x - 2, --y); //����� ���� �̵��� ��ġ�� �̵�
					printf(">"); //'>'����
				}
				break; }
			case DOWN: {
				if (y < 11) //��� ����������
				{
					gotoxy(x - 2, y);
					printf(" ");
					gotoxy(x - 2, ++y);
					printf(">");
				}
				break; }
			case SUBMIT:
			{ 
				return y - 10; 
			}

			}
		}
		system("PAUSE");
		
	}
	else if (checknum == 1) //�����Դϴ�.
	{
		int checknumber = checknum;
		gotoxy(x - 2, y); printf("> ���� ������");
		gotoxy(x, y + 1); printf("Ǯ�� ����\n\n");

		while (1)
		{
			int n = keyControl(); //Ű�����̺�Ʈ�� Ű������ �޾ƿ���
			switch (n)
			{
			case UP: {
				if (y > 10) //��� ���ö󰡰�
				{
					gotoxy(x - 2, y); //'>'�� ��ĭ ������ ����Ϸ���
					printf(" "); //���� ��ġ �����
					gotoxy(x - 2, --y); //����� ���� �̵��� ��ġ�� �̵�
					printf(">"); //'>'����
				}
				break; }
			case DOWN: {
				if (y < 11) //��� ����������
				{
					gotoxy(x - 2, y);
					printf(" ");
					gotoxy(x - 2, ++y);
					printf(">");
				}
				break; }
			case SUBMIT:
			{ 
				return y - 10;
			}
			}
		}
		
	}
}
