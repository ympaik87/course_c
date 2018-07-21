#include <stdio.h>

#define QUEUE_SIZE 5
int queue[QUEUE_SIZE];
int rear, front;

void init_queue(void) {
	front = rear = 0;
}

void put(int data) { // 데이터 입력 시 rear를 통해 넣기
	if ((rear + 1) % 5 == front) {
		puts("queue overflow");
		return;
	}
	queue[rear++] = data;
	rear = rear % QUEUE_SIZE;
}

int get(void) {
	int rv;
	if (front == rear) {
		puts("queue underflow");
		return -1;
	}

	rv = queue[front];
	front = (front + 1) % 5;
	return rv;
/*
	if (front == QUEUE_SIZE)
	{
		front = front - QUEUE_SIZE;
		return queue[front];
	}
	else
		return queue[front++];*/
}

void print_queue(void) {
	for (int i = 0; i != rear; i = (i + 1) % QUEUE_SIZE)
	{
		printf("%d ", queue[i]);
	}
}

void main() {
	init_queue();
	put(4);
	put(3);
	put(2);
	put(1);
	put(0);
	printf("%d\n", get());
	printf("%d\n", get());
	printf("%d\n", get());
	printf("%d\n", get());
	printf("%d\n", get());
	print_queue();
}
