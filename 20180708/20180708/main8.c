#include <stdio.h>
#pragma warning (disable:4996)

void main()
{
	FILE *fwp;
	FILE *fwp2;
	char string[5];
	fwp = fopen("a.txt", "r"); // �б� (�Է�)
	fwp2 = fopen("b.txt", "w");
	while (1) {
		fgets(string, 5, fwp);
		//fscanf(fwp, "%s", string);
		if (feof(fwp)) // ������ ���� �ƴϸ� 0�� ����
		{
			fclose(fwp2);
			break;
		}
		fputs(string, fwp2);
		//fprintf(fwp2, "%s\n", string);
	}

	fwp2 = fopen("b.txt", "r"); // �б� (�Է�)
	while (1) {
		fscanf(fwp2, "%s", string);
		if (feof(fwp2)) // ������ ���� �ƴϸ� 0�� ����
		{
			fclose(fwp2);
			break;
		}
		printf("%s\n", string);

	}
}