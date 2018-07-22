#include <stdio.h>

typedef struct _tree {
	int key;
	struct _tree *left;
	struct _tree *right;

}Tree;

void preorder(Tree *p) {
	if (p != NULL)
	{
		printf("%d ", p->key);
		preorder(p->left);
		preorder(p->right);
	}
}

void inorder(Tree *p) {
	if (p != NULL)
	{
		inorder(p->left);
		printf("%d ", p->key);
		inorder(p->right);
	}
}

void postorder(Tree *p) {
	if (p != NULL)
	{
		postorder(p->left);
		postorder(p->right);
		printf("%d ", p->key);
	}
}

#define QUEUE_SIZE 5
Tree *queue[QUEUE_SIZE];
int rear, front;

void init_queue(void) {
	front = rear = 0;
}

void put(Tree *data) { // ������ �Է� �� rear�� ���� �ֱ�
	if ((rear + 1) % 5 == front) {
		puts("queue overflow");
		return;
	}
	queue[rear++] = data;
	rear = rear % QUEUE_SIZE;
}

Tree *get(void) {
	Tree *rv;
	if (front == rear) {
		puts("queue underflow");
		return -1;
	}

	rv = queue[front];
	front = (front + 1) % 5;
	return rv;
}

int empty_queue(void) {
	return (front == rear) ? 1 : 0;
}

void levelorder(Tree *p) {
	Tree *wk;
	put(p); // ù��° root �ֱ�
	while (!empty_queue()) // queue�� ������� ������
	{
		wk = get();
		printf("%d ", wk->key);
		if (wk->left != NULL)
			put(wk->left);
		if (wk->right != NULL)
			put(wk->right);
	}
}

void main(void) {
	Tree a = {1, NULL, NULL},
		b = { 2, NULL, NULL },
		c = { 3, NULL, NULL },
		d = { 4, NULL, NULL },
		e = { 5, NULL, NULL };
	c.left = &a;
	a.right = &b;
	c.right = &d;
	d.right = &e;
	//           c
	//       a       d
	//         b        e
	preorder(&c);
	puts("");
	inorder(&c);
	puts("");
	postorder(&c);
	puts("");
	init_queue();
	levelorder(&c);
	puts("");
}
