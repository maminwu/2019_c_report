#include "math_round.h"



int right(int a, int s)
{
	int mathchecknum;
	if (a == s) {
		printf("정답입니다.\n");
		mathchecknum = 1;
		return mathchecknum;
		system("PAUSE");
	}
	else {
		printf("오답입니다.\n");
		mathchecknum = 0;
		return mathchecknum;
		system("PAUSE");
	}
}


void First_Round()
{
	system("cls"); //타이틀화면 삭제

	srand(time(NULL)); //랜덤 시드값

	int f_multiply = rand() % 9 + 1; //구구단 첫번째 수
	int s_multiply = rand() % 9 + 1; //구구단 두번째 수
	int divide = rand() % 9 + 1; //나누는 수
	int truenum;

	float ans, sol; //정답, 입력된 값


	printf("1단계 문제 :  ");
	printf("(소수점은 둘째자리까지 계산하시오.)\n");
	printf("' (%d × %d) ÷ %d ' 을 구하시오 : ", f_multiply, s_multiply, divide);
	scanf("%f", &ans);

	sol = ((f_multiply * s_multiply) / (divide * 1.0)); //1.0f를 곱해야 소수점까지 계산 가능

	sol = (int)(sol * 100);
	sol = sol / 100;

	//printf("내가 적은 답 %f\n", answer); 값 확인
	
	truenum = right(ans, sol);
	return truenum;

}
void Second_Round()
{
	system("cls");
	srand(time(NULL)); //랜덤 시드값

	int number = rand() % 7; //0~6까지의 랜덤 수
	int ans; //사용자가 입력하는 답
	int sol = 1; //정답
	int truenum;

	printf("2단계 문제 :\n");
	printf("'%d! '을 구하시오 : ", number);
	scanf("%d", &ans);

	if (number == 0)
	{
		sol = 1;
		return 0;
	}
	for (int i = 1; i <= number; i++)
	{
		sol *= i;
	}
	truenum = right(ans, sol);
	return truenum;

}

void Third_Round()
{
	system("cls");
	srand(time(NULL)); //랜덤 시드값
	float s, y;
	int x1=1, x2=3, y1=7, y2=11;
	char ans[100];
	char sol[100];
	int truenum;

	printf("3단계 문제 :\n");
	printf("(%d,%d), (%d,%d)을 지나는 일차함수를 구하시오. : ('y=ax+b' 의꼴) ", x1, y1, x2, y2);

	scanf("%s", ans);
	sol[10] ="y=2x+5";

	for (int i = 0; i < 10; i++)
	{
		if (ans[i] != sol[i])
		{
			printf("오답입니다.\n");
			truenum = 0;
			return truenum;
			system("PAUSE");
		}
		else if (ans[i] == sol[i])
		{
			printf("정답입니다.\n");
			truenum = 1;
			return truenum;
			system("PAUSE");
		}
		truenum = right(ans[i], sol[i]);
		return truenum;
	}

}

void Forth_Round()
{

}
