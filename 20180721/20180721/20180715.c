#include<stdio.h>
#pragma warning (disable:4996)

#include <stdio.h>
#include <stdlib.h>
#define loop(v, lo, hi) for((v)=(lo); (v)<(hi); (v)++)
#define swap(a,b) \
 do{int t; t=a;a=b;b=t;}while(0)


#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

typedef struct tagNode
{
	ElementType Data;
	struct tagNode* PrevNode;
	struct tagNode* NextNode;
} Node;
Node* CreateNode(ElementType NewData)
{
	Node* NewNode = (Node*)malloc(sizeof(Node));

	NewNode->Data = NewData;
	NewNode->PrevNode = NULL;
	NewNode->NextNode = NULL;

	return NewNode;
}




/*  ��� �߰� */
void AppendNode(Node** Head, Node* NewNode)
{

	if ((*Head) == NULL)
	{
		*Head = NewNode;
		(*Head)->NextNode = *Head;
		(*Head)->PrevNode = *Head;
	}
	else
	{

		Node* Tail = (*Head)->PrevNode;

		Tail->NextNode->PrevNode = NewNode;
		Tail->NextNode = NewNode;

		NewNode->NextNode = (*Head);
		NewNode->PrevNode = Tail;

	}
}
int main(void)
{
	int   i = 0;
	int   Count = 0;
	Node* List = NULL;
	Node* NewNode = NULL;
	Node* Current = NULL;

	/*  ��� 5�� �߰� */
	for (i = 0; i<5; i++) //�� �ݺ����� 3�� ���� �������� �޸� ��� �׸���
	{
		NewNode = CreateNode(i);
		AppendNode(&List, NewNode);
	}
}








//����ũ�� ����Ʈ��

typedef struct _list List;
struct _list {
 int key;
 struct _list *prev;
 struct _list *next;
};
List *head, *tail;
void init_dlist(void)
{
 head = (List *)malloc(sizeof(List));
 tail = (List *)malloc(sizeof(List));
 head->next = tail;
 tail->prev = head;
 head->prev = head;
 tail->next = tail;
}
void insert_after(int data)
{
 List *nw = (List *)malloc(sizeof(List));
 nw->key = data;

 nw->next = head->next;
 head->next->prev = nw;
 head->next = nw;
 nw->prev = head;
}
void view_dlist(void)
{
 List *wk;
 wk = head->next;//ù��° ���� ����(data)
 while (wk != tail)
 {
  printf("%d ", wk->key);
  wk = wk->next;
 }
 puts("");
 wk = tail->prev;//ù��° ���� ����(data)
 while (wk != head)
 {
  printf("%d ", wk->key);
  wk = wk->prev;
 }
}
void find_delete(int kill)
{
 List *wk;
 wk = head->next;
 while (wk->key != kill && wk != tail)
 {
  wk = wk->next;
 }
 if (wk != tail) //ã�Ҵٸ�
 {
  wk->prev->next = wk->next;
  wk->next->prev = wk->prev;
  free(wk);
 }
}
int main()
{
 init_dlist();
 insert_after(3);
 insert_after(4);
 insert_after(1);
 insert_after(5);
 insert_after(2);
 view_dlist();
 find_delete(1);
 puts("");
 view_dlist();

}


head�� tail ���̿� ��带
���Ļ���(head�ڿ� �� ����), �˻� �� ����,
��� ������(head->tail����,
 tail->head����)�ϴ� �Լ��� �ϼ��Ͻÿ�


void printInt(int *arr, int size);
void printDbl(double *arr, int size);
void printstr(char(*arr)[7], int size);

int comp_i(const void* a, const void* b) {
 return (*(int*)a - *(int*)b);
}

//���̺귯�� �����ϴ� qsort�� ���� comp_d �Լ� �ϼ�
int comp_d(const void* a, const void* b) {

 if (*(double*)a > *(double*)b)
  return 1;
 else if (*(double*)a < *(double*)b)
  return -1;
 else
  return 0;
 //return (*(double*)a - *(double*)b);
}
//���̺귯�� �����ϴ� qsort�� ���� comp_s �Լ� �ϼ�
int comp_s(const void* a, const void* b) {

 return strcmp((char *)a, (char*)b); //printstr �Լ� �����ϱ�

}




int main(void) {
 int arri[] = { 3,4,1,5,2,8,9,6,10,7 };
 double arrd[] = { 3.2, 5.6, 4.3, 8.7, 2.3, 4.5, 2.1, 2.3, 4.6, 4.5 };
 char arrs[][7] = { "������","�Ÿ��","������",
     "�Ӽ���","������","������",
     "������","�鿵��","������" };
 qsort(arri, sizeof(arri) / sizeof(arri[0]), sizeof(int), comp_i);
 printInt(arri, sizeof(arri) / sizeof(arri[0]));

 qsort(arrd, sizeof(arrd) / sizeof(arrd[0]), sizeof(double), comp_d);
 printDbl(arrd, sizeof(arrd) / sizeof(arrd[0]));

 //���̺귯�� qsort�� �̿��Ͽ� 2�����迭�� �ִ� ���ڿ��� �����սô�.

 qsort(arrs, sizeof(arrs) / sizeof(arrs[0]), sizeof(arrs[0]), comp_s);
 printstr(arrs, sizeof(arrs) / sizeof(arrs[0]));

 return 0;
}
void printInt(int *arr, int size) {
 int dx = 0;
 for (dx = 0; dx< size; ++dx) {
  printf("%d ", arr[dx]);
 }
 printf("\n");
}

void printDbl(double *arr, int size) {
 int dx = 0;
 for (dx = 0; dx< size; ++dx) {
  printf("%.1f  ", arr[dx]);
 }
 printf("\n");
}

void printstr(char (*arr)[7], int size) {
 int dx = 0;
 for (dx = 0; dx< size; ++dx) {
  printf("%s ", arr[dx]);
 }
 printf("\n");
}



int partition(int arr[], int s, int e)
{
 int big, small, pivot;
 big = s;
 small = e + 1;
 pivot = arr[big];
 while (big < small) {

  //pivot���� ū���� ã�� ����
  while (arr[++big] <= pivot)
   ;
  //pivot ���� �۰ų� ���� ���� ã�� ����
  while (arr[--small] > pivot)
   ;
  if (big < small) {
   swap(arr[big], arr[small]);
  }
 }
 swap(arr[s], arr[small]);
 return small;
}
void qsort(int arr[], int s, int e)
{
 int mid;
 if (s < e) {
  mid = partition(arr, s, e);
  qsort(arr, s, mid - 1);
  qsort(arr, mid + 1, e);
 }
}

main()//qsort�� ���ڿ����� ���·� �ٲ㺸��
{  
 char a[][7] = { "������","�Ÿ��","������",
     "�Ӽ���","������","������",
     "������","�鿵��","������" };
 int arri[] = { 3,4,1,5,2,8,9,6,10,7 };
 int dx;
 qsort(arri, 0, 9);  //insert(arri, 10);
 loop(dx, 0, 10)
  printf("%d ", arri[dx]);
 

}





���� ������ �̿��Ͽ� 2�����迭�� ���� �Ͻÿ�

void isort(char a[][7], int n) //int a[]
{
 int i, j;// , t;
 char t[7];
 for (i = 1; i < n; i++)
 {
  strcpy(t, a[i]);// t = a[i];
  j = i;
  while (strcmp(a[j - 1] ,t)>0 && j > 0)//a[j - 1] > t
  {
   strcpy(a[j], a[j - 1]);// a[j] = a[j - 1];
   j--;
  }
  strcpy(a[j], t);// a[j] = t;
 }
}
#define d2arrsize(a) sizeof(a) / sizeof(a[0])
int main()
{
 int dx;
 char a[][7] = { "������","�Ÿ��","������",
     "�Ӽ���","������","������",
     "������","�鿵��","������" };
 //isort(a, 9);
 isort(a, d2arrsize(a)); //63/7
 loop(dx, 0, 9)
  puts(a[dx]);
}

struct engine {
 int piston;
 int fan;
 int pipe;
};
struct car {
 struct engine *sedan, *sports;
};
void hyundai(struct car *man)
{
 struct engine *p = man->sedan;
 p->piston = 50;
 p->fan = 30;
 p->pipe = 20;
}
void main()
{
 struct car hi;
 hi.sedan = (struct engine *)malloc(sizeof(struct engine));
 hyundai(&hi);
 printf("%d %d %d \n", hi.sedan->piston, hi.sedan->fan, hi.sedan->pipe);
}


void Selectionsort(int A[], int n) {
 int dx, k, min;
 int t;

 for (dx = 0; dx<n - 1; dx++)
 {
  min = dx;
  for (k = dx + 1; k<n; k++) {
   if (A[k]<A[min]) {
    min = k;
   }
  }
  t = A[min];
  A[min] = A[dx];
  A[dx] = t;
 }

}
void Selectionsort2(int a[], int n) {
 int min;
 int minindex;
 int dx, k;

 for (dx = 0; dx < n - 1; dx++) {
  minindex = dx;
  min = a[dx];
  for (k = dx + 1; k < n; k++) {
   if (min > a[k]) {
    min = a[k];
    minindex = k;
   }
  }
  a[minindex] = a[dx];
  a[dx] = min;//��ȯ�� ����
 }
}
#define start(x) x=clock()
#define loop(v, lo, hi) for((v)=(lo); (v)<(hi); (v)++)
#define end(x) { printf("\n%d\n", clock()-x) ;}
main()
{
 int idx;
 int c;
 int a[] = { 3,4,1,5,2 };
 start(c);
 loop(idx, 0, 10000000)
 {
  Selectionsort(a, 5);
 }
 end(c);

 start(c);
 loop(idx, 0, 10000000)
 {
  Selectionsort2(a, 5);
 }
 end(c);
}

int main()
{
 int dx;
 int a[] = { 3,4,1,5,2 };
 Selectionsort2(a, 5);

 for (dx = 0; dx < 5; dx++)
  printf("%d ", a[dx]);

}


typedef struct _list List;
struct _list {
 int key;
 struct _list *next;
};
List *head, *tail;//���������͸����
void init_List(void)
{
 head = (List *)malloc(sizeof(List)); //���ʱ��
 tail = (List *)malloc(sizeof(List)); //�����ʱ��
 head->next = tail; //������ ����� �Ϸ�
 tail->next = tail; //������ ��� ������ �ŵ줡
}

List * create_List(int data)
{
 List *nw = (List *)malloc(sizeof(List));
 nw->key = data; // = 5
 nw->next = NULL;
 return nw;
}
void insert_after(int data)
{
 //List *nw = (List *)malloc(sizeof(List));
 //nw->key = data; // = 5
 List *nw = create_List(data);

 nw->next = head->next;
 head->next = nw;
}
void view_List(void)
{
 List *wk;
 wk = head->next; //head�� ����� head->next ù��° ������
 while (wk != tail)
 {
  printf("%d ", wk->key);//ù��° �����͸� ����ϰ�
  wk = wk->next;   //���� list�� �ּҷ� �ű�
 }
 //printf("%d ", head->next->key);
 //printf("%d ", head->next->next->key);
}
void find_List(int find)
{
 List *wk;
 wk = head->next; //head->next ù��° ������(����)
      //while (wk != tail)
      //{
      // if (wk->key != find)
      //  wk = wk->next;   //���� list�� �ּҷ� �ű�
      // else
      //  break;
      //}
 while (wk->key != find && wk != tail)
  wk = wk->next;

 if (wk != tail)
  printf("ã�� %d���� �ֽ��ϴ�.", find);

}
void delete_after(void)
{
 List *kill;
 kill = head->next;
 head->next = kill->next;
 free(kill);
}

void ordered_insert_List(int data)
{
 List *pp, *cmp;
 List *nw;
 pp = head;
 cmp = head->next;

 while (cmp->key <= data && cmp != tail)  //3 < 5  // 4 < 5  // 4.5 < 5  // 7 < 5
 {
  pp = pp->next;
  cmp = cmp->next;
 }
 nw = create_List(data);
 pp->next = nw;
 nw->next = cmp;
}
int main()
{
 //������ո���� + ������ �����
 init_List();

 ordered_insert_List(5);
 ordered_insert_List(3);

 //�ߺ��� �����ʹ� ���� �ʴ� �Լ��� ��¦ �ٲ㺸�ÿ�.
 ordered_insert_List(7);  //3,5,7
 ordered_insert_List(7);  //3,5,7

        //insert_after(5); //head-> 5 -> tail
        //insert_after(3); //head-> 3 -> 5 -> tail
 view_List(); //2���� ������ջ����� �����鸸 ����.
     //puts("");
     //find_List(7); //ã������ �������� ã�´�.
     //delete_after();//������ head�� ����Ű�� ù��° �����͸� ����
     //puts("");
     //view_List();
     //ã�µ����� 5�� �ֽ��ϴ�.

}





int ala(int a, int b)
{
 int mul = 0;
 while(a>0) //while(a)
 {
  if (a % 2 == 1) //if((a&0x1)==1)
   mul += b;
  a /= 2; //a>>=1;
  b *= 2; //b<<=1;
 }
 return mul;
}
#define swap(a,b) \
 do{int t; t=a;a=b;b=t;}while(0)

int gcd(int a, int b)
{
 while (a)
 {
  if (a < b)
   swap(a, b);
  a = a - b;
 }
 return b;
}
int main()
{
// printf("%d\n", ala(27, 65));
 printf("%d\n", gcd(220, 30));
}


//
void lower(char ch)
{
 if (ch>'z')
  return;
 else
 {
  printf("%c ", ch);
  lower(ch + 1);
 }
}
void upper(char ch)
{
 if (ch<'A')
  return;
 else
 {
  upper(ch - 1);
  printf("%c ", ch);

 }
}
int main()
{
 upper('D');
}
