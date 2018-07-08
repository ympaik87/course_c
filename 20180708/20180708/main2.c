#include <stdio.h>

struct Person {
	char name[20];
	char phone_num[20];
	int age;
};


void main() {
	puts("person1");
	struct Person person1 = { "È«±æµ¿", "123-123-3313", 29 };
	puts(person1.name);
	puts(person1.phone_num);
	printf("%d\n\n", person1.age);
	
	puts("person2");
	struct Person person2;
	strcpy(person2.name, "Ã¶¼ö");
	strcpy(person2.phone_num, "010-1234-2414");
	person2.age = 14;
	puts(person2.name);
	puts(person2.phone_num);
	printf("%d\n\n", person2.age);

	puts("person3");
	struct Person person3;
	printf("type person3's name: ");
	gets(&person3.name);
	printf("type person3's phone number: ");
	gets(&person3.phone_num);
	printf("type person3's age: ");
	scanf_s("%d", &person3.age);
	puts(person3.name);
	puts(person3.phone_num);
	printf("%d\n", person3.age);

}