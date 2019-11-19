#include "game.h"

//ignore 파일 추가
/* 함 수  구 현 */

int keyControl()
{
	char temp = getch(); //getch()함수는 엔터안눌러도 키가 눌리면 바로 반환
	//키가 입력되면 바로 temp변수에 임시로 값을 저장하고 if문에서 확인 해당문자 맞으면 값반환 

	if (temp == 'w' || temp == 'W')
		return UP;
	else if (temp == 'a' || temp == 'A')
		return LEFT;
	else if (temp == 's' || temp == 'S')
		return DOWN;
	else if (temp == 'd' || temp == 'D')
		return RIGHT;
	else if (temp == ' ') // 스페이스바가 선택버튼
		return SUBMIT;
}

void titleDraw(void)
{
	system("cls");
	int x = 10; //타이틀 표시 x좌표test
	int y = 20; //타이틀 표시 y좌표

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
	gotoxy(110, 30); printf("- Made by. 정길연, 정민우, 정세훈");

	int x = 70;
	int y = 32;

	gotoxy(x - 2, y); printf("> 게임 시작999"); //-2하는 이유는 >을 넣어야되서
	gotoxy(x, y + 1); printf("게임 정보");
	gotoxy(x, y + 2); printf("순위 보기");
	gotoxy(x, y + 3); printf("게임 종료");

	while (1) //무한반복
	{
		int n = keyControl(); //키보드이벤트를 키값으로 받아오기
		switch (n)
		{
		case UP: {
			if (y > 32) //계속 못올라가게
			{
				gotoxy(x - 2, y); //'>'을 두칸 이전에 출력하려고
				printf(" "); //원래 위치 지우기
				gotoxy(x - 2, --y); //지우고 새로 이동한 위치로 이동
				printf(">"); //'>'삽입
			}
			break; }
		case DOWN: {
			if (y < 35) //계속 못내려가게
			{
				gotoxy(x - 2, y);
				printf(" ");
				gotoxy(x - 2, ++y);
				printf(">");
			}
			break; }
		case SUBMIT: {
			return y - 32; } //스페이스바 선택경우 시작위치 32이니까 0123 받을 수있음
		}
	}
}
void infoDraw()
{
	system("cls");

	int x = 35;
	int y = 18;

	gotoxy(x, y); printf("    주어진 문제를 푸시오. 단계는 총 7단계입니다.");
	gotoxy(x, y + 5); printf("-> 사용자 이름을 입력하면, 순위에 올라갈 수있습니다.");
	gotoxy(x, y + 6); printf("-> 기회는 3번 주어집니다. 답을 틀렸을 시, 기회가 한 번씩 줄어들게 되며, 3번 실패시 자동종료됩니다.");
	gotoxy(x, y + 7); printf("-> 문제 풀이 도중 풀이는 1번 볼 수있으며, 답을 맞춘 후에는 풀이를 조건없이 열람가능합니다.");
	gotoxy(x, y + 11); printf("   **  스페이스바를 누르면 메인화면으로 이동합니다. **");

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

	gotoxy(x + 5, y + 5); printf("사용자이름 입력 : ");
	gotoxy(x + 5, y + 6); scanf("%s", user);
}
