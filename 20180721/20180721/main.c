#include <stdio.h>
#define STACK_SIZE 5

int stack[STACK_SIZE];
int top;

// 모든 자료구조는 초기화가 있다.
void init_stack(void) {
	top = -1; // = 0
}

void push(int data) {
	if (top == STACK_SIZE) {
		puts("stack is full");
		return;
	}
	stack[++top] = data;
}

int pop(void) {
	if (top == -1)
	{
		puts("stack empty");
		return -1;
	}
	return stack[top--];
}

void main(void)
{
	init_stack(); // stack의 초기화
	push(3);
	push(4);
	push(2);
	push(1);
	push(23);
	push(33); // stack overflow
	printf("%d\n", pop());
	printf("%d\n", pop());
	printf("%d\n", pop());
	printf("%d\n", pop());
	printf("%d\n", pop());
	printf("%d\n", pop());
	printf("%d\n", pop()); // stack underflow
}