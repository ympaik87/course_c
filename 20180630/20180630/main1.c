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
			printf("통과\n");
			return 0;
		}
		else
		{
			printf("다시입력하세요.\n");
		}
		trial_num--;
		if (trial_num != 0)
		{
			printf("%d의 기회가 남았습니다.\n", trial_num);
		}
	}
	printf("경찰");
	puts("");
	return 0;
}