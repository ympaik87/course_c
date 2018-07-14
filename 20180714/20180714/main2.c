#include <stdio.h>
#include <stdlib.h>

typedef struct _list List;

struct _list {
	int key;
	struct _list *next;
};

List *head, *tail; // 전역 포인터 생성

void init_list(void)
{
	head = (List *)malloc(sizeof(List)); // 왼쪽 기둥
	tail = (List *)malloc(sizeof(List)); // 오른쪽 기둥
	head->next = tail; // 빨래줄 만들기 완료
	tail->next = tail; // 오른쪽 기둥 빨래줄 매듭
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
	wk = head->next; // head면 기둥을, head->next 첫번째 데이터

	while (wk!=tail) {
		printf("%d ", wk->key); // 첫번째 데이터를 출력하고
		wk = wk->next; // 다음 list의 주소로 옮긴다.
	}
}

void find_list(int data)
{
	List *wk;
	wk = head->next;

	/*while (wk != tail) {
		if (data == wk->key) {
			printf("%d가 있습니다.", data);
			return;
		}
		else {
			wk = wk->next;
		}
	}
	printf("%d이(가) 없습니다.", data);*/

	while (wk->key != data && wk != tail)
		wk = wk->next;
	if (wk != tail)
		printf("찾는 %d값이 있습니다.", data);
	else
		printf("찾는 %d값이 없습니다.", data);
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
			printf("%d이(가) 이미 있습니다.\n", data);
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
	// 빨래 기둥 만들기 + 빨래줄 만들기
	init_list();
	insert_after(5); // head -> 5 -> tail
	insert_after(3); // head -> 3 -> 5 -> tail
	view_list(); // 2개의 빠래기둥 사이의 빨래들만 본다.
	puts("");
	find_list(30);
	delete_after(); //무조건 head가 가르키는 첫번째 데이터만 삭제
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