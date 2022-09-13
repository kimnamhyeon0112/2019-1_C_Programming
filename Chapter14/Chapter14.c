//chapter 14.1 enum
#include <stdio.h>

int main()
{
	enum { mon = 1, tue, wed, thu, fri, sat, sun };
	for (int i = 0; i < 7; i++)
		printf("%d\n", mon, tue, wed, thu, fri, sat, sun);
}

//chapter 14.1 조건수식
#ifndef stdio.h
#include <stdio.h>
#endif
int main()
{
	int rate = 40;
	if (rate >= 40) rate = 41;
    else rate = 39;
	rate = rate >= 40 ? 41 : 39;
	printf("%d", rate);
}

//chapter 14.2 programming exercise 1
#include <stdio.h>

int main()
{
	char ch = '!';
	int num = ch, val[20] = { 0, }, i = 0, cnt = 0;
	while (1)
	{
		val[i] = num % 2;
		num /= 2;
		i++;
		cnt++;
		if (num == 0)
			break;
	}
	if (cnt < 8)
	{
		cnt = 8 - cnt;
		for (int j = 0; j < cnt; j++)
			printf("%d", 0);
	}
	for (int j = i - 1; j >= 0; j--)
	{
		printf("%d", val[j]);
	}
}

//chapter 14.2 programming exercise 2
#include <stdio.h>

int main()
{
	int okay = 0345, val[20] = { 0, }, i = 0, cnt = 0;
	while (1)
	{
		val[i] = okay % 2;
		okay /= 2;
		i++;
		cnt++;
		if (okay == 0)
		{
			break;
		}
	}
	if (cnt < 8)
	{
		cnt = 8 - cnt;
		for (int j = 0; j < cnt; j++)
			printf("%d", 0);
	}
	for (int j = i - 1; j >= 0; j--)
		printf("%d", val[j]);
	printf("\n");
	for (int j = 0; j < i; j++)
		printf("%d", val[j]);
}

//chapter 14.3 programming exercise 1
#include <stdio.h>
#define negate(x) -x

int main()
{
	int x = 1;
	printf("%d",negate(x));
	return 0;
}

//chapter 14.3 programming exercise 2
#include <stdio.h>
#define absval(x) x < 0 ? -x : x

int main()
{
	int x = -12;
	printf("%d", absval(x));
	return 0;
}

//chapter 14.3 programming exercise 3
#include <stdio.h>
#define circum(r) 2.0 * 3.1416 * r

int main()
{
	float r = 5.0;
	printf("%f", circum(r));
	return 0;
}

//chapter 14.3 programming exercise 4
#include <stdio.h>
#define min(x,y) x < y ? x : y

int main()
{
	int x = 1, y = 2;
	printf("min: %d", min(x, y));
	return 0;
}

//chapter 14.3 programming exercise 4
#include <stdio.h>
#define max(x,y) x > y ? x : y

int main()
{
	int x = 1, y = 2;
	printf("max: %d", max(x, y));
	return 0;
}

//program 14.3
#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;
	printf("the number of items on the command line is %d\n\n", argc);
	for (i = 0; i < argc; i++)
	{
		printf("the address sotred in argv[%d] is %u\n", i, argv[i]);
		printf("the character pointed to is %c\n", *argv[i]);
	}
	return 0;
}

//program 14.4
#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;
	printf("the following arguments were passed to main():");
	for (i = 1; i < argc; i++)	//i=0으로 초기화를 하면 c:\users\knh30\source\repos\project20\debug\project20.exe가 입력된후 three blind mice가 출력됨
		printf("%s ", argv[i]);
	printf("\n");
	return 0;
}

//chapter 14.4 programming exercise 1, 2
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	char filename[20],line[20];
	int month, day, year, i = 1;
	printf("enter the filename: ");
	scanf("%s", argv[0]);
	fp = fopen(argv[0], "rt");
	if (fp == NULL)
	{
		printf("this file is not existed");
		exit(1);
	}
	while (fgets(line, 20, fp) != NULL)
	{
		printf("%d. %s", i, line);
		i++;
	}
	fclose(fp);
	return 0;
}

//chapter 14.4 programming exercise 3
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	char filename[20];
	long int last, offset;
	printf("enter the filename: ");
	scanf("%s", argv[0]);
	fp = fopen(argv[0], "rt");
	fseek(fp, 0l, SEEK_END);	//포인터의 위치를 text.dat의 끝으로 이동후 이동을 하지 않으므로 파일 끝에 위치함
	last = ftell(fp);			//포인터가 끝에 있으므로 last는 text.dat의 파일크기와 동일함
	printf("%d", last);
	fclose(fp);
	return 0;
}

//chapter 14.4 programming exercise 4
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int a = atoi(argv[1]), b = atoi(argv[2]);
	printf("%d", a * b);
}