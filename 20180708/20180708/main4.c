typedef struct str1 STR1;
struct str1 {
	char a, b, c, d, e;
	double arr[2];
	char *p;
}; // 32 byte
typedef struct str2 STR2;
struct str2
{
	int *pp;
	char f, g, h, i, j;
	STR1 str1_str2;
}; // 48 byte

void main() {
	STR2 str2_var; // 48 byte
	STR2 *str2_p; // 4 byte
	STR2 str2_arr[2]; // 96 byte
	STR1 str1_var2; // 32 byte
}