#include "math_round.h"

//

void First_Round()
{
	system("cls"); //Ÿ��Ʋȭ�� ����

	srand(time(NULL)); //���� �õ尪

	int f_multiply = rand() % 9 + 1; //������ ù��° ��
	int s_multiply = rand() % 9 + 1; //������ �ι�° ��
	int divide = rand() % 9 + 1; //������ ��
	int truenum;

	float answer, solution; //����, �Էµ� ��


	printf("1�ܰ� ���� :  ");
	printf("(�Ҽ����� ��°�ڸ����� ����Ͻÿ�.)\n");
	printf("' (%d �� %d) �� %d ' �� ���Ͻÿ� : ", f_multiply, s_multiply, divide);
	scanf("%f", &answer);

	solution = ((f_multiply * s_multiply) / (divide * 1.0)); //1.0f�� ���ؾ� �Ҽ������� ��� ����

	solution = (int)(solution * 100);
	solution = solution / 100;

	//printf("���� ���� �� %f\n", answer); �� Ȯ��
	
	if (answer == solution) {
		printf("�����Դϴ�.\n");
		truenum = 1;
		return truenum;
		system("PAUSE");
	}
	else {
		printf("�����Դϴ�.\n");
		truenum = 0;
		return truenum;
		system("PAUSE");
	}


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

	if (fact == ans)
	{
		printf("\n�����Դϴ�.");
	}
	else
	{
		printf("\n�����Դϴ�.");
	}
}