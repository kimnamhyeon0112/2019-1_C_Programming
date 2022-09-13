#include <stdio.h>

int main()
{
	int num[5] = { 98,87,92,79,85 };
	int i;

	for (i = 0; i < 5; i++)
		printf("element %d is %d\n", i, num[i]);
	return 0;
}	//program 11.1

#include <stdio.h>

int main()
{
	int i, *ptr;
	int grade[5] = { 98,87,92,79,85 };
	ptr = &grade[0];
	for (i = 0; i < 5; i++)
		printf("element %d is %d\n", i, *(ptr + i));
	return 0;
}	//program 11.2

#include <stdio.h>

int main()
{
	int grade[] = { 98,87,92,79,85 };
	int i;
	for (i = 0; i < 5; i++)
		printf("element %d is %d\n", i, *(grade + i));
	return 0;
}	//program 11.3

#include <stdio.h>

int main()
{
	char str[] = "this is a sample";
	int i;
	char *ptr;
	ptr = &str[0];
	printf("1.배열 자체를 포인터 사용\n");
	for (i = 0; i < 17; i++)
		printf("%c", *(str + i));
	printf("\n2. 포인터 선언\n");
	for (i = 0; i < 17; i++)
		printf("%c", *(ptr + i));
	return 0;
}	//chapter 11.1 programming exercise 1.a

#include <stdio.h>

int main()
{
	char str[] = "this is a sample";
	int i;
	char *ptr;
	ptr = &str[0];
	printf("1.배열 자체를 포인터 사용\n");
	for (i = 10; i <= 15; i++)
		printf("%c,", *(str + i));
	printf("\n2. 포인터 선언\n");
	for (i = 10; i <= 15; i++)
		printf("%c,", *(ptr + i));
	return 0;
}   //chapter 11.1 programming exercise 1.b

#include <stdio.h>

int main()
{
	float rates[] = { 12.9,19.6,11.4,13.7,9.5,15.2,17.6 };
	int i;
	for (i = 0; i < 7; i++)
		printf("element %d is %.1f\n", i, *(rates + i));
	return 0;
}	//chapter 11.1 programming exercise 2

#include <stdio.h>

int main()
{
	char message1[] = "input the following data";
	char message2[] = "------------";
	char message3[] = "enter the data:";
	char message4[] = "enter the account number:";
	int i;
	for (i = 0; i < 25; i++)
		printf("%c", *(message1 + i));
	printf("\n");
	for (i = 0; i < 13; i++)
		printf("%c", *(message2 + i));
	printf("\n");
	for (i = 0; i < 16; i++)
		printf("%c", *(message3 + i));
	printf("\n");
	for (i = 0; i < 26; i++)
		printf("%c", *(message4 + i));
	return 0;
}	//chapter 11.1 programming exercise 3

#include <stdio.h>

int main()
{
	char strtest[] = "this is a test";
	int i;
	for (i = 0; i < 15; i++)
		printf("%c", *(strtest + i));
}	//chapter 11.1 programming exercise 4

#include <stdio.h>
#define numel 5
int main()
{
	int nums[numel] = { 16,54,7,43,-5 };
	int i, total = 0, *nptr;
	nptr = nums;
	for (i = 0; i < numel; i++)
		total = total + *nptr++;
	printf("the total of the array elements is %d", total);
	return 0;
}	//program 11.4

#include <stdio.h>
#define numel 5
int main()
{
	int nums[numel] = { 16,54,7,43,-5 };
	int i, total = 0, *nptr;
	nptr = nums;
	while (nptr < nums + 5)
		total += *nptr++;
	printf("the total of the array elements is %d", total);
	return 0;
}	//program 11.5

#include <stdio.h>
#define numel 5
int main()
{
	int nums[numel] = { 16,54,7,43,-5 };
	int i, total = 0, *nptr;
	nptr = nums;
	for (i = 0; i < numel; i++)
		total += *nptr++;
	printf("the total of the array elements is %d", total);
	return 0;
}	//chapter 11.2 programming exercise 1

#include <stdio.h>
#define numel 13

int main()
{
	float rates[numel] = { 6.25,6.50,6.8,7.2,7.35,7.5,7.65,7.8,9.2,9.4,9.6,9.8,9.0 };
	int i;
	float *disppt;
	disppt = rates;
	for (i = 0; i < numel; i++)
		printf("%.2f ", *disppt++);
	return 0;
}	//chapter 11.2 programming exercise 2.a

#include <stdio.h>
#define numel 13

int main()
{
	float rates[numel] = { 6.25,6.50,6.8,7.2,7.35,7.5,7.65,7.8,9.2,9.4,9.6,9.8,9.0 };
	float *disppt;
	disppt = rates;
	while (disppt < rates + numel)
		printf("%.2f ", *disppt++);
	return 0;
}	//chapter 11.2 programming exercise 2.b

#include <stdio.h>

int main()
{
	char strng[] = "hooray for all of us";
	int i;
	char *messptr;
	messptr = strng;
	for (i = 0; strng[i]; i++)
		printf("%c,", *messptr++);
	return 0;
}	//chapter 11.2 programming exercise 3.a

#include <stdio.h>
#define numel 20
int main()
{
	char strng[] = "hooray for all of us";
	char *messptr = strng;
	while (*messptr !='\0')
		printf("%c,", *messptr++);
	return 0;
}	//chapter 11.2 programming exercise 3.b

#include <stdio.h>
#define numel 20
int main()
{
	char strng[] = "hooray for all of us";
	char *messptr = &strng[11];
	while (*messptr != '\0')
		printf("%c,", *messptr++);
	return 0;
}	//chapter 11.2 programming exercise 3.c

#include <stdio.h>
#define numel 7
int main()
{
	int miles[numel] = { 15,22,16,18,27,23,20 };
	int dist[numel];
	int i, *ptr1 = miles;
	for (i = 0; i < numel; i++)
	{
		dist[i] = *ptr1++;
		printf("%d ", dist[i]);
	}
	return 0;
}	//chapter 11.2 programming exercise 4

#include <stdio.h>
#define numel 30
int main()
{
	char message[numel] = "this is a test";
	char mess2[numel];
	int i;
	char *ptr1 = message, *ptr2 = mess2;
	while (*ptr1 != '\0')
	{
		*ptr2++ = *ptr1++;
	}
	*ptr2 = '\0';
	printf("%s ", mess2);
}	//chapter 11.2 programming exercise 5

#include <stdio.h>
#define numel 10
int main()
{
	float miles[numel] = { 240.5,300.0,189.6,310.6,280.7,216.9,199.4,160.3,177.4,192.3 };
	float gallons[numel] = { 10.3,15.6,9.7,14,16.3,15.7,14.9,10.7,9.3,9.4 };
	float mpg[numel];
	float *ptr1, *ptr2;
	int i;
	ptr1 = miles;
	ptr2 = gallons;
	for (i = 0; i < numel; i++)
	{
		mpg[i] = (*ptr1++)/(*ptr2++);
		printf("%d. %.2fmpg\n", i+1, mpg[i]);
	}
	return 0;
}	//chapter 11.2 programming exercise 6

#include <stdio.h>
#define numel 5
int findmax(int[], int);

int main()
{
	int nums[numel] = { 2,18,1,27,16 };
	printf("the maximum value is %d", findmax(nums, numel));
	return 0;
}
int findmax(int vals[], int numels)
{
	int max = 0, i;
	for (i = 0; i < numels; i++)
	{
		if (vals[i] > max)
			max = vals[i];
	}
	return max;
}	//program 11.6

#include <stdio.h>
#define numel 5
int findmax(int[], int);

int main()
{
	int nums[numel] = { 2,18,1,27,16 };
	printf("the maximum value is %d", findmax(nums, numel));
	return 0;
}
int findmax(int *vals, int numels)
{
	int max = vals[0], i;
	for (i = 0; i < numels; i++)
	{
		if (vals[i] > max)
			max = vals[i];
	}
	return max;
}	//program 11.6 pointer ver.

#include <stdio.h>
#define numel 5
int findmax(int[], int);

int main()
{
	int nums[numel] = { 2,18,1,27,16 };
	printf("the maximum value is %d", findmax(nums, numel));
	return 0;
}
int findmax(int *vals, int numels)
{
	int max = *vals, i;
	for (i = 0; i < numels; i++)
	{
		if (*(vals + i) > max)
			max = *(vals + i);
	}
	return max;
}	//program 11.6 pointer ver. for loop *(vals+i)

#include <stdio.h>
#define numel 5
int findmax(int[], int);

int main()
{
	int nums[numel] = { 2,18,1,27,16 };
	printf("the maximum value is %d", findmax(nums, numel));
	return 0;
}
int findmax(int *vals, int numels)
{
	int max = *vals, i;
	for (i = 0; i < numels; i++, vals++)
	{
		if (*vals > max)
			max = *vals;
	}
	return max;
}	//program 11.6 pointer ver. for loop vals++

#include <stdio.h>
#define numel 5
int findmax(int[], int);

int main()
{
	int nums[numel] = { 2,18,1,27,16 };
	printf("the maximum value is %d", findmax(nums, numel));
	return 0;
}
int findmax(int *vals, int numels)
{
	int max = *vals, i;
	for (i = 0; i < numels; i++)
	{
		if (*vals++ > max)
			max = *vals;
	}
	return max;
}	//chpater 11.3 exercise 4

#include <stdio.h>
void arr(int[][3]);
int main()
{
	int nums[2][3] = { {33,16,29},
					   {54,67,99} };
	arr(nums);
	return 0;
}
void arr(int(*val)[3])
{
	printf("%d\n\n", *(*val));				//val[0][0]
	printf("%d\n\n", *(*val + 1));			//val[0][1]
	printf("%d\n\n", *(*val + 2));			//val[0][2]
	printf("%d\n\n", *(*(val + 1)));		//val[1][0]
	printf("%d\n\n", *(*(val + 1) + 1));	//val[1][1]
	printf("%d\n\n", *(*(val + 1) + 2));	//val[1][2]
	printf("%d\n", *(*val) + 1);			//val[0][0]+1
}	//chpater 11.3 exercise 5

#include <stdio.h>
#define numel 5
int findmin(int *, int);

int main()
{
	int nums[numel] = { 2,18,1,27,16 };
	printf("the minimum value is %d", findmin(nums, numel));
	return 0;
}
int findmin(int *vals, int numels)
{
	int i, min = *vals;
	for (i = 0; i < numel; i++)
		if (min > *(vals + i))
			min = *(vals + i);
	return min;
}	//chapter 11.3 programming exercise 1

#include <stdio.h>
#define numel 9
void show(float *, int);

int main()
{
	float rates[numel] = { 6.5, 7.2, 7.5, 9.3, 9.6, 9.4, 9.6, 9.8, 10.0 };
	show(rates, numel);
	return 0;
}
void show(float *rates, int numels)
{
	int i;
	for (i = 0; i < numels; i++)
		printf("%.1f\n", *(rates + i));
}	//chapter 11.3 programming exercise 2.a

#include <stdio.h>
#define numel 9
void show(float *, int);

int main()
{
	float rates[numel] = { 6.5, 7.2, 7.5, 9.3, 9.6, 9.4, 9.6, 9.8, 10.0 };
	show(rates, numel);
	return 0;
}
void show(float *rates, int numels)
{
	int i;
	for (i = 0; i < numels; i++, *rates++)
		printf("%.1f\n", *rates);
}	//chapter 11.3 programming exercise 2.b

#include <stdio.h>
void display(char *);

int main()
{
	char message[] = "vacation is near";
	display(message);
	return 0;
}
void display(char *strng)
{
	int i;
	for (i = 0; strng[i]; i++)
		printf("%c", *(strng + i));
}	//chapter 11.3 programming exercise 3.a

#include <stdio.h>
void display(char *);

int main()
{
	char message[] = "vacation is near";
	display(message);
	return 0;
}
void display(char *strng)
{
	int i;
	while (*strng != NULL)
	{
		printf("%c", *strng);
		*strng++;
	}
}	//chapter 11.3 programming exercise 3.b

#include <stdio.h>
#define numel 10
void extend(float *, float*, float *, int);
int main()
{
	float price[numel] = { 10.62,14.89,13.21,16.55,19.62,9.47,6.58,19.32,12.15,3.99 };
	float quantity[numel] = { 4,9.5,6,7.35,9,15.3,3,5.4,2.9,4.9 };
	float amount[numel];
	int i;
	extend(price, quantity, amount, numel);
	for (i = 0; i < numel; i++)
		printf("%.3f\n",amount[i]);
	return 0;
}
void extend(float *val1, float *val2, float *val3, int numels)
{
	int i;
	float *ptr1 = val1, *ptr2 = val2;
	for (i = 0; i < numels; i++)
		val3[i] = (*ptr1++)*(*ptr2++);
}	//chapter 11.3 programming exercise 4

#include <stdio.h>
char toupper(char);
void convert(char[]);
int main()
{
	char str[100];
	printf("enter a letter: ");
	gets(str);
	convert(str);
	puts(str);
	return 0;
}
void convert(char *strng)
{
	while (*strng != '\0')
		*strng++ = toupper(*strng);
}
char toupper(char letter)
{
	if (letter >= 'a'&&letter <= 'z')
		return (letter - 'a' + 'a');
	else
		return(letter);
}	//chapter 11.4 programming exercise 1

#include <stdio.h>
#define max 81
void vowels(char*);
int main()
{
	char str[max];
	gets(str);	//how much is tyhe little worth worth?
	vowels(str);
	return 0;
}
void vowels(char *strng)
{
	char c;
	while ((c = *strng++) != '\0')
		switch (c)
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				putchar(c);
		}
	putchar('\n');
	return;
}	//chapter 11.4 programming exercise 2.a

#include <stdio.h>
#define max 81
void vowels(char*);
int main()
{
	char str[max];
	gets(str);	//how much is tyhe little worth worth?
	vowels(str);
	return 0;
}
void vowels(char *strng)
{
	int i = 0, n = 0;
	char c;
	while ((c = *strng++) != '\0')
		switch (c)
		{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			n++;
		}
	printf("%d", n);
	return;
}	//chapter 11.4 programming exercise 2.b

#include <stdio.h>
#define max 81
void vowels(char*);
int main()
{
	char str[max];
	gets(str);	//how much is the little worth worth?
	vowels(str);
	return 0;
}
void vowels(char *strng)
{
	int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0, cnt5 = 0;
	char c;
	while (*strng++ != '\0')
	{
		switch (*strng)
		{
		case 'a':
			cnt1++;
			break;		//switch문에 break가 없으면 중복카운트가 되어 각 모음별로 값을 입력받지 않음으로 각 case마다 break를 해준다
		case 'e':
			cnt2++;
			break;
		case 'i':
			cnt3++;
			break;
		case 'o':
			cnt4++;
			break;
		case 'u':
			cnt5++;
			break;
		}
	}
	printf("a: %d\ne: %d\ni: %d\no: %d\nu: %d\n", cnt1, cnt2, cnt3, cnt4, cnt5);
	return;
}	//chapter 11.4 programming exercise 3

#include <stdio.h>
#define max 81
int main()
{
	char str[max];
	char c, *ptr = &str[0];
	int count = 0;
	printf("enter a string: \n");
	while (c = getchar() != '\n')
	{
		*ptr++ = c;
		count++;
	}
	*ptr = '\0';
	printf("%d", count);
	return 0;
}	//chapter 11.4 programming exercise 4.a

#include <stdio.h>
#define max 81
void string(char*);
int main()
{
	char str[max];
	printf("enter a string: \n");
	string(str);
	return 0;
}
void string(char *s)
{
	char c;
	int count = 0;
	while (c = getchar() != '\n')
	{
		*s++ = c;
		count++;
	}
	*s = '\0';
	printf("%d", count);
}	//chapter 11.4 programming exercise 4.b

#include <stdio.h>
#include <string.h>
void remove(char *, char);
int main()
{
	char message[100];
	char deletechar;
	int i = 0;
	printf("enter a string: ");
	gets(message);	//happy holidays
	printf("enter a character to remove: ");
	scanf("%c", &deletechar);
	remove(message, deletechar);
	puts(message);
	return 0;
}
void remove(char *strng, char ch)
{
	for (; *strng != '\0'; strng++)
	{
		if (*strng == ch)
		{
			strcpy(strng, strng + 1);
			strng--;
		}
	}
}	//chpater 11.4 programming exercise 5

#include <stdio.h>
#include <string.h>
#define max 81

int main()
{
	char str[max];
	char *ptr = str;
	int i;
	int s = 0;
	printf("enter a string: \n");
	gets(str);
	s = strlen(ptr);
	ptr = &str[s-1];
	for (; s > 0; s--)
		printf("%c", *ptr--);
	return 0;
}	//chapter 11.4 programming exercise 6

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
	char ch;
	printf("enter a character: ");
	ch = getchar();
	if (ch >= 'a' && ch <= 'z')
	{
		ch = toupper(ch);
		putchar(ch);
	}
	else if (ch == 1)
		exit(1);
}	//chapter 11.4 programming exercise 7

#include <stdio.h>
#include <string.h>
void addchar(char*);

int main()
{
	char string[100] = "hello world!";
	addchar(string);
	puts(string);
}
void addchar(char *str)
{
	strcat(str, "!");
}	//chapter 11.4 programming exercise 8

#include <stdio.h>
#include <string.h>
void delchar(char*);

int main()
{
	char string[100] = "hello world!";
	delchar(string);
	puts(string);
}
void delchar(char *str)
{
	int len = strlen(str);
	char *ptr = &str[len];
	while (*ptr)
		*str++;
	*(ptr - 1) = '\0';
}	//chapter 11.4 programming exercise 9

#include <stdio.h>
#include <ctype.h>
#define numel 100
void trimfrnt(char *);

int main()
{
	char str[numel] = "                  hello world!";
	trimfrnt(str);
	return 0;
}
void trimfrnt(char *string)
{
	char *begin = string;		//begin포인터==string[0]
	while (isspace(*begin))		//공백이 끝날때까지
		begin++;				//포인터가 배열속에서 한칸씩 뒤로이동
	string = begin;				//공백이 끝났다면 알파벳이 시작하는 지점에 포인터 위치
	printf("[%s]", string);		//포인터가 위치한 지점부터 출력
}	//chapter 11.4 programming exercise 10

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define numel 100

void trimrear(char*);
int main()
{
	char str[numel] = "hello world!             ";
	trimrear(str);
	return 0;
}
void trimrear(char *strng)
{
	int len = strlen(strng);	//"hello world!             "의 크기
	char *ptr = &strng[len];	//포인터ptr을 str배열 가장 끝에 위치
	ptr--;						//str배열 가장끝(\0)바로 앞 공백으로 이동
	while (isspace(*ptr))		//공백이 있을때까지
		*ptr-- = '\0';			//포인터 앞으로 한칸씩이동후 널처리
	printf("[%s]", strng);		//공백이 끝나면 while루프 탈출후 결과값 출력
}	//chapter 11.4 programming exercise 11

#include <stdio.h>

int main()
{
	char *message2 = "this is a string";
	printf("the string is: %s", message2);
	printf("\n the base address of this string is %p\n", message2);	//문자열 주소 출력 변수 %p
	message2 = "a new message";
	printf("the string is now: %s", message2);
	printf("\n the base address of this string is %p", message2);
}	//program 11.7

#include <stdio.h>

int main()
{
	char *seasons[] = { "winter", "spring", "summer", "fall" };
	int i;
	for (i = 0; i < 4; i++)
		printf("the season is %s.\n", seasons[i]);
	return 0;
}	//program 11.8

#include <stdio.h>

int main()
{
	char *seasons[] = { "winter", "spring", "summer", "fall" };
	int month;
	printf("enter a month (use 1 for jan., 2 for feb., etc.): ");
	scanf("%d", &month);
	month = month % 12 / 3;
	printf("the month entered is a %s month", seasons[month]);
}	//program 11.9

#include <stdio.h>

int main()
{
	char *day[] = { "sunday","monday" ,"tuesday" ,"wednesday" ,"thursday" ,"friday" ,"saturday" };
	int n;
	printf("enter the num ex)0:sunday, 1:monday etc..: ");
	scanf("%d", &n);
	n = n % 7;
	printf("the day is %s", day[n - 1]);
	return 0;
}	//chapter 11.5 programming exercise 1

#include <stdio.h>

int main()
{
	char *day[] = { "sunday","monday" ,"tuesday" ,"wednesday" ,"thursday" ,"friday" ,"saturday" };
	int n;
	printf("enter the num ex)0:sunday, 1:monday etc..: ");
	scanf("%d", &n);
	n = n % 7;
	printf("the day is %s", day[n - 1]);
	printf("\nthe address is %p", day[n - 1]);
	return 0;
}	//chapter 11.5 programming exercise 2

#include <stdio.h>
#define size 10000
int main()
{
	int i = 0;
	char str[size];
	for (i = 0; i < 6; i++)
	{
		printf("enter some sentence: ");
		scanf("%s", &*(str+i));
		sprintf_s(str,"%s", *(str + i));
	}
	for (i = 0; i < 6; i++)
	{
		sscanf(str, "%s", &*(str + i));
		printf("%s", *(str + i));
	}
	return 0;
}	//chapter 11.5 programming exercise 3