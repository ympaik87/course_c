#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	FILE *frp, *fwp;
	int count;
	int size = 0;
	char buff[1000];
	frp = fopen("1.jpg", "rb");
	fwp = fopen("2.jpg", "wb");

	while (1) {
		count = fread(buff, 1, 1000, frp); // �� ���� ������ 1000 ����
		if (count < 1000) // �������� ���ɼ�
		{
			if (feof(frp)) // ��¥ ���̶��
			{
				fwrite(buff, 1, count, fwp);
				size += count;
				puts("����Ϸ�");
				break;
			}
		}
		fwrite(buff, 1, 1000, fwp);
		size += 1000;
	}
	printf("%d\n", size);
	fclose(frp);
	fclose(fwp);
}