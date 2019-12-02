#include "math_round.h"


int right(float a, float s)
{
	int mathchecknum;

	if (a == s) {
		setcolor(1, 0); printf("\n\n�����Դϴ�.\n");
		mathchecknum = 1;
		return mathchecknum;
		system("PAUSE");
	}
	else {
		setcolor(4, 0); printf("\n\n�����Դϴ�. 5�� ��� �� ����˴ϴ�.\n");
		mathchecknum = 0;
		Sleep(5000);
		return mathchecknum;
		system("PAUSE");
	}
}


void First_Round()
{
	srand(time(NULL)); //���� �õ尪

	int f_multiply = rand() % 9 + 1; //������ ù��° ��
	int s_multiply = rand() % 9 + 1; //������ �ι�° ��
	int divide = rand() % 9 + 1; //������ ��
	int truenum;

	float ans, sol; //����, �Էµ� ��


	setcolor(6, 0); gotoxy(20, 2); printf("< 1�ܰ� ���� > ");
	setcolor(7, 0); gotoxy(5, 4); printf("�Ҽ����� ��°�ڸ����� ����, ��°�ڸ����� ��Ÿ���ÿ�.)");
	gotoxy(5, 5); printf("' (%d �� %d) �� %d ' �� ���Ͻÿ� : ", f_multiply, s_multiply, divide);
	scanf("%f", &ans);
	sol = ((f_multiply * s_multiply) / (divide * 1.0)); //1.0f�� ���ؾ� �Ҽ������� ��� ����

	sol = (int)(sol * 100);
	sol = sol / 100;

	//printf("���� ���� �� %f\n", answer); �� Ȯ��
	
	truenum = right(ans, sol);
	return truenum;

}

void Second_Round()
{
	srand(time(NULL)); //���� �õ尪

	int number = rand() % 7; //0~6������ ���� ��
	int ans; //����ڰ� �Է��ϴ� ��
	int sol = 1; //����
	int truenum;

	setcolor(6, 0); gotoxy(20, 2); printf("< 2�ܰ� ���� >\n");
	setcolor(7, 0); gotoxy(5, 4); printf("'%d! '�� ���Ͻÿ� : ", number);
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

	setcolor(6, 0); gotoxy(20, 2); printf("< 3�ܰ� ���� >");
	setcolor(7, 0); gotoxy(2, 4); printf("�������� %d�� ���� ���̸� ���Ͻÿ�: ", radius);
	gotoxy(2, 5); printf("(�Ҽ����� ��°�ڸ����� �ݿø��Ͽ� ��°�ڸ����� ��Ÿ���ÿ�.)");
	gotoxy(2, 6); printf("(�������� 3.14 �Դϴ�.)  ");
	
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
	setcolor(6, 0); gotoxy(20, 2); printf("< 4�ܰ� ���� >");
	setcolor(7, 0); gotoxy(3, 4); printf(" (%d, %d), ���� : 2 �϶�, y������ ���Ͽ���: ", A, B);

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
		"������", "ȭ����", "������", "�����", "�ݿ���","�����","�Ͽ���" };

	enum days day = rand() % 7;
	setcolor(6, 0); gotoxy(20, 2); printf("< 5�ܰ� ���� >");
	setcolor(7, 0); gotoxy(3, 4); printf("�����Ϻ��� �����Ҷ�, %s�� ���° �������� ���Ͻÿ� : ", days_name[day]);
	gotoxy(3, 5); printf("( EX.������ -> ��: 3 ) ");
	int ans, sol;
	sol = day + 1;
	scanf("%d", &ans);

	int truenum;
	truenum = right(ans, sol);

	return truenum;
}


union Box {    // ����ü ����
	short level;     // 2����Ʈ
	float score;     // 4����Ʈ
	char name[8];    // 8����Ʈ
	//  ����ü�� ��ü ũ��� ���� ū �ڷ����� ũ�� -> 8
}; 

void Sixth_Round()
{
	union Box b1;
	union Box b2;
	union Box b3; // ����ü ���� ����

	b1.level = 4;
	setcolor(7, 0); printf("level:%d  ", b1.level);
	b1.score = 4.2;
	printf("score:%.1f  ", b1.score);
	strcpy(b1.name, "���濬");
	printf("name:%s\n", b1.name);

	b2.level = 2;
	printf("level:%d  ", b2.level);
	b2.score = 4.4;
	printf("score:%.1f  ", b2.score);
	strcpy(b2.name, "���ο�");
	printf("name:%s\n", b2.name);

	b3.level = 3;
	printf("level:%d  ", b3.level);
	b3.score = 4.3;
	printf("score:%.1f  ", b3.score);
	strcpy(b3.name, "������");
	printf("name:%s\n\n", b3.name);

	setcolor(6, 0); gotoxy(20, 6); printf("< 6�ܰ� ���� >");
	
	setcolor(7, 0); gotoxy(5, 8); printf("3���� �л����� ����� ���غ��ÿ� : \n");
	gotoxy(5, 9); printf("( ���� : level * score, �Ҽ��� ��°�ڸ����� ��Ÿ���ÿ� )  ");

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

	setcolor(7, 0); printf("[�ﰢ�� ���� ���ϱ�]\n");
	printf("('7 8' �� ���� ����� ��ǥ�� ǥ���Ͻÿ�.)\n");
	printf("��ǥ�� �Է��Ͻÿ�:");
	scanf("%d %d", &r.p1.x, &r.p1.y);

	printf("��ǥ�� �Է��Ͻÿ�:");
	scanf("%d %d", &r.p2.x, &r.p2.y);

	printf("��ǥ�� �Է��Ͻÿ�:");
	scanf("%d %d", &r.p3.x, &r.p3.y);

	while (1)
	{
		if (((r.p2.y - r.p1.y) / (r.p2.x - r.p1.x)) == ((r.p3.y - r.p1.y) / (r.p3.x - r.p1.x)) == ((r.p2.y - r.p3.y) / (r.p2.x - r.p3.x)))
		{
			printf("�ٽ� �Է��Ͻÿ�\n");
			printf("��ǥ�� �Է��Ͻÿ�:");
			scanf("%d %d", &r.p1.x, &r.p1.y);

			printf("��ǥ�� �Է��Ͻÿ�:");
			scanf("%d %d", &r.p2.x, &r.p2.y);

			printf("��ǥ�� �Է��Ͻÿ�:");
			scanf("%d %d", &r.p3.x, &r.p3.y);
		}
		else
			break;
	}
	sol_area = ((r.p1.x * r.p3.y + r.p3.x * r.p2.y + r.p2.x * r.p1.y) - (r.p1.x * r.p2.y + r.p2.x * r.p3.y + r.p1.x)) / 2;

	if (sol_area < 0)
		sol_area = sol_area * -1;
	
	setcolor(6, 0); printf("\n              < 7�ܰ� ���� >\n\n");
	setcolor(7, 0); printf("    �� ��ǥ�� �ѷ����� �ﰢ���� ���̸� ���Ͻÿ�: ");
	scanf("%d", &ans_area);
	

	truenum = right(ans_area, sol_area);

	return truenum;
}