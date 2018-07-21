float average(int num, ...)
{
	va_list arg_ptr;
	int cnt, total = 0;

	(arg_ptr = (va_list)&num + ((sizeof(num) + sizeof(int) - 1) & ~(sizeof(int) - 1)));

	for (cnt = 0; cnt < num; cnt++)
		total += (*(int *)((arg_ptr += ((sizeof(int) + sizeof(int) - 1) & ~(sizeof(int) - 1))) - ((sizeof(int) + sizeof(int) - 1) & ~(sizeof(int) - 1))));

	(arg_ptr = (va_list)0);

	return ((float)total / num);
}
int main(void)
{
	float x;

	x = average(10, 1, 2, 3, 4,
		5, 6, 7, 8, 9, 10);
	printf("first avg is %f\n", x);
	x = average(5, 2, 2, 2, 2, 2);
	printf("second avg is %f", x);
	return 0;
}