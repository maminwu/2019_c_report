#include "math_round.h"


int right(float a, float s)
{
	int mathchecknum;

	if (a == s) {
		setcolor(1, 0); printf("\n\n정답입니다.\n");
		mathchecknum = 1;
		return mathchecknum;
		system("PAUSE");
	}
	else {
		setcolor(4, 0); printf("\n\n오답입니다. 5초 경과 후 실행됩니다.\n");
		mathchecknum = 0;
		Sleep(5000);
		return mathchecknum;
		system("PAUSE");
	}
}


void First_Round()
{
	srand(time(NULL)); //랜덤 시드값

	int f_multiply = rand() % 9 + 1; //구구단 첫번째 수
	int s_multiply = rand() % 9 + 1; //구구단 두번째 수
	int divide = rand() % 9 + 1; //나누는 수
	int truenum;

	float ans, sol; //정답, 입력된 값


	setcolor(6, 0); gotoxy(20, 2); printf("< 1단계 문제 > ");
	setcolor(7, 0); gotoxy(5, 4); printf("소수점은 셋째자리부터 버려, 둘째자리까지 나타내시오.)");
	gotoxy(5, 5); printf("' (%d × %d) ÷ %d ' 을 구하시오 : ", f_multiply, s_multiply, divide);
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
	srand(time(NULL)); //랜덤 시드값

	int number = rand() % 7; //0~6까지의 랜덤 수
	int ans; //사용자가 입력하는 답
	int sol = 1; //정답
	int truenum;

	setcolor(6, 0); gotoxy(20, 2); printf("< 2단계 문제 >\n");
	setcolor(7, 0); gotoxy(5, 4); printf("'%d! '을 구하시오 : ", number);
	scanf("%d", &ans);

	if (number == 0)
	{
		sol = 1;
		
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
	srand(time(NULL)); 
	
	int radius = rand() % 6 + 1;
	float ans, sol;
	int truenum;

	setcolor(6, 0); gotoxy(20, 2); printf("< 3단계 문제 >");
	setcolor(7, 0); gotoxy(2, 4); printf("반지름이 %d인 원의 넓이를 구하시오: ", radius);
	gotoxy(2, 5); printf("(소수점은 셋째자리에서 반올림하여 둘째자리까지 나타내시오.)");
	gotoxy(2, 6); printf("(원주율은 3.14 입니다.)  ");
	
	scanf("%f", &ans);

	sol = radius * radius * 3.14;

	truenum = right(ans, sol);
	return truenum;
}

void Forth_Round()
{
	srand(time(NULL));

	int a[5];
	int b[5];
	int truenum;

	for (int i = 0; i < 5; i++)
	{
		a[i] = i;
	}
	for (int i = 0; i < 5; i++)
	{
		b[i] = i;
	}

	int A = a[(rand() % 5)];
	int B = a[(rand() % 5)];

	int M = 2;
	setcolor(6, 0); gotoxy(20, 2); printf("< 4단계 문제 >");
	setcolor(7, 0); gotoxy(3, 4); printf(" (%d, %d), 기울기 : 2 일때, y절편을 구하여라: ", A, B);

	int ans, sol;
	sol = B - (M * A);
	scanf("%d", &ans);

	truenum = right(ans, sol);
	return truenum;
}

void Fifth_Round()
{
	srand(time(NULL));
	enum days { MON, TUE, WED, THU, FRI, SAT, SUN };
	char* days_name[] = {
		"월요일", "화요일", "수요일", "목요일", "금요일","토요일","일요일" };

	enum days day = rand() % 7;
	setcolor(6, 0); gotoxy(20, 2); printf("< 5단계 문제 >");
	setcolor(7, 0); gotoxy(3, 4); printf("월요일부터 시작할때, %s은 몇번째 요일인지 구하시오 : ", days_name[day]);
	gotoxy(3, 5); printf("( EX.수요일 -> 답: 3 ) ");
	int ans, sol;
	sol = day + 1;
	scanf("%d", &ans);

	int truenum;
	truenum = right(ans, sol);

	return truenum;
}


union Box {    // 공용체 정의
	short level;     // 2바이트
	float score;     // 4바이트
	char name[8];    // 8바이트
	//  공용체의 전체 크기는 가장 큰 자료형의 크기 -> 8
}; 

void Sixth_Round()
{
	union Box b1;
	union Box b2;
	union Box b3; // 공용체 변수 선언

	b1.level = 4;
	setcolor(7, 0); printf("level:%d  ", b1.level);
	b1.score = 4.2;
	printf("score:%.1f  ", b1.score);
	strcpy(b1.name, "정길연");
	printf("name:%s\n", b1.name);

	b2.level = 2;
	printf("level:%d  ", b2.level);
	b2.score = 4.4;
	printf("score:%.1f  ", b2.score);
	strcpy(b2.name, "정민우");
	printf("name:%s\n", b2.name);

	b3.level = 3;
	printf("level:%d  ", b3.level);
	b3.score = 4.3;
	printf("score:%.1f  ", b3.score);
	strcpy(b3.name, "정세훈");
	printf("name:%s\n\n", b3.name);

	setcolor(6, 0); gotoxy(20, 6); printf("< 6단계 문제 >");
	
	setcolor(7, 0); gotoxy(5, 8); printf("3명의 학생들의 평균을 구해보시오 : \n");
	gotoxy(5, 9); printf("( 점수 : level * score, 소수점 둘째자리까지 나타내시오 )  ");

	float ans;
	float sol = (4 * 4.2 + 2 * 4.4 + 3 * 4.3) / 3;
	sol = (int)(sol * 100);
	sol = sol / 100;
	scanf("%f", &ans);
	
	int truenum;
	truenum = right(ans, sol);

	return truenum;
}

void Seventh_Round()
{
	struct point {
		int x, y;
	};
	struct rect {
		struct point p1;
		struct point p2;
		struct point p3;
	};

	struct rect r;
	
	int sol_area;
	int ans_area;
	int truenum;

	setcolor(7, 0); printf("[삼각형 넓이 구하기]\n");
	printf("('7 8' 과 같이 띄어쓰기로 좌표를 표현하시오.)\n");
	printf("좌표를 입력하시오:");
	scanf("%d %d", &r.p1.x, &r.p1.y);

	printf("좌표를 입력하시오:");
	scanf("%d %d", &r.p2.x, &r.p2.y);

	printf("좌표를 입력하시오:");
	scanf("%d %d", &r.p3.x, &r.p3.y);

	while (1)
	{
		if (((r.p2.y - r.p1.y) / (r.p2.x - r.p1.x)) == ((r.p3.y - r.p1.y) / (r.p3.x - r.p1.x)) == ((r.p2.y - r.p3.y) / (r.p2.x - r.p3.x)))
		{
			printf("다시 입력하시오\n");
			printf("좌표를 입력하시오:");
			scanf("%d %d", &r.p1.x, &r.p1.y);

			printf("좌표를 입력하시오:");
			scanf("%d %d", &r.p2.x, &r.p2.y);

			printf("좌표를 입력하시오:");
			scanf("%d %d", &r.p3.x, &r.p3.y);
		}
		else
			break;
	}
	sol_area = ((r.p1.x * r.p3.y + r.p3.x * r.p2.y + r.p2.x * r.p1.y) - (r.p1.x * r.p2.y + r.p2.x * r.p3.y + r.p1.x)) / 2;

	if (sol_area < 0)
		sol_area = sol_area * -1;
	
	setcolor(6, 0); printf("\n              < 7단계 문제 >\n\n");
	setcolor(7, 0); printf("    세 좌표로 둘러쌓인 삼각형의 넓이를 구하시오: ");
	scanf("%d", &ans_area);
	

	truenum = right(ans_area, sol_area);

	return truenum;
}