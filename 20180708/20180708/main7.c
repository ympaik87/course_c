#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	char name[10];
	int age;
	FILE *fwp;
	fwp = fopen("a.txt", "w"); // malloc // ���� (���)

	fprintf(fwp, "%s %d\n", "hong", 22);
	fprintf(fwp, "%s %d\n", "kim", 26);

	fclose(fwp); // free

	fwp = fopen("a.txt", "r"); // �б� (�Է�)
	while (1) {
		fscanf(fwp, "%s %d", name, &age);
		if (feof(fwp)) // ������ ���� �ƴϸ� 0�� ����
		{
			fclose(fwp);
			break;
		}
		printf("%s %d\n", name, age);

	}
	/*fscanf(fwp, "%s %d", name, &age);
	printf("%s %d\n", name, age);
	fscanf(fwp, "%s %d", name, &age);
	printf("%s %d\n", name, age);*/
	
	
	fwp = fopen("a.txt", "a");
	fprintf(fwp, "%s %d\n", "park", 45);
	fclose(fwp);
}