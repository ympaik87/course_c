#include <stdio.h>
//#pragma warning (disable:4996)

int main() {
	int trial_num = 3;
	int password = 1234;
	int user_input = 0;
	while (trial_num > 0)
	{

		scanf_s("%d", &user_input);
		if (user_input == password)
		{
			printf("���\n");
			return 0;
		}
		else
		{
			printf("�ٽ��Է��ϼ���.\n");
		}
		trial_num--;
		if (trial_num != 0)
		{
			printf("%d�� ��ȸ�� ���ҽ��ϴ�.\n", trial_num);
		}
	}
	printf("����");
	puts("");
	return 0;
}