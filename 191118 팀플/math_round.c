#include "math_round.h"


int right(float a, float s)
{
	int mathchecknum;
	if (a == s) {
		printf("\n정답입니다.\n");
		mathchecknum = 1;
		return mathchecknum;
		system("PAUSE");
	}
	else {
		printf("\n오답입니다. 5초 경과 후 실행됩니다.\n");
		mathchecknum = 0;
		Sleep(5000);
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


	printf("1단계 문제 : \n");
	printf("소수점은 셋째자리부터 버려, 둘째자리까지 나타내시오.)\n");
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
	srand(time(NULL)); 
	
	int radius = rand() % 6 + 1;
	float ans, sol;
	int truenum;

	printf("3단계 문제 :\n"); 
	printf("(소수점은 셋째자리에서 반올림하여 둘째자리까지 나타내시오.)");
	printf("(원주율은 3.14 입니다.)\n");
	printf("반지름이 %d인 원의 넓이를 구하시오: ",radius);
	scanf("%f", &ans);

	sol = radius * radius * 3.14;

	truenum = right(ans, sol);
	return truenum;
}

void Forth_Round()
{
	system("cls");
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
	printf(" (%d, %d), 기울기 : 2 일때, y절편을 구하여라: ", A, B);

	int ans, sol;
	sol = B - (M * A);
	scanf("%d", &ans);

	truenum = right(ans, sol);
	return truenum;
}

void Fifth_Round() 
{
	system("cls");

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

	printf("[삼각형 넓이 구하기]\n");
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
	
	printf("세 좌표로 둘러쌓인 삼각형의 넓이를 구하시오: ");
	scanf("%d", &ans_area);
	

	truenum = right(ans_area, sol_area);

	return truenum;

}


