#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#pragma warning (disable:4996)

int main() {
	int user_input = 0;
	int trial_num = 1;
	int user_max = 100;
	int user_min = 0;
	srand(time(NULL));
	int age = rand() % 100;
	// int age = 50;
	
	do
	{
		printf("���̸� �Է��ϼ���: ");
		scanf_s("%d", &user_input);
		if (user_input < age)
		{
			if (user_input >= user_min)
			{
				printf("�׺��� ������.\n");
				user_min = user_input;
			}
			else
			{
				printf("�� �� ���� ���� �����̳���?\n");
			}
		}
		else if (user_input > age)
		{
			if (user_input <= user_max)
			{
				printf("�׺��� ������.\n");
				user_max = user_input;
			}
			else
			{
				printf("�� �� ū ���� �����̳���?\n");
			}
		}
		else
		{
			break;
		}

		trial_num++;
	} while (age != user_input);

	printf("�½��ϴ�.\n%d���� �õ� ���� ���߼̽��ϴ�.", trial_num);
	puts("");
	return 0;
}