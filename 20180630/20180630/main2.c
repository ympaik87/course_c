#include <stdio.h>

int get_passwd(void);
void chance(int cnt);
int compare(int a, int b);
void police(int cnt);

main()
{
	int pwd = 1234;//������ ���ص� �н�����
	int get_pwd; //���� �н�����
	int cnt = 3; //��ȸ�� 3�� ��
	do {
		get_pwd = get_passwd();//�н����� �޾� ��

		if (compare(pwd, get_pwd)) //�κ��� ������ ������ 1 �ٸ��� 0�� �����Ѵ�.
		{
			puts("���");
			break;
		}
		else {
			chance(--cnt); //��ȸ�� �����ִ� �Լ�
		}
	} while (cnt); //cnt!=0

	police(cnt); //������ �θ��� �Լ� cnt�� 0�̸� ������ �θ��� �Լ�
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
		printf("%d�� ��ȸ�� ���ҽ��ϴ�.\n", cnt);
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
		printf("����\n");
	}
}