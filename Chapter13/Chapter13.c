#include <stdio.h>

struct test
{
	int idnum;
	float *ptrpay;
};

int main()
{
	struct test salary;
	float pay = 456.2;
	salary.idnum = 12345;
	salary.ptrpay = &pay;

	printf("employee number %d was paid $%.2f", salary.idnum, *salary.ptrpay);
	return 0;
}	//program 13.1

#include <stdio.h>
#define NAME 30
#define PHONE 15

struct teletype
{
	char name[NAME];
	char phonenum[PHONE];
	struct teletype *nextaddr;
};

int main()
{
	struct teletype t1 = { "acme, sam", "(555) 898-2392" };
	struct teletype t2 = { "dolan, edith", "(555) 682-3104" };
	struct teletype t3 = { "lanfrank, john","(555) 718-4581" };
	struct teletype *first;

	first = &t1;
	t1.nextaddr = &t2;
	t2.nextaddr = &t3;
	t3.nextaddr = NULL;
	printf("%s\n%s\n%s\n", first->name, t1.nextaddr->name, t2.nextaddr->name);
	return 0;
}	//program 13.2

#include <stdio.h>
#define name 30
#define phone 15

struct teletype
{
	char name[name];
	char phonenum[phone];
	struct teletype *nextaddr;
};
void display(struct teletype *);
int main()
{
	struct teletype t1 = { "acme, sam", "(555) 898-2392" };
	struct teletype t2 = { "dolan, edith", "(555) 682-3104" };
	struct teletype t3 = { "lanfrank, john","(555) 718-4581" };
	struct teletype *link;
	link = &t1;
	t1.nextaddr = &t2;
	t2.nextaddr = &t3;
	t3.nextaddr = NULL;
	display(link);
}

void display(struct teletype *show)
{
	for (int i = 0; i < 3; i++)		//or while(show != null)
	{
		printf("%s\t%s\n", show->name, show->phonenum);
		show = show->nextaddr;
	}
}	//program 13.3

#include <stdio.h>
#define name 30
#define phone 15

struct teletype
{
	char name[name];
	char phonenum[phone];
	struct teletype *nextaddr;
};
void display(struct teletype *);
int main()
{
	struct teletype t1 = { "acme, sam", "(555) 898-2392" };
	struct teletype t2 = { "dolan, edith", "(555) 682-3104" };
	struct teletype t3 = { "lanfrank, john","(555) 718-4581" };
	struct teletype *link;
	link = &t1;
	t1.nextaddr = &t3;
	t3.nextaddr = NULL;
	display(link);
}

void display(struct teletype *show)
{
	for (int i = 0; i < 2; i++)		//or while(show != null)
	{
		printf("%s\t%s\n", show->name, show->phonenum);
		show = show->nextaddr;
	}
}	//chapter 13.1 exercise 1

#include <stdio.h>
#define name 30
#define phone 15

struct teletype
{
	char name[name];
	char phonenum[phone];
	struct teletype *nextaddr;
};
void display(struct teletype *);
int main()
{
	struct teletype t1 = { "acme, sam", "(555) 898-2392" };
	struct teletype t2 = { "dolan, edith", "(555) 682-3104" };
	struct teletype t3 = { "lanfrank, john","(555) 718-4581" };
	struct teletype *link;
	int num;
	printf("enter a num to delete the staff's information: ");
to:	scanf("%d", &num);
	switch (num)
	{
	case 1:
		link = &t2;
		t2.nextaddr = &t3;
		t3.nextaddr = NULL;
		break;
	case 2:
		link = &t1;
		t1.nextaddr = &t3;
		t3.nextaddr = NULL;
		break;
	case 3:
		link = &t1;
		t1.nextaddr = &t2;
		t2.nextaddr = NULL;
		break;
	default:
		printf("error: enter num 1 or 2 or 3: ");
		goto to;
	}
	display(link);
	return 0;
}

void display(struct teletype *show)
{
	for (int i = 0; i < 2; i++)		//or while(show != null)
	{
		printf("%s\t%s\n", show->name, show->phonenum);
		show = show->nextaddr;
	}
}	//chapter 13.1 exercise 2

#include <stdio.h>

struct test
{
	int idnum;
	float *ptrpay;
};

int main()
{
	struct test salary;
	float pay = 456.2;
	salary.idnum = 12345;
	salary.ptrpay = &pay;

	printf("employee number %d was paid $%.2f", salary.idnum, *salary.ptrpay);
	return 0;
}	//chapter 13.1 programming exercise 1

#include <stdio.h>
#define name 30
#define phone 15

struct teletype
{
	char name[name];
	char phonenum[phone];
	struct teletype *nextaddr;
};

int main()
{
	struct teletype t1 = { "acme, sam", "(555) 898-2392" };
	struct teletype t2 = { "dolan, edith", "(555) 682-3104" };
	struct teletype t3 = { "lanfrank, john","(555) 718-4581" };
	struct teletype *first;

	first = &t1;
	t1.nextaddr = &t2;
	t2.nextaddr = &t3;
	t3.nextaddr = NULL;
	printf("%s\n%s\n%s\n", first->name, t1.nextaddr->name, t2.nextaddr->name);
	return 0;
}	//chapter 13.1 programming exericse 2

#include <stdio.h>
#include <string.h>
#define size 20
struct family
{
	char name[size];
	char phonenum[size];
};

int main()
{
	struct family info[] = { "?????????", "010-6370-1209", "?????????","010-4111-9122","?????????","010-4112-9122","?????????","010-5811-9122" };
	struct family *ptr = NULL;
	int i;
	char search[size];
	printf("enter the name of family member: ");
	gets(search);
	for (i = 0; i < 4; i++)
	{
		if (strcmp(search, info[i].name) == 0)
			ptr = &info[i];
	}
	if (ptr == NULL)
		printf("????????? ????????? ??? ?????? ???????????? ?????? ??????\n");
	else
		printf("%s??? ??????????????? %s?????????",ptr->name,ptr->phonenum);
	return 0;
}	//chapter 13.1 programming exercise 3

#include <stdio.h>
#define size 5
typedef struct number
{
	int num;
	struct number *nextnum;
}printnum;

int main()
{
	printnum first = { 1 };
	printnum second = { 2 };
	printnum third = { 3 };
	printnum fourth = { 4 };
	printnum fifth = { 5 };
	printnum *ptr;
	ptr = &first;
	first.nextnum = &second;
	second.nextnum = &third;
	third.nextnum = &fourth;
	fourth.nextnum = &fifth;
	fifth.nextnum = NULL;

	for (int i = 0; i < size; i++)
	{
		printf("%d ", ptr->num);
		ptr = ptr->nextnum;
	}
	return 0;
}	//chapter 13.1 programming exercise 4

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node   // node ?????????
{
	char name[10];   // ??????
	char num[20];
	struct node *next;  // ????????? ??????????????? ?????????
	struct node *prev;  // ????????? ??????????????? ?????????
}node;

node *head;                   // ?????? ??????
node *tail;                   // ?????? ??????
void init();                      // ???????????? ????????? ?????????
void add();                       // 1.   ??? ???
void print();                      // 2.   ??? ???
void in(char *name, char *num);  // ????????????

int main()
{
	init();                            // ???????????? ?????????
	for (int i = 0; i < 3; i++)
		add();
	print();
	return 0;
}

void init()	// ???????????? ????????? ?????????
{
	head = (node*)malloc(sizeof(node)); // ??????????????????
	tail = (node*)malloc(sizeof(node)); // ??????????????????
	head->next = tail;      // ??????????????? ?????? ??????
	head->prev = head;      // ??????????????? ???????????? ?????????
	tail->prev = head;      // ??????????????? ??????
	tail->next = tail;      // ??????????????? ????????????
}

void add()	// 1.   ??? ???
{
	node *node = (node*)malloc(sizeof(node)); // ??? ?????? ??????
	char name[10], num[20];  // ??????????????????
	in(name, num);

	strcpy(node->name, name);    // ??? ????????? ?????? ??????
	strcpy(node->num, num);     // ??? ????????? ?????? ??????

	if (head->next == tail)     // ????????? ????????? ( ??????????????? ????????? )
	{
		// ????????? ?????? ????????? ??? ????????????
		head->next = node;
		node->prev = head;
		node->next = tail;
		tail->prev = node;
		return;
	}
	else         // ??????????????? ?????????
	{
		tail->prev->next = node; // ?????? ?????? ?????? ??? ?????? ??????
		node->prev = tail->prev;    // ??? ?????? ????????? ????????? ???????????? ( ??????????????? ?????? ????????? ??? ?????? ????????? )
		node->next = tail;   // ??? ?????? ????????? ??????
		tail->prev = node;   // ?????? ????????? ??? ??????
		return;
	}
}

void print()	// 2.   ??? ???
{
	node *tmp = head->next;    // tmp??? ????????? ?????? ?????? ???????????? ??????
	while (tmp != tail)     // ????????? ??? ( ???????????? )
	{
		printf(" ??????: %10s / ??????: %10s \n", tmp->name, tmp->num); // tmp??? ???????????? ?????? ???????????? ??????
		tmp = tmp->next;    // tmp ???????????? ??????
	}
	puts("");
}

void in(char *name, char *num)	// ????????????
{
	puts("?????? ??????:");
	scanf("%s", name);
	puts("?????? ??????:");
	scanf("%s", num);
}	//chapter 13.1 programming exercise 5

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *grades, num;
	printf("enter the number of grades to be processed: ");
	scanf("%d", &num);
	//grades = &num;
	grades = (int*)malloc(num * sizeof(int));
	if (grades == (int*)NULL)
	{
		printf("failed to allocate grades array\n");
		exit(1);
	}

	for (int i = 0; i < num; i++)
	{
		printf("enter a grade: ");
		scanf("%d", &grades[i]);
	}

	printf("an array was created for %d integers", num);
	printf("\nthe values stored in the array are:\n");
	for (int i = 0; i < num; i++)
		printf("%d\n", grades[i]);
	free(grades);
	return 0;
}	//program 13.4

#include <stdio.h>
#include <stdlib.h>

typedef struct namerec
{
	namerec *e;
	namerec *f;
};

int main()
{
	int *a, *b;
	float *c, *d;
	namerec question;
	a = (int*)malloc(sizeof(int));
	b = (int*)malloc(50 * sizeof(int));
	c = (float*)malloc(sizeof(float));
	d = (float*)malloc(100 * sizeof(float));
	question.e = (namerec*)malloc(sizeof(namerec));
	question.f = (namerec*)malloc(sizeof(namerec));
	return 0;
}	//chapter 13.2 exercise 3

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *grades, num;
	printf("enter the number of grades to be processed: ");
	scanf("%d", &num);
	//grades = &num;
	grades = (int*)malloc(num * sizeof(int));
	if (grades == (int*)NULL)
	{
		printf("failed to allocate grades array\n");
		exit(1);
	}

	for (int i = 0; i < num; i++)
	{
		printf("enter a grade: ");
		scanf("%d", &grades[i]);
	}

	printf("an array was created for %d integers", num);
	printf("\nthe values stored in the array are:\n");
	for (int i = 0; i < num; i++)
		printf("%d\n", grades[i]);
	free(grades);
	return 0;
}	//chapter 13.2 programming exercise 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxchars 30
typedef struct stack
{
	char name[maxchars];
	stack *prioraddr;
};

stack *tosp;		//top-of-stack-pointer

int main()
{
	void getname(), show();
	tosp = NULL;		//tosp??? ?????????
	getname();
	show();
	return 0;
}

void push(char *name)									//????????? ????????? ????????? ???????????? ??????
{
	stack *newaddr = (stack*)malloc(sizeof(stack));		//getname???????????? ????????? ?????? ?????? ????????? ????????? ?????? ex)4?????? ????????? ??????????????? char 4??? ??????
	strcpy(newaddr->name, name);						//?????? ???????????? ?????? name??? ??????, ??? ?????? ????????? ??????
	newaddr->prioraddr = tosp;							//????????? ?????? ????????? top??? ?????? ????????? ??? ?????? ????????????
	tosp = newaddr;										//????????? ?????? ???????????? top??? ???
}

void getname()
{
	char name[maxchars];
	void push(char *);
	printf("enter as many names as you wish, one per line\nto stop entering names, enter a single x\n");
	while (name != "x")
	{
		printf("enter a name: ");
		gets(name);
		if (strcmp(name, "x") == 0)
			break;
		push(name);
	}
}

void pop(char *name)					//???????????? ????????? ????????? ???????????? ??????
{
	stack *lastaddr;					//???????????? ????????? ????????????????????? ????????? ????????? ?????? x
	if (tosp != NULL)					//tosp??? ????????? ???, ?????? ????????? ??????????????? ???
	{
		strcpy(name, tosp->name);		//????????? ????????? ??????
		lastaddr = tosp->prioraddr;		//????????? ?????????(?????? ????????? ??? ??? ?????? ?????? ?????? ???)??? ????????????
		free(tosp);						//????????? ????????? ????????? ????????? ??????
		tosp = lastaddr;				//????????? ???????????? ????????????
	}
}

void show()
{
	char name[maxchars];
	void pop(char *);
	printf("\nthe names popped from the stack are:\n");
	while (tosp != NULL)
	{
		pop(name);
		printf("%s\n", name);
	}
}	//program 13.5

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxchars 30
typedef struct stack
{
	char name[maxchars];
	stack *prioraddr;
};

stack *tosp;

int main()
{
	void getname(), show();
	tosp = NULL;
	getname();
	show();
	return 0;
}

void push(stack *name)
{
	stack *newaddr = (stack*)malloc(sizeof(stack));
	strcpy(newaddr->name, name->name);
	newaddr->prioraddr = tosp;
	tosp = newaddr;
}

void getname()
{
	stack *ptr, name;
	ptr = &name;
	void push(stack *);
	printf("enter as many names as you wish, one per line\nto stop entering names, enter a single x\n");
	while (1)
	{
		printf("enter a name: ");
		gets(ptr->name);
		if (strcmp(ptr->name, "x") == 0)
			break;
		push(ptr);
	}
}

void pop(stack *name)
{
	stack *lastaddr;
	if (tosp != NULL)
	{
		strcpy(name->name, tosp->name);
		lastaddr = tosp->prioraddr;
		free(tosp);
		tosp = lastaddr;
	}
}

void show()
{
	stack *ptr, name;
	ptr = &name;
	void pop(stack *);
	printf("\nthe names popped from the stack are:\n");
	while (tosp != NULL)
	{
		pop(ptr);
		printf("%s\n", ptr->name);
	}
}	//chapter 13.3 programming exercise 1

#include <stdio.h>
#include <stdlib.h>
#define numel 10
typedef struct stack
{
	int idnum[numel];
	float hrpayrate[numel];
	stack *prioraddr;
}stack;

stack *tosp;

int main()
{
	void get(), show();
	tosp = NULL;
	get();
	show();
	return 0;
}

void push(int *num, float *rate)
{
	stack *newaddr = (stack*)malloc(sizeof(stack));
	num = newaddr->idnum;
	rate = newaddr->hrpayrate;
	newaddr->prioraddr = tosp;
	tosp = newaddr;
}

void get()
{
	int id[numel];
	float rate[numel];
	void push(int*, float*);
	char select;
	do
	{
		printf("enter the id number: ");
		scanf("%d", &id);
		printf("enter the hourly pay rate: ");
		scanf("%f", &rate);
		printf("do you want to continue?(y/n): ");
		scanf("%c", &select);
		scanf("%c", &select);
		push(id, rate);
	} while (select != 'n');
}

void pop(int *num, float *rate)
{
	stack *lastaddr;
	num = tosp->idnum;
	rate = tosp->hrpayrate;
	lastaddr = tosp->prioraddr;
	free(tosp);
	tosp = lastaddr;
}

void show()
{
	int id[numel];
	float rate[numel];
	void pop(int*, float*);
	while (tosp != NULL)
	{
		pop(id, rate);
		printf("%d, %f\n", id, rate);
	}
}	//chapter 13.3 programming exercise 2

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxchars 30

typedef struct stack
{
	char name[maxchars];
	stack *prioradddr;
};

stack *tosp;

int main()
{
	void get(), show(),poppedshow();
	int menu;
	tosp = NULL;
	while (1)
	{
		puts("????????? ????????? ???????????? ????????? ??????????????????.");
		puts("1. ?????? ?????? ??????");
		puts("2. ???????????? ?????? ??????");
		puts("3. ????????? ???????????? ?????? ??????");
		puts("???????????? ????????? ????????? 1,2,3??? ????????? ???????????? ??????????????????.");
		printf("????????????:");
		scanf("%d", &menu);
		switch (menu)
		{
		case 1:
			printf("????????????:");
			get();
			printf("\n\n");
			break;
		case 2:
			printf("????????? ??????:");
			poppedshow();
			printf("\n\n");
			break;
		case 3:
			printf("????????????:\n");
			show();
			printf("\n\n");
			break;
		default:
			return 0;
		}
	}
}

void push(char *name)
{
	stack *newaddr = (stack*)malloc(sizeof(stack));
	strcpy(newaddr->name, name);
	newaddr->prioradddr = tosp;
	tosp = newaddr;
}

void get()
{
	char name[maxchars];
	void push(char *);
	scanf("%c", name);
	gets(name);
	push(name);
}

void pop(char *name)
{
	stack *lastaddr;
	strcpy(name, tosp->name);
	lastaddr = tosp->prioradddr;
	free(tosp);
	tosp = lastaddr;
}

void show()
{
	char name[maxchars];
	void pop(char *);
	while (tosp != NULL)
	{
		pop(name);
		printf("%s\n", name);
	}
}

void poppedshow()
{
	char name[maxchars];
	void pop(char *);
	pop(name);
	printf("%s\n", name);
}	//chapter 13.3 programming exercise 3

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxchars 30

typedef struct queue
{
	char name[maxchars];
	queue *nextaddr;
};

queue *queuein, *queueout;

int main()
{
	void get(), show();
	queuein = NULL;
	queueout = NULL;
	get();
	show();
	return 0;
}

void get()
{
	char name[maxchars];
	void enque(char *);
	printf("enter as many names as you wish, one per line\nto stop entering names, enter a single x\n");
	while (1)
	{
		printf("enter a name: ");
		gets(name);
		if (strcmp(name, "x") == 0)
			break;
		enque(name);
	}
}

void enque(char *name)
{
	queue *newaddr = (queue*)malloc(sizeof(queue));
	if (queuein == NULL)
		queueout = newaddr;
	if (queuein != NULL)
		queuein->nextaddr = newaddr;
	strcpy(newaddr->name, name);
	newaddr->nextaddr = NULL;
	queuein = newaddr;
}

void show()
{
	char name[maxchars];
	void serve(char *);
	printf("\n\nthe names served from the queue are:\n");
	while (queueout != NULL)
	{
		serve(name);
		printf("%s\n", name);
	}
}

void serve(char *name)
{
	queue *nextaddr;
	strcpy(name, queueout->name);
	nextaddr = queueout->nextaddr;
	free(queueout);
	queueout = nextaddr;
}	//program 13.6

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxchars 30
typedef struct queue
{
	char name[maxchars];
	queue *link;
};

queue *queuein;
queue *queueout;

int main()
{
	void get(), show();
	queuein = NULL;
	queueout = NULL;
	get();
	show();
	return 0;
}

void enque(queue *name)
{
	queue *newaddr = (queue*)malloc(sizeof(queue));
	if (queuein == NULL)
		queueout = newaddr;
	if (queuein != NULL)
		queuein->link = newaddr;
	strcpy(newaddr->name, name->name);
	newaddr->link = NULL;
	queuein = newaddr;
}

void get()
{
	queue *ptr, name;
	ptr = &name;
	void enque(queue *);
	printf("enter as many names as you wish, one per line\nto stop entering names, enter a single x\n");
	while (1)
	{
		printf("enter a name: ");
		gets(ptr->name);
		if (strcmp(ptr->name, "x") == 0)
			break;
		enque(ptr);
	}
}

void serve(queue *name)
{
	queue *nextaddr;
	strcpy(name->name, queueout->name);
	nextaddr = queueout->link;
	free(queueout);
	queueout = nextaddr;
}

void show()
{
	queue *ptr, name;
	ptr = &name;
	void serve(queue *);
	printf("\n\nthe names served from the queue are:\n");
	while (queueout != NULL)
	{
		serve(ptr);
		printf("%s\n", ptr);
	}
}	//chapter 13.4 programming exercise 1

#include <stdio.h>
#include <stdlib.h>
#define numel 10
typedef struct queue
{
	int idnum[numel];
	float hrpayrate[numel];
	queue *nextaddr;
}queue;

queue *queuein;
queue *queueout;

int main()
{
	void get(), show();
	queuein = NULL;
	queueout = NULL;
	get();
	show();
	return 0;
}

void enque(int *num, float *rate)
{
	queue *newaddr = (queue*)malloc(sizeof(queue));
	if (queuein == NULL)
		queueout = newaddr;
	if (queuein != NULL)
		queuein->nextaddr = newaddr;
	num = newaddr->idnum;
	rate = newaddr->hrpayrate;
	newaddr->nextaddr = queueout;
	queuein = newaddr;
}

void get()
{
	int id[numel];
	float rate[numel];
	void enque(int*, float*);
	char select;
	do
	{
		printf("enter the id number: ");
		scanf("%d", &id);
		printf("enter the hourly pay rate: ");
		scanf("%f", &rate);
		printf("do you want to continue?(y/n): ");
		scanf("%c", &select);
		scanf("%c", &select);
		enque(id, rate);
	} while (select != 'n');
}

void serve(int *num, float *rate)
{
	queue *nextaddr;
	nextaddr = queueout->nextaddr;
	num = queueout->idnum;
	rate = queueout->hrpayrate;
	free(queueout);
	queueout = nextaddr;
}

void show()
{
	int id[numel];
	float rate[numel];
	void serve(int*, float*);
	while (queueout != NULL)
	{
		serve(id, rate);
		printf("%d, %f\n", id, rate);
	}
}	//chapter 13.4 programming exercise 2

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxchars 30

typedef struct queue
{
	char name[maxchars];
	queue *nextaddr;
}queue;

queue *queuein;
queue *queueout;

int main()
{
	void get(), show(), servedshow();
	queuein = NULL;
	queueout = NULL;
	int sel;
	while (1)
	{
		puts("????????? ????????? ???????????? ????????? ??????????????????.");
		puts("1. ?????? ??????");
		puts("2. ?????? ??????");
		puts("3. ??????");
		puts("??????????????? ??????????????? 1,2,3??? ????????? ???????????? ??????????????????.");
		printf("?????? ??????: ");
		scanf("%d", &sel);
		switch (sel)
		{
		case 1:
			printf("????????????: ");
			get();
			printf("\n\n");
			break;
		case 2:
			printf("??????: ");
			servedshow();
			printf("\n\n");
			break;
		case 3:
			printf("??????: \n");
			show();
			printf("\n\n");
			break;
		default:
			return 0;
		}
	}
}

void get()
{
	char name[maxchars];
	void enque(char *);
	scanf("%c",name);
	gets(name);
	enque(name);
}

void enque(char *name)
{
	queue *newaddr = (queue*)malloc(sizeof(queue));
	if (queuein == NULL)
		queueout = newaddr;
	if (queuein != NULL)
		queuein->nextaddr = newaddr;
	strcpy(newaddr->name, name);
	newaddr->nextaddr = NULL;
	queuein = newaddr;;
}

void show()
{
	char name[maxchars];
	void serve(char *);
	while (queueout != NULL)
	{
		serve(name);
		printf("%s\n", name);
	}
}

void serve(char *name)
{
	queue *nextaddr;
	strcpy(name, queueout->name);
	nextaddr = queueout->nextaddr;
	free(queueout);
	queueout = nextaddr;
}

void servedshow()
{
	char name[maxchars];
	void serve(char *);
	serve(name);
	printf("%s\n", name);
}	//chapter 13.4 programming exercise 3

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxchars 30

typedef struct allocate
{
	char name[maxchars];
	allocate *nextaddr;
}allocate;

allocate *first;

int main()
{
	void get(), show();
	first = NULL;
	get();
	show();
	return 0;
}

void get()
{
	char name[maxchars];
	void insert(char *);
	printf("enter as many names as you wish, one per line\nto stop entering names, enter a single x\n");
	while (1)
	{
		printf("enter a name: ");
		gets(name);
		if (strcmp(name, "x") == 0)
			break;
		insert(name);
	}
}

void insert(char *name)
{
	allocate *linear_locate(char *);
	allocate *newaddr, *here;
	newaddr = (allocate*)malloc(sizeof(allocate));
	if (first == NULL)
	{
		newaddr->nextaddr = NULL;
		first = newaddr;
	}
	else if (strcmp(name, first->name) < 0)	//????????????
	{
		newaddr->nextaddr = first;
		first = newaddr;
	}
	else
	{
		here = linear_locate(name);
		newaddr->nextaddr = here->nextaddr;
		here->nextaddr = newaddr;
	}
	strcpy(newaddr->name, name);
}

allocate linear_locate(char *name)
{
	allocate *one, *two;
	one = first;
	two = one->nextaddr;
	if (two == NULL)
		return one;
	while (1)
	{
		if (strcmp(name, two->name) < 0)
			break;
		else if (two->nextaddr == NULL)
		{
			one = two;
			break;
		}
		else
			one = two;
		two = one->nextaddr;
	}
	return (one);
}

void display()
{
	allocate *contents;
	contents = first;
	printf("\n\nthe names currently in the list, in alphabetical\n");
	while (contents != NULL)
	{
		printf("%s\n", contents->name);
		contents = contents->nextaddr;
	}
}	//program 13.7