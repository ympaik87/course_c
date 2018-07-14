#include <stdio.h>
#include <stdlib.h>

typedef struct _list List;

struct _list {
	int key;
	struct _list *next;
};

List *head, *tail; // ���� ������ ����

void init_list(void)
{
	head = (List *)malloc(sizeof(List)); // ���� ���
	tail = (List *)malloc(sizeof(List)); // ������ ���
	head->next = tail; // ������ ����� �Ϸ�
	tail->next = tail; // ������ ��� ������ �ŵ�
}

List * create_list(int data)
{
	List *nw = (List *)malloc(sizeof(List));
	nw->key = data;
	nw->next = NULL;
	return nw;
}

void insert_after(int data)
{
	/*List *nw = (List *)malloc(sizeof(List));
	nw->key = data;*/
	List *nw = create_list(data);
	
	nw->next = head->next;
	head->next = nw;
}

void view_list(void)
{
	/*printf("%d ", head->next->key);
	printf("%d ", head->next->next->key);*/

	List *wk;
	wk = head->next; // head�� �����, head->next ù��° ������

	while (wk!=tail) {
		printf("%d ", wk->key); // ù��° �����͸� ����ϰ�
		wk = wk->next; // ���� list�� �ּҷ� �ű��.
	}
}

void find_list(int data)
{
	List *wk;
	wk = head->next;

	/*while (wk != tail) {
		if (data == wk->key) {
			printf("%d�� �ֽ��ϴ�.", data);
			return;
		}
		else {
			wk = wk->next;
		}
	}
	printf("%d��(��) �����ϴ�.", data);*/

	while (wk->key != data && wk != tail)
		wk = wk->next;
	if (wk != tail)
		printf("ã�� %d���� �ֽ��ϴ�.", data);
	else
		printf("ã�� %d���� �����ϴ�.", data);
}

void delete_after(void)
{
	List *kill;
	kill = head->next;
	head->next = kill->next;
	free(kill);
}

void ordered_insert_list(int data)
{
	List *pp, *cmp;
	List *nw;
	pp = head;
	cmp = head->next;

	while (cmp->key <= data && cmp != tail)
	{
		pp = pp->next;
		cmp = cmp->next;
	}
	nw = create_list(data);
	pp->next = nw;
	nw->next = cmp;
}

void filter_dup_ordered_insert_list(int data)
{
	List *pp, *cmp;
	List *nw;
	pp = head;
	cmp = head->next;

	while (cmp->key <= data && cmp != tail)
	{
		if (cmp->key == data)
		{
			printf("%d��(��) �̹� �ֽ��ϴ�.\n", data);
			return;
		}
		pp = pp->next;
		cmp = cmp->next;
	}
	nw = create_list(data);
	pp->next = nw;
	nw->next = cmp;
}

void main()
{
	// ���� ��� ����� + ������ �����
	init_list();
	insert_after(5); // head -> 5 -> tail
	insert_after(3); // head -> 3 -> 5 -> tail
	view_list(); // 2���� ������� ������ �����鸸 ����.
	puts("");
	find_list(30);
	delete_after(); //������ head�� ����Ű�� ù��° �����͸� ����
	puts("");
	view_list();
	puts("");

	init_list();
	ordered_insert_list(5);
	ordered_insert_list(3);
	ordered_insert_list(7);
	filter_dup_ordered_insert_list(7);
	view_list();

	puts("");
}