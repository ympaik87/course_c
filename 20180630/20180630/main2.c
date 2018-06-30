#include <stdio.h>

int get_passwd(void);
void chance(int cnt);
int compare(int a, int b);
void police(int cnt);

main()
{
	int pwd = 1234;//기존에 정해둔 패스워드
	int get_pwd; //받을 패스워드
	int cnt = 3; //기회는 3번 뿐
	do {
		get_pwd = get_passwd();//패스워드 받아 옴

		if (compare(pwd, get_pwd)) //두변수 같은지 같으면 1 다르면 0을 리턴한다.
		{
			puts("통과");
			break;
		}
		else {
			chance(--cnt); //기회를 보여주는 함수
		}
	} while (cnt); //cnt!=0

	police(cnt); //경찰을 부르는 함수 cnt가 0이면 경찰을 부르는 함수
}

int get_passwd()
{
	int user_input = 0;
	scanf_s("%d", &user_input);
	return user_input;
}

void chance(int cnt)
{
	if(cnt != 0)
		printf("%d의 기회가 남았습니다.\n", cnt);
}

int compare(int a, int b)
{
	/*if (a == b)
	{
		return 1;
	}
	else
	{
		return 0;
	}*/
	return a == b ? 1 : 0;
}

void police(int cnt)
{
	if (cnt == 0)
	{
		printf("경찰\n");
	}
}