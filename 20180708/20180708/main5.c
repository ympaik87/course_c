#include <stdio.h>

struct subjects {
	int subname[5]; // 국어, 영어, 수학, 총점, 랭킹
};

struct student
{
	char name[10];
	float avg;
	struct subjects sub;
};

void main() {
	struct student students[3];
	for (int i = 0; i < 3; i++)
	{
		printf("%d번째 사람 이름: ", i+1);
		gets(&students[i].name);
		printf("국어점수: ");
		scanf_s("%d", &students[i].sub.subname[0]);
		printf("영어점수: ");
		scanf_s("%d", &students[i].sub.subname[1]);
		printf("수학점수: ");
		scanf_s("%d", &students[i].sub.subname[2]);
		getchar();
		students[i].sub.subname[3] = students[i].sub.subname[0] + students[i].sub.subname[1] + students[i].sub.subname[2];
		students[i].avg = students[i].sub.subname[3] / 3.0;
		students[i].sub.subname[4] = 1;
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (students[i].avg < students[j].avg)
				students[i].sub.subname[4]++;
		}
	}
/*
	if (students[0].avg > students[1].avg)
	{
		if (students[0].avg < students[2].avg)
		{
			students[2].sub.subname[4] = 1;
			students[0].sub.subname[4] = 2;
			students[1].sub.subname[4] = 3;
		}
		else if (students[2].avg > students[1].avg)
		{
			students[0].sub.subname[4] = 1;
			students[2].sub.subname[4] = 2;
			students[1].sub.subname[4] = 3;
		}
		else
		{
			students[0].sub.subname[4] = 1;
			students[1].sub.subname[4] = 2;
			students[2].sub.subname[4] = 3;
		}

	}
	else
	{
		if (students[1].avg < students[2].avg)
		{
			students[2].sub.subname[4] = 1;
			students[1].sub.subname[4] = 2;
			students[0].sub.subname[4] = 3;
		}
		else if (students[2].avg > students[0].avg)
		{
			students[1].sub.subname[4] = 1;
			students[2].sub.subname[4] = 2;
			students[0].sub.subname[4] = 3;
		}
		else
		{
			students[1].sub.subname[4] = 1;
			students[0].sub.subname[4] = 2;
			students[2].sub.subname[4] = 3;
		}
	}*/
	printf("성명\t국어\t영어\t수학\t총점\t순위\t평균\n");
	printf("----------------------------------------------------\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%s\t%d\t%d\t\%d\t%d\t%d\t%.2f\n", students[i].name, students[i].sub.subname[0], students[i].sub.subname[1], students[i].sub.subname[2], students[i].sub.subname[3], students[i].sub.subname[4], students[i].avg);
	}
	

}