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




/*  노드 추가 */
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

	/*  노드 5개 추가 */
	for (i = 0; i<5; i++) //이 반복문이 3번 도는 경우까지의 메모리 모양 그리기
	{
		NewNode = CreateNode(i);
		AppendNode(&List, NewNode);
	}
}








//더블링크드 리스트를

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
 wk = head->next;//첫번째 실제 빨래(data)
 while (wk != tail)
 {
  printf("%d ", wk->key);
  wk = wk->next;
 }
 puts("");
 wk = tail->prev;//첫번째 실제 빨래(data)
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
 if (wk != tail) //찾았다면
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


head와 tail 사이에 노드를
정렬삽입(head뒤에 만 삽입), 검색 후 삭제,
모든 노드출력(head->tail버젼,
 tail->head버젼)하는 함수를 완성하시오


void printInt(int *arr, int size);
void printDbl(double *arr, int size);
void printstr(char(*arr)[7], int size);

int comp_i(const void* a, const void* b) {
 return (*(int*)a - *(int*)b);
}

//라이브러리 제공하는 qsort를 위한 comp_d 함수 완성
int comp_d(const void* a, const void* b) {

 if (*(double*)a > *(double*)b)
  return 1;
 else if (*(double*)a < *(double*)b)
  return -1;
 else
  return 0;
 //return (*(double*)a - *(double*)b);
}
//라이브러리 제공하는 qsort를 위한 comp_s 함수 완성
int comp_s(const void* a, const void* b) {

 return strcmp((char *)a, (char*)b); //printstr 함수 수정하기

}




int main(void) {
 int arri[] = { 3,4,1,5,2,8,9,6,10,7 };
 double arrd[] = { 3.2, 5.6, 4.3, 8.7, 2.3, 4.5, 2.1, 2.3, 4.6, 4.5 };
 char arrs[][7] = { "한태희","신면수","방준일",
     "임성재","조휘정","나용한",
     "전준하","백영민","정주현" };
 qsort(arri, sizeof(arri) / sizeof(arri[0]), sizeof(int), comp_i);
 printInt(arri, sizeof(arri) / sizeof(arri[0]));

 qsort(arrd, sizeof(arrd) / sizeof(arrd[0]), sizeof(double), comp_d);
 printDbl(arrd, sizeof(arrd) / sizeof(arrd[0]));

 //라이브러리 qsort를 이용하여 2차원배열에 있는 문자열을 정렬합시다.

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

  //pivot보다 큰값을 찾는 구문
  while (arr[++big] <= pivot)
   ;
  //pivot 보다 작거나 같은 값을 찾는 구문
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

main()//qsort를 문자열정렬 형태로 바꿔보기
{  
 char a[][7] = { "한태희","신면수","방준일",
     "임성재","조휘정","나용한",
     "전준하","백영민","정주현" };
 int arri[] = { 3,4,1,5,2,8,9,6,10,7 };
 int dx;
 qsort(arri, 0, 9);  //insert(arri, 10);
 loop(dx, 0, 10)
  printf("%d ", arri[dx]);
 

}





다음 정렬을 이용하여 2차원배열을 정렬 하시오

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
 char a[][7] = { "한태희","신면수","방준일",
     "임성재","조휘정","나용한",
     "전준하","백영민","정주현" };
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
  a[dx] = min;//교환이 적다
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
List *head, *tail;//전역포인터만들기
void init_List(void)
{
 head = (List *)malloc(sizeof(List)); //왼쪽기둥
 tail = (List *)malloc(sizeof(List)); //오른쪽기둥
 head->next = tail; //빨래줄 만들기 완료
 tail->next = tail; //오른쪽 기둥 빨래줄 매듭ㄱ
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
 wk = head->next; //head면 기둥을 head->next 첫번째 데이터
 while (wk != tail)
 {
  printf("%d ", wk->key);//첫번째 데이터를 출력하고
  wk = wk->next;   //다음 list의 주소로 옮김
 }
 //printf("%d ", head->next->key);
 //printf("%d ", head->next->next->key);
}
void find_List(int find)
{
 List *wk;
 wk = head->next; //head->next 첫번째 데이터(빨래)
      //while (wk != tail)
      //{
      // if (wk->key != find)
      //  wk = wk->next;   //다음 list의 주소로 옮김
      // else
      //  break;
      //}
 while (wk->key != find && wk != tail)
  wk = wk->next;

 if (wk != tail)
  printf("찾는 %d값이 있습니다.", find);

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
 //빨래기둥만들기 + 빨래줄 만들기
 init_List();

 ordered_insert_List(5);
 ordered_insert_List(3);

 //중복된 데이터는 넣지 않는 함수로 살짝 바꿔보시오.
 ordered_insert_List(7);  //3,5,7
 ordered_insert_List(7);  //3,5,7

        //insert_after(5); //head-> 5 -> tail
        //insert_after(3); //head-> 3 -> 5 -> tail
 view_List(); //2개의 빨래기둥사이의 빨래들만 본다.
     //puts("");
     //find_List(7); //찾으려면 빨래부터 찾는다.
     //delete_after();//무조건 head가 가리키는 첫번째 데이터만 삭제
     //puts("");
     //view_List();
     //찾는데이터 5가 있습니다.

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
