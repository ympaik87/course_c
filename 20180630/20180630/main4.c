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
		printf("나이를 입력하세요: ");
		scanf_s("%d", &user_input);
		if (user_input < age)
		{
			if (user_input >= user_min)
			{
				printf("그보다 많지요.\n");
				user_min = user_input;
			}
			else
			{
				printf("왜 더 적은 수를 넣으셨나요?\n");
			}
		}
		else if (user_input > age)
		{
			if (user_input <= user_max)
			{
				printf("그보다 적지요.\n");
				user_max = user_input;
			}
			else
			{
				printf("왜 더 큰 수를 넣으셨나요?\n");
			}
		}
		else
		{
			break;
		}

		trial_num++;
	} while (age != user_input);

	printf("맞습니다.\n%d번의 시도 만에 맞추셨습니다.", trial_num);
	puts("");
	return 0;
}