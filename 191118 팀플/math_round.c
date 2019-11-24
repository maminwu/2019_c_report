#include "math_round.h"


int right(float a, float s)
{
	int mathchecknum;
	if (a == s) {
		printf("\n�����Դϴ�.\n");
		mathchecknum = 1;
		return mathchecknum;
		system("PAUSE");
	}
	else {
		printf("\n�����Դϴ�.\n");
		mathchecknum = 0;
		return mathchecknum;
		system("PAUSE");
	}
}


void First_Round()
{
	system("cls"); //Ÿ��Ʋȭ�� ����
	srand(time(NULL)); //���� �õ尪

	int f_multiply = rand() % 9 + 1; //������ ù��° ��
	int s_multiply = rand() % 9 + 1; //������ �ι�° ��
	int divide = rand() % 9 + 1; //������ ��
	int truenum;

	float ans, sol; //����, �Էµ� ��


	printf("1�ܰ� ���� : \n");
	printf("(�Ҽ����� ��°�ڸ����� ����Ͻÿ�.)\n");
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
	system("cls");
	srand(time(NULL)); //���� �õ尪

	int number = rand() % 7; //0~6������ ���� ��
	int ans; //����ڰ� �Է��ϴ� ��
	int sol = 1; //����
	int truenum;

	printf("2�ܰ� ���� :\n");
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
	system("cls");
	srand(time(NULL)); 
	
	int radius = rand() % 6 + 1;
	float ans, sol;
	int truenum;

	printf("3�ܰ� ���� :\n"); 
	printf("(�Ҽ����� ��°�ڸ����� ����Ͻÿ�.)");
	printf("(�������� 3.14 �Դϴ�.)\n");
	printf("�������� %d�� ���� ���̸� ���Ͻÿ�: ",radius);
	scanf("%f", &ans);

	sol = radius * radius * 3.14;

	truenum = right(ans, sol);
	return truenum;
}

void Forth_Round() //������ 
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
	
	unsigned int sol_area;
	unsigned int ans_area;
	int truenum;

	printf("[�ﰢ�� ���� ���ϱ�]\n");
	printf("��ǥ�� �Է��Ͻÿ�:");
	scanf("%d %d", &r.p1.x, &r.p1.y);

	printf("��ǥ�� �Է��Ͻÿ�:");
	scanf("%d %d", &r.p2.x, &r.p2.y);

	printf("��ǥ�� �Է��Ͻÿ�:");
	scanf("%d %d", &r.p3.x, &r.p3.y);

	while (1)
	{
		if (((r.p2.y - r.p1.y) / (r.p2.x - r.p1.x)) == ((r.p3.y - r.p1.y) / (r.p3.x - r.p1.x) == 1))
		{
			printf("�ٽ� �Է��Ͻÿ�\n");
			printf("��ǥ�� �Է��Ͻÿ�:");
			scanf("%d %d", &r.p1.x, &r.p1.y);

			printf("��ǥ�� �Է��Ͻÿ�:");
			scanf("%d %d", &r.p2.x, &r.p2.y);

			printf("��ǥ�� �Է��Ͻÿ�:");
			scanf("%d %d", &r.p3.x, &r.p3.y);
		}

		if (((r.p2.y - r.p1.y) / (r.p2.x - r.p1.x)) == ((r.p3.y - r.p2.y) / (r.p3.x - r.p2.x) == 1))
		{
			printf("�ٽ� �Է��Ͻÿ�\n");
			printf("��ǥ�� �Է��Ͻÿ�:");
			scanf("%d %d", &r.p1.x, &r.p1.y);

			printf("��ǥ�� �Է��Ͻÿ�:");
			scanf("%d %d", &r.p2.x, &r.p2.y);

			printf("��ǥ�� �Է��Ͻÿ�:");
			scanf("%d %d", &r.p3.x, &r.p3.y);
		}

		if (((r.p3.y - r.p2.y) / (r.p3.x - r.p2.x)) == ((r.p3.y - r.p1.y) / (r.p3.x - r.p1.x) == 1))
		{
			printf("�ٽ� �Է��Ͻÿ�\n");
			printf("��ǥ�� �Է��Ͻÿ�:");
			scanf("%d %d", &r.p1.x, &r.p1.y);

			printf("��ǥ�� �Է��Ͻÿ�:");
			scanf("%d %d", &r.p2.x, &r.p2.y);

			printf("��ǥ�� �Է��Ͻÿ�:");
			scanf("%d %d", &r.p3.x, &r.p3.y);
		}
	}

	sol_area = ((r.p1.x * r.p3.y + r.p3.x * r.p2.y + r.p2.x * r.p1.y) - (r.p1.x * r.p2.y + r.p2.x * r.p3.y + r.p1.x)) / 2;
	
	printf("�� ��ǥ�� �ѷ����� �ﰢ���� ���̸� ���Ͻÿ�: ");
	scanf("%u", &ans_area);
	

	truenum = right(ans_area, sol_area);

	return truenum;

}
