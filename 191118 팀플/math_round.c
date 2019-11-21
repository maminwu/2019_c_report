#include "math_round.h"

#define PIE 3.141592

int truenum;

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

	float ans, fact; //정답, 입력된 값


	printf("1단계 문제 :  ");
	printf("(소수점은 둘째자리까지 계산하시오.)\n");
	printf("' (%d × %d) ÷ %d ' 을 구하시오 : ", f_multiply, s_multiply, divide);
	scanf("%f", &ans);

	fact = ((f_multiply * s_multiply) / (divide * 1.0)); //1.0f를 곱해야 소수점까지 계산 가능

	fact = (int)(fact * 100);
	fact = fact / 100;

	//printf("내가 적은 답 %f\n", answer); 값 확인
	truenum = right(ans, fact);
	return truenum;
}
void Second_Round()
{
	system("cls");
	srand(time(NULL)); //랜덤 시드값

	int number = rand() % 7; //0~6까지의 랜덤 수
	int ans; //사용자가 입력하는 답
	int fact = 1; //정답

	printf("2단계 문제 :\n");
	printf("'%d! '을 구하시오 : ", number);
	scanf("%d", &ans);

	if (number == 0)
	{
		fact = 1;
		return 0;
	}
	for (int i = 1; i <= number; i++)
	{
		fact *= i;
	}

	truenum = right(ans, fact);
	return truenum;

}
void Third_Round()
{
	
}
int get_line_parameter(int x1, int y1, int x2, int y2, float* slope, float* yintercept)
{
	if (x1 == x2)
		return -1;
	else
	{
		*slope = (float)(y2 - y1) / (float)(x2 - x1);
		*yintercept = y1 - (*slope) * x1;
		return 0;
	}
}
