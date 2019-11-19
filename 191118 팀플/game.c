#include "game.h"

//ignore ���� �߰�
/* �� ��  �� �� */

int keyControl()
{
	char temp = getch(); //getch()�Լ��� ���;ȴ����� Ű�� ������ �ٷ� ��ȯ
	//Ű�� �ԷµǸ� �ٷ� temp������ �ӽ÷� ���� �����ϰ� if������ Ȯ�� �ش繮�� ������ ����ȯ 

	if (temp == 'w' || temp == 'W')
		return UP;
	else if (temp == 'a' || temp == 'A')
		return LEFT;
	else if (temp == 's' || temp == 'S')
		return DOWN;
	else if (temp == 'd' || temp == 'D')
		return RIGHT;
	else if (temp == ' ') // �����̽��ٰ� ���ù�ư
		return SUBMIT;
}

void titleDraw(void)
{
	system("cls");
	int x = 10; //Ÿ��Ʋ ǥ�� x��ǥtest
	int y = 20; //Ÿ��Ʋ ǥ�� y��ǥ

	gotoxy(x, y + 0); printf("ooo        ooooo        .o.       ooooooooooooo  ooooo   ooooo            .oooooo.          .o.        ooo        ooooo  oooooooooooo"); Sleep(100);
	gotoxy(x, y + 1); printf("`88.       .888'       .888.      8'   888   `8  `888'   `888'           d8P'  `Y8b        .888.       `88.       .888'  `888'     `8"); Sleep(100);
	gotoxy(x, y + 2); printf(" 888b     d'888       .8'888.          888        888     888           888               .8'888.       888b     d'888    888 "); Sleep(100);
	gotoxy(x, y + 3); printf(" 8 Y88. .P  888      .8' `888.         888        888ooooo888           888   ooooo      .8' `888.      8 Y88. .P  888    888ooooo8 "); Sleep(100);
	gotoxy(x, y + 4); printf(" 8 `888'    888    .88oooo8888.        888        888     888           888      88     .88oooo8888.    8  `888'   888    888    "); Sleep(100);
	gotoxy(x, y + 5); printf(" 8   Y      888   .8o'     `888.       888        888     888           `88.    .88'   .8o'     `888.   8    Y     888    888       o "); Sleep(100);
	gotoxy(x, y + 6); printf("o8o        o888o  o88o     o8888o     o888o      o888o   o888o           `Y8bood8P'   o88o     o8888o  o8o        o888o  o888ooooood8 "); Sleep(100);
}
int menuDraw(void)
{
	gotoxy(110, 30); printf("- Made by. ���濬, ���ο�, ������");

	int x = 70;
	int y = 32;

	gotoxy(x - 2, y); printf("> ���� ����999"); //-2�ϴ� ������ >�� �־�ߵǼ�
	gotoxy(x, y + 1); printf("���� ����");
	gotoxy(x, y + 2); printf("���� ����");
	gotoxy(x, y + 3); printf("���� ����");

	while (1) //���ѹݺ�
	{
		int n = keyControl(); //Ű�����̺�Ʈ�� Ű������ �޾ƿ���
		switch (n)
		{
		case UP: {
			if (y > 32) //��� ���ö󰡰�
			{
				gotoxy(x - 2, y); //'>'�� ��ĭ ������ ����Ϸ���
				printf(" "); //���� ��ġ �����
				gotoxy(x - 2, --y); //����� ���� �̵��� ��ġ�� �̵�
				printf(">"); //'>'����
			}
			break; }
		case DOWN: {
			if (y < 35) //��� ����������
			{
				gotoxy(x - 2, y);
				printf(" ");
				gotoxy(x - 2, ++y);
				printf(">");
			}
			break; }
		case SUBMIT: {
			return y - 32; } //�����̽��� ���ð�� ������ġ 32�̴ϱ� 0123 ���� ������
		}
	}
}
void infoDraw()
{
	system("cls");

	int x = 35;
	int y = 18;

	gotoxy(x, y); printf("    �־��� ������ Ǫ�ÿ�. �ܰ�� �� 7�ܰ��Դϴ�.");
	gotoxy(x, y + 5); printf("-> ����� �̸��� �Է��ϸ�, ������ �ö� ���ֽ��ϴ�.");
	gotoxy(x, y + 6); printf("-> ��ȸ�� 3�� �־����ϴ�. ���� Ʋ���� ��, ��ȸ�� �� ���� �پ��� �Ǹ�, 3�� ���н� �ڵ�����˴ϴ�.");
	gotoxy(x, y + 7); printf("-> ���� Ǯ�� ���� Ǯ�̴� 1�� �� ��������, ���� ���� �Ŀ��� Ǯ�̸� ���Ǿ��� ���������մϴ�.");
	gotoxy(x, y + 11); printf("   **  �����̽��ٸ� ������ ����ȭ������ �̵��մϴ�. **");

	while (1)
	{
		if (keyControl() == SUBMIT)
			break;
	}
}

void user(void)
{
	int x = 5;
	int y = 5;
	char user[100];

	gotoxy(x + 5, y + 5); printf("������̸� �Է� : ");
	gotoxy(x + 5, y + 6); scanf("%s", user);
}
