#include <stdarg.h>

float average(int num, ...)

{
	va_list arg_ptr;
	int cnt, total = 0;
	va_start(arg_ptr, num);
	for (cnt = 0; cnt < num; cnt++)
		total += va_arg(arg_ptr, int);
	va_end(arg_ptr);
	return ((float)total / num);
}

main()

{
	float x;
	x = average(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
	printf("first avg is %f\n", x);
	x = average(5, 2, 2, 2, 2, 2);
	printf("second avg is %f", x);
	return(0);
}

// gcc --save-temps -o main.exe main.c