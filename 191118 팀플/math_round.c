#include "math_round.h"

#define PIE 3.141592

int truenum;

int right(int a, int s)
{
	int mathchecknum;
	if (a == s) {
		printf("�����Դϴ�.\n");
		mathchecknum = 1;
		return mathchecknum;
		system("PAUSE");
	}
	else {
		printf("�����Դϴ�.\n");
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

	float ans, fact; //����, �Էµ� ��


	printf("1�ܰ� ���� :  ");
	printf("(�Ҽ����� ��°�ڸ����� ����Ͻÿ�.)\n");
	printf("' (%d �� %d) �� %d ' �� ���Ͻÿ� : ", f_multiply, s_multiply, divide);
	scanf("%f", &ans);

	fact = ((f_multiply * s_multiply) / (divide * 1.0)); //1.0f�� ���ؾ� �Ҽ������� ��� ����

	fact = (int)(fact * 100);
	fact = fact / 100;

	//printf("���� ���� �� %f\n", answer); �� Ȯ��
	truenum = right(ans, fact);
	return truenum;
}
void Second_Round()
{
	system("cls");
	srand(time(NULL)); //���� �õ尪

	int number = rand() % 7; //0~6������ ���� ��
	int ans; //����ڰ� �Է��ϴ� ��
	int fact = 1; //����

	printf("2�ܰ� ���� :\n");
	printf("'%d! '�� ���Ͻÿ� : ", number);
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
