#include "math_round.h"


int right(float a, float s)
{
	int mathchecknum;

	if (a == s) {
		printf("\n\n�����Դϴ�.\n");
		mathchecknum = 1;
		return mathchecknum;
		system("PAUSE");
	}
	else {
		printf("\n\n�����Դϴ�. 5�� ��� �� ����˴ϴ�.\n");
		mathchecknum = 0;
		Sleep(500);
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


	printf("< 1�ܰ� ���� > \n");
	printf("�Ҽ����� ��°�ڸ����� ����, ��°�ڸ����� ��Ÿ���ÿ�.)\n");
	printf("' (%d �� %d) �� %d ' �� ���Ͻÿ� : ", f_multiply, s_multiply, divide);
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

	printf("< 2�ܰ� ���� >\n");
	printf("'%d! '�� ���Ͻÿ� : ", number);
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

	printf("< 3�ܰ� ���� >\n"); 
	printf("(�Ҽ����� ��°�ڸ����� �ݿø��Ͽ� ��°�ڸ����� ��Ÿ���ÿ�.)");
	printf("(�������� 3.14 �Դϴ�.)\n");
	printf("�������� %d�� ���� ���̸� ���Ͻÿ�: ",radius);
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
	printf("< 4�ܰ� ���� >\n");
	printf(" (%d, %d), ���� : 2 �϶�, y������ ���Ͽ���: ", A, B);

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
	printf("< 5�ܰ� ���� >\n");
	printf("�����Ϻ��� �����Ҷ�, %s�� ���° �������� ���Ͻÿ� : \n", days_name[day]);
	printf("( EX.������ -> ��: 3 ) ");
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
	printf("level:%d  ", b1.level);
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

	printf("< 6�ܰ� ���� >\n");
	printf("3���� �л����� ����� ���غ��ÿ� : \n");
	printf("( ���� : level * score )  ");

	float ans;
	float sol = (4 * 4.2 + 2 * 4.4 + 3 * 4.3) / 3;
	scanf("%.1f", &ans);

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

	printf("[�ﰢ�� ���� ���ϱ�]\n");
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
	
	printf("< 7�ܰ� ���� > \n");
	printf("�� ��ǥ�� �ѷ����� �ﰢ���� ���̸� ���Ͻÿ�: ");
	scanf("%d", &ans_area);
	

	truenum = right(ans_area, sol_area);

	return truenum;
}