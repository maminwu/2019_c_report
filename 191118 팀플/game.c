#include "game.h"

int keyControl()
{
	char temp = getch(); //getch()�Լ��� ���;ȴ����� Ű�� ������ �ٷ� ��ȯ
	//Ű�� �ԷµǸ� �ٷ� temp������ �ӽ÷� ���� �����ϰ� if������ Ȯ�� �ش繮�� ������ ����ȯ

	if (temp == 'w' || temp == 'W' || temp == 72) {
		return UP;
	}
	else if (temp == 's' || temp == 'S' || temp == 80) {
		return DOWN;
	}
	else if (temp == 'a' || temp == 'A' || temp == 75) {
		return LEFT;
	}
	else if (temp == 'd' || temp == 'D' || temp == 77) {
		return RIGHT;
	}
	else if (temp == 13) {
		return SUBMIT;
	}
}

void titleDraw(void)
{
	system("cls");
	int x = 10; //Ÿ��Ʋ ǥ�� x��ǥ
	int y = 20; //Ÿ��Ʋ ǥ�� y��ǥ
	setcolor(6,0); gotoxy(x, y + 0); printf("ooo        ooooo        .o.       ooooooooooooo  ooooo   ooooo            .oooooo.          .o.        ooo        ooooo  oooooooooooo"); Sleep(100); //���ѳ����
	gotoxy(x, y + 1); printf("`88.       .888'       .888.      8'   888   `8  `888'   `888'           d8P'  `Y8b        .888.       `88.       .888'  `888'     `8"); Sleep(100);
	gotoxy(x, y + 2); printf(" 888b     d'888       .8'888.          888        888     888           888               .8'888.       888b     d'888    888 "); Sleep(100);
	gotoxy(x, y + 3); printf(" 8 Y88. .P  888      .8' `888.         888        888ooooo888           888   ooooo      .8' `888.      8 Y88. .P  888    888ooooo8 "); Sleep(100);
	gotoxy(x, y + 4); printf(" 8 `888'    888    .88oooo8888.        888        888     888           888      88     .88oooo8888.    8  `888'   888    888    "); Sleep(100);
	gotoxy(x, y + 5); printf(" 8   Y      888   .8o'     `888.       888        888     888           `88.    .88'   .8o'     `888.   8    Y     888    888       o "); Sleep(100);
	gotoxy(x, y + 6); printf("o8o        o888o  o88o     o8888o     o888o      o888o   o888o           `Y8bood8P'   o88o     o8888o  o8o        o888o  o888ooooood8 "); Sleep(100);


}

int menuDraw(void)
{
	setcolor(7, 0); gotoxy(110, 30); printf("- Made by. ���濬, ���ο�, ������"); //���

	int x = 70;
	int y = 32;


	setcolor(7, 0); gotoxy(x - 2, y); printf("> ���� ����"); //-2�ϴ� ������ >�� �־�ߵǼ� 
	gotoxy(x, y + 1); printf("���� ����");
	gotoxy(x, y + 2); printf("���� ����");
	gotoxy(x, y + 3); printf("���� ����");

	int new_name(int x, int y);

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

int new_name(int x, int y) //������̸� �Է�
{
	system("cls");

	struct data {
		int number;
		int age;
		char name[10];
	};
	struct data student;

	setcolor(6, 0); gotoxy(x + 10, y +5 ); printf(" [ ĳ �� �� �� �� ] ");


	setcolor(6, 0); gotoxy(x + 10, y + 8); printf(" [ �й��� �����ּ��� ]");
	setcolor(7, 0); gotoxy(x + 10, y + 9); printf(" �й� : ");
	scanf("%d", &student.number);

	setcolor(6, 0); gotoxy(x + 10, y + 11); printf(" [ ���̸� �����ּ��� ]");
	setcolor(7, 0); gotoxy(x + 10, y + 12); printf(" ���� : ");
	scanf("%d", &student.age);

	setcolor(6, 0); gotoxy(x + 10, y + 14); printf(" [ �̸��� �����ּ��� ]");
	setcolor(7, 0); gotoxy(x + 10, y + 15); printf(" �̸� : ");
	scanf("%s", student.name);

	setcolor(6, 0); gotoxy(x + 10, y + 17); printf("[ �����Ǿ����ϴ� ]\n\n");

	system("PAUSE");

	

	FILE* fp;
	fp = fopen("Nickname.txt", "a");
	if (fp != NULL) 
	{
		fprintf(fp, "%d/ %d/ %s\n", student.number,student.age, student.name);
	}
	fclose(fp);

	
}

void Help()
{
	system("cls");

	int x = 35;
	int y = 18;

	gotoxy(x, y); printf("    �־��� ������ Ǫ�ÿ�. �ܰ�� �� 7�ܰ��Դϴ�.");
	gotoxy(x, y + 5); printf("-> ����� �̸��� �Է��ϸ�, ������ �ö� ���ֽ��ϴ�.");
	gotoxy(x, y + 6); printf("-> ���� Ʋ���� ��, 5�ʰ� ����ǰ�, ��ȸ�� �� ���� �پ��� �Ǹ�, 7�� ���н� �ڵ�����˴ϴ�.");
	gotoxy(x, y + 7); printf("-> ���� Ǯ�� ���� Ǯ�̴� 1�� �� ��������, ���� ���� �Ŀ��� Ǯ�̸� ���Ǿ��� ���������մϴ�.");
	gotoxy(x, y + 8); printf("-> ������ ����Ű�� ���͸� �̿��մϴ�. ( w(��) a(��) s(�Ʒ�) d(��)�� �����մϴ�. �Է��� �ȵ� �� ��/������ ����� )");
	gotoxy(x, y + 11); printf("   **  ���͸� ������ ����ȭ������ �̵��մϴ�. **");

	while (1)
	{
		if (keyControl() == SUBMIT)
			break;
	}
}

int heart(int heartnum)
{
	setcolor(7, 0); printf("����� :");
	switch (heartnum) 
	{
	case 7:
		setcolor(5, 0); printf("�� �� �� �� �� �� ��\n");
		break;
	case 6:
		setcolor(5, 0); printf("�� �� �� �� �� �� ��\n");
		break;
	case 5:
		setcolor(5, 0); printf("�� �� �� �� �� �� ��\n");
		break;
	case 4:
		setcolor(5, 0); printf("�� �� �� �� �� �� ��\n");
		break;
	case 3:
		setcolor(5, 0); printf("�� �� �� �� �� �� ��\n");
		break;
	case 2:
		setcolor(5, 0); printf("�� �� �� �� �� �� ��\n");
		break;
	case 1:
		setcolor(5, 0); printf("�� �� �� �� �� �� ��\n");
		break;
	}
	printf("\n");
}

void skull(int skullnum){
	int skullswitch = skullnum;
	if (skullswitch == 2|| skullswitch == 3|| skullswitch == 4|| skullswitch == 5 || skullswitch == 6 || skullswitch == 7)
	{
		gotoxy(50, 1); printf("                           ,--.\n");
		gotoxy(50, 2); printf("                          {    }\n");
		gotoxy(50, 3); printf("                          K,   }\n");
		gotoxy(50, 4); printf("                         /  `Y`\n");
	}
	if (skullswitch == 3 || skullswitch == 4 || skullswitch == 5 || skullswitch == 6 || skullswitch == 7)
	{
		gotoxy(50, 5); printf("	                  /   /\n");
		gotoxy(50, 6); printf("                   {_'-K.__/\n");
		gotoxy(50, 7); printf("                     `/-.__L._\n");
		gotoxy(50, 8); printf("                     /  ' /`\_}\n");
	}
	if (skullswitch == 4 || skullswitch == 5 || skullswitch == 6 || skullswitch == 7)
	{
		gotoxy(50, 9); printf("                    /  ' /\n");
		gotoxy(50, 10); printf("            ____   /  ' /\n");
		gotoxy(50, 11); printf("     ,-'~~~~    ~~/  ' /_\n");
		gotoxy(50, 12); printf("   ,'             ``~~~%%',\n");
	}
	if (skullswitch == 5 || skullswitch == 6 || skullswitch == 7)
	{	
		gotoxy(50, 13); printf("  (                     %  Y\n");
		gotoxy(50, 14); printf(" {                      %% I\n");
		gotoxy(50, 15); printf("{      -                 %  `.\n");
		gotoxy(50, 16); printf("|       ',                %  )\n");
	}
	if (skullswitch == 6 || skullswitch == 7)
	{
		gotoxy(50, 17); printf("|        |   ,..__      __. Y\n");
		gotoxy(50, 18); printf("|    .,_./  Y ' / ^Y   J   )|\n");
		gotoxy(50, 19); printf("\\           |' /   |   |   ||\n");
		gotoxy(50, 20); printf(" \\          L_/    . _ (_,.'(\n");

	}
	if (skullswitch == 7)
	{
		gotoxy(50, 21); printf("  \\,   ,      ^^""' / |      )\n");
		gotoxy(50, 22); printf("    \\_  \\          /,L]     /\n");
		gotoxy(50, 23); printf("      '-_`-,       ` `   ./`\n");
	}

	
	
	
}
void viewlog()
{
	system("cls");

	char buffer[10000] = {0, }; 
	//������ ���� �� ����� �ӽ� ����(����)�� �����ؾ� �ϴµ� 
	//fread �Լ��� ����� ���� char �迭�� ������ �� �ݵ�� 0���� �ʱ�ȭ�ؾ� �Ѵ�.
	//(char �����Ϳ� ���� �޸𸮸� �Ҵ��� �� 0���� �ʱ�ȭ�ص� �ȴ�)

	FILE* fp = fopen("Nickname.txt", "r");

	//fgets(buffer, sizeof(buffer), fp); �̰� �ٹٲ޹��������� �� �������� �о���� ����
	fread(buffer, sizeof(buffer), 1, fp);
	printf("%s\n\n", buffer);
	fclose(fp);

	printf("\n\n   **  ���͸� ������ ����ȭ������ �̵��մϴ�. **");
	while (1)
	{
		if (keyControl() == SUBMIT)
			break;
	}
}