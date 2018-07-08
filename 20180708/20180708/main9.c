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
		count = fread(buff, 1, 1000, frp); // 꽉 차게 읽으면 1000 리턴
		if (count < 1000) // 마지막일 가능성
		{
			if (feof(frp)) // 진짜 끝이라면
			{
				fwrite(buff, 1, count, fwp);
				size += count;
				puts("복사완료");
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