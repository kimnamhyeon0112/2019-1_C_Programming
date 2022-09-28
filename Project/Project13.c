#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXCHARS 30
#define DEBUG 0

struct namerec
{
	char name[MAXCHARS];
	struct namerec *nextaddr;
};

struct namerec *firstrec;
void inout(FILE *);

int main()
{
	void insert(char *name);
	struct namerec *locate(char *name);
	void display();
	firstrec = NULL;
	display();
	FILE *outfile;
	outfile = fopen("data.txt", "w");
	if (outfile == NULL)
	{
		printf("\n파일을 열수 없습니다.\n");
		exit(1);
	}

	inout(outfile);
	fclose(outfile);
	printf("\n파일에 기록되었습니다.\n");

	return 0;
}

void inout(FILE *fname)
{
	int count;
	char name[100];
	printf("임의의 사람의 이름과 각자의 전화번호를 입력하시오.");
	printf("\n키보드의 x를 누르면 오름차순으로 정렬합니다.\n");
	while (1)
	{
		printf("이름과 전화번호를 입력하시오: ");
		gets(name);
		if (strcmp(name, "x") == 0)
			break;
		fprintf(fname, "%s\n", name);
	}
}

void insert(char *name)
{
	struct namerec *locate(char *);
	struct namerec *newaddr, *here;
	newaddr = (struct namerec *) malloc(sizeof(struct namerec));

	if (newaddr == (struct namerec *)NULL)
	{
		printf("\n요청한 공간을 할당할 수 없습니다.\n");
		exit(1);
	}

	if (firstrec == NULL)
	{
		newaddr->nextaddr = NULL;
		firstrec = newaddr;
	}
	else
	{
		here = locate(name);
		newaddr->nextaddr = here->nextaddr;
		here->nextaddr = newaddr;
	}

	strcpy(newaddr->name, name);
}

struct namerec *locate(char *name)
{
	struct namerec *one, *two;
	one = firstrec;
	two = one->nextaddr;

	if (two == NULL)
		return(one);
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
		{
			one = two;
			two = one->nextaddr;
		}
	}

	return (one);
}

void display()
{
	struct namerec *contents;

	contents = firstrec;
	printf("\n오름차순으로 정렬된 결과입니다");
	while (contents != NULL)
	{
		printf("%s\n", contents->name);
		contents = contents->nextaddr;
	}
}