#include <stdio.h>
#define max 81
int main()
{
	char str1[max];
	printf("enter a string: \n");
	gets(str1);
	printf("the string just entered is: \n");
	puts(str1);
	return 0;
}	//program 9.1a

#include <stdio.h>
#define max 81
int main()
{
	char str1[max], str2[max], str3[max], str4[max], str5[max], str6[max], str7[max], str8[max], str9[max], str10[max];
	printf("enter a string: \n");
	scanf("%s %s%s%s%s%s%s%s%s%s", str1, str2, str3, str4, str5, str6, str7, str8, str9, str10);
	printf("the string just entered is: \n");
	printf("%s \n", str1);
	return 0;
}	//program 9.1b

#include <stdio.h>
#define max 81
void strcopy(char[], char[]);
int main()
{
	char str1[max];
	char str2[max];
	printf("enter a sentence: ");
	gets(str1);
	strcopy(str2, str1);
	puts(str2);
	return 0;
}
void strcopy(char s1[],char s2[])
{
	int i = 0;
	while (s2[i] != '\0')	//s2가 null이 아니면 1 null이면 0이므로 축약해서 while(s2[i])가 된다
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
}	//program 9.2a

#include <stdio.h>
#define max 81
void strcopy(char[], char[]);
int main()
{
	char str1[max];
	char str2[max];
	printf("enter a sentence: ");
	gets(str1);
	strcopy(str2, str1);
	puts(str2);
	return 0;
}
void strcopy(char s1[], char s2[])
{
	int i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
}	//program 9.2b

#include <stdio.h>
#define max 81
int main()
{
	char str1[max];
	char c;
	int i = 0;
	printf("enter a string: \n");
	while (i < max - 1 && (c = getchar()) != '\n')
	{
		str1[i] = c;
		i++;
	}
	str1[i] = '\0';
	printf("the string just entered is: \n");
	puts(str1);
	return 0;
}	//program 9.3

#include <stdio.h>
#define max 81
void getline(char[]);
int main()
{
	char str1[max];
	printf("enter a string: \n");
	getline(str1);
	printf("the string just entered is: \n");
	puts(str1);
	return 0;
}
void getline(char s1[])
{
	char c;
	int i = 0;
	while (i < max - 1 && (c = getchar()) != '\n')
	{
		s1[i] = c;
		i++;
	}
	s1[i] = '\0';
}	//program 9.4

#include <stdio.h>
#define max 81
void vowels(char[]);
int main()
{
	char str[max];
	gets(str);	//how much is tyhe little worth worth?
	vowels(str);
	return 0;
}
void vowels(char strng[])
{
	int i = 0;
	char c;
	while ((c = strng[i++]) != '\0')
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
}	//exercise 9.1 q1.a

#include <stdio.h>
#define max 81
void vowels(char[]);
int main()
{
	char str[max];
	gets(str);	//how much is tyhe little worth worth?
	vowels(str);
	return 0;
}
void vowels(char strng[])
{
	int i = 0, n = 0;
	char c;
	while ((c = strng[i++]) != '\0')
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
}	//exercise 9.1 q1.b

#include <stdio.h>
#define max 81
void vowels(char[]);
int main()
{
	char str[max];
	gets(str);	//how much is the little worth worth?
	vowels(str);
	return 0;
}
void vowels(char strng[])
{
	int i = 0, cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0, cnt5 = 0;
	char c;
	while (strng[i] != '\0')
	{
		switch (strng[i])
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
		}i++;
	}
	printf("a: %d\ne: %d\ni: %d\no: %d\nu: %d\n", cnt1, cnt2, cnt3, cnt4, cnt5);
	return;
}	//exercise 9.1 q2

#include <stdio.h>
#define max 81
int main()
{
	char str[max];
	char c;
	int i = 0;
	printf("enter a string: \n");
	while (i < (max - 1) && (c = getchar()) != '\n')
	{
		str[i] = c;
		i++;
	}
	str[i] = '\0';
	printf("%d", i);
	return 0;
}	//exercise 9.1 q3.a

#include <stdio.h>
#define max 81
void string(char[]);
int main()
{
	char str[max];
	printf("enter a string: \n");
	string(str);
	return 0;
}
void string(char s[])
{
	char c;
	int i = 0;
	while (i < (max - 1) && (c = getchar()) != '\n')
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	printf("%d", i);
}	//exercise 9.1 q3.b

#include <stdio.h>
#define max 81
int main()
{
	char str[max];
	char c;
	int i = 0;
	printf("enter a string: \n");
	while (i < max - 1 && (c = getchar()) != '\n')
	{
		str[i] = c;
		printf("%x ", str[i]);
		i++;
	}
	str[i] = '\0';
	return 0;
}	//exercise 9.1 q4

#include <stdio.h>
#define max 81
int main()
{
	char str[max];
	int i = 0;
	printf("enter a string: \n");
	gets(str);
	for (i = 0; str[i]; i++)
	{
		printf("%c", str[i]);
		if (str[i] == ' ')
			printf("\n");
	}
	return 0;
}	//exercise 9.1 q5

#include <stdio.h>
#include <string.h>
#define max 81

int main()
{
	char str[max];
	int i;
	int s = 0;
	printf("enter a string: \n");
	gets(str);
	s = strlen(str);
	for (i = s-1; i >= 0; i--)
	{
		printf("%c", str[i]);
	}
	return 0;
}	//exercise 9.1 q6

#include <stdio.h>
#define max 81
void delchar(char[], int, int);
int main()
{
	char str[max];
	printf("enter a sentence: ");
	gets(str);
	delchar(str);
	return 0;
}
void delchar(char s[])
{

}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 81
void addchar(char[], char[], int);
int main()
{
	char insert[] = "for all";
	char message[max];
	int line;
	printf("enter a string in \"message\": ");
	gets(message);
	printf("which line do you want to put a new message?: ");
	scanf("%d", &line);
	addchar(insert, message, line);
	puts(message);
	return 0;
}
void addchar(char a[], char b[], int n)
{
	int i = 0;
	while (a[i])
		a[i]++;
	while (b[i])
	{
		a[i] = b[i];
		a[i]++;
		b[i]++;
	}
	a[i] = '\0';
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 81
void toupper(char[]);
int main()
{
	char ch[max];
	printf("enter a string: \n");
	gets(ch);
	toupper(ch);
	printf("lower case to upper case result is\n");
	puts(ch);
}
void toupper(char c[])
{
	int i;
	for (i = 0; c[i]; i++)
		c[i] = c[i] - 'a' + 'a';
}	//exercise 9.1 q9.a

#include <stdio.h>
#define max 81
void toupper(char[]);
int main()
{
	char ch[max];
	printf("enter a string: \n");
	gets(ch);
	toupper(ch);
	printf("lower case to upper case result is\n");
	puts(ch);
}
void toupper(char c[])
{
	int i;
	for (i = 0; c[i]; i++)
	{
		if ((c[i] >= 'a') && (c[i] <= 'z'))
			c[i] = c[i] - 'a' + 'a';
	}
}	//exercise 9.1 q9.b,c

#include <stdio.h>
#include <ctype.h>
#define max 81
int main()
{
	char str[max];
	printf("enter a string: ");
	gets(str);
	for (int i = 0; str[i]; i++)
	{
		str[i] = tolower(str[i]);
	}
	puts(str);
	return 0;
}	//exercise 9.1 q10

#include <stdio.h>
#define max 81
int main()
{
	char str[max];
	int i = 0, cnt = 0;
	printf("enter a string: \n");
	gets(str);
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			cnt++;
	}
	printf("%d", cnt + 1);
	return 0;
}	//exercise 9.1 q11

#include <stdio.h>
#include <string.h>
#define size 100
int main()
{
	char str1[size];
	strcpy(str1, "world");
	printf("1. %s\n", str1);	//strcpy

	char str2[size] = "hello";
	strcat(str2, " there world");
	printf("2. %s\n", str2);	//strcat

	char str3[size] = "hello there world";
	printf("3. %d\n", strlen(str3));	//strlen

	char str4[size] = "beb";
	char str4[size] = "bea";
	int n;
	n = strcmp(str4, str4);		//두개의 문자열을 비교하여 같으면 0, 첫번째가 크면 1, 두번째가 크면 -1이 나온다
	printf("4. %d\n", n);		//strcmp

	char str5[size] = "hello";
	char str5[size] = "world";
	strncpy(str5, str5, 3);		//두번째 배열의 크기('\0')까지 중 지정한 크기만큼 첫번쨰 배열에 복사한다 ex: 2번째면 결과는 "wollo"가 나옴
	printf("5. %s\n", str5);	//strncpy

	char str6[size] = "beb";
	char str6[size] = "bear";
	int num;
	num = strncmp(str6, str6, 4);//두 배열의 지정한 숫자의 자리를 서로 비교한다
	printf("6. %d\n", num);		//strncmp

	char str7[size] = "hello";
	printf("7. %d\n", strchr(str7, 'e'));	//strchr

	char str8[size] = "hi ho ha";
	char *c = strtok(str8, " ");	//기본형태는 char *variable = strtok(str,"delimiter"); ,delimeter는 ' ', '!' , '.', '+', '-'등등
	printf("8. ");
	while (c != '\0')
	{
		printf("%s\n", c);
		c = strtok('\0', " ");	//공백인 모든 구간은 널문자 처리 되고 공백을 기준으로 다음문자를 찾는다
	}
}	//string.h 헤더파일의 문자처리 함수 예제

#include <stdio.h>
#include <string.h>
#define size 100

int main()
{
	char str1[size] = "hello";
	char str2[size] = "hello there";
	int n;
	n = strcmp(str1, str2);
	if (n == 0)
		printf("%s is equal to %s\n\n", str1, str2);
	else if (n > 0)
		printf("%s is greater than %s\n\n", str1, str2);
	else
		printf("%s is less than %s\n\n", str1, str2);
	printf("the length of string 1 is %d characters\n", strlen(str1));
	printf("the length of string 2 is %d characters\n\n", strlen(str2));

	printf("after concatenation, string1 contains the string value\n");
	strcat(str1, " there world!");
	printf("%s\n", str1);
	printf("the length of this string is %d characters\n\n", strlen(str1));

	printf("type in a sequence of characters for string2:\n");
	gets(str2);
	printf("after copying string 2 to string1, the string value in string 1 is:\n");
	strcpy(str1, str2);
	printf("%s\n", str1);
	printf("the length of this string is %d characters\n\n", strlen(str1));

	printf("the starting address of the string1 string is: %d",  strchr(str1,0));
	return 0;
}	//program 9.5

#include <stdio.h>
#include <ctype.h>

int main()
{
	char s1[] = "a1b2c3d4e5";
	printf("1. a1b2c3d4e5 -> ");
	for (int i = 0; s1[i]; i++)
		printf("%d", isalpha(s1[i]));	//isalpha

	char s2[] = "aabbccddee";
	printf("\n2. aabbccddee -> ");
	for (int i = 0; s2[i]; i++)
		printf("%d", isupper(s2[i]));	//isupper

	char s3[] = "aabbccddee";
	printf("\n3. aabbccddee -> ");
	for (int i = 0; s3[i]; i++)
		printf("%d", islower(s3[i]));	//islower

	char s4[] = "a1b2c3d4e5";
	printf("\n4. a1b2c3d4e5 -> ");
	for (int i = 0; s4[i]; i++)
		printf("%d", isdigit(s4[i]));	//isdigit

	char s5[] = "a1b2c3d4ㅁ5";
	printf("\n5. a1b2c3d4ㅁ5 -> ");
	for (int i = 0; s5[i]; i++)
		printf("%d", isascii(s5[i]));	//isascii

	char s6[] = "a b c d e";
	printf("\n6. a b c d e -> ");
	for (int i = 0; s6[i]; i++)
		printf("%d", isspace(s6[i]));	//isspace

	char s7[] = "a1b2c3\t";
	printf("\n7. a1b2c3tab -> ");
	for (int i = 0; s7[i]; i++)
		printf("%d", isprint(s7[i]));	//isprint

	char s8[] = "\t12\n";
	printf("\n8. tab12enter -> ");
	for (int i = 0; s8[i]; i++)
		printf("%d", iscntrl (s8[i]));	//iscntrl

	char s9[] = "!@.,32";
	printf("\n9. !@.,32 -> ");
	for (int i = 0; s9[i]; i++)
		printf("%d", ispunct(s9[i]));	//ispunct

	char s10[] = "hello";
	printf("\n9. hello -> ");
	for (int i = 0; s10[i]; i++)
	{
		if ((s10[i] >= 'a') && (s10[i] <= 'z'))
			s10[i] = toupper(s10[i]);
		else if ((s10[i] >= 'a') && (s10[i] <= 'z'))
			s10[i] = tolower(s10[i]);
	}
	printf("%s", s10);	//tolower, toupper
}	//ctype.h 헤더파일의 문자처리 함수 예제

#include <stdio.h>
#include <ctype.h>
#define size 25
void converttoupper(char[]);

int main()
{
	char ch[size];
	printf("type in any sequence of characters: \n");
	gets(ch);
	converttoupper(ch);
	printf("the characters just entered, in uppercase are: \n%s", ch);
	return 0;
}
void converttoupper(char c[])
{
	int i;
	for (i = 0; c[i]; i++)
		c[i] = toupper(c[i]);
}	//program 9.6

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char s1[] = "1234";
	char s2[] = "12.34";
	char s3[50];
	int n = 1234;
	printf("1. %d\n", atoi(s1));
	printf("2. %lf\n", atof(s2));
	itoa(n, s3, 2);
	printf("3. %s(2진수)", s3);
	itoa(n, s3, 8);
	printf(" %s(8진수)", s3);
	itoa(n, s3, 10);
	printf(" %s(10진수)", s3);
	itoa(n, s3, 16);
	printf(" %s(16진수)", s3);
}	//stdlib.h 헤더파일의 문자처리 함수 예제

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxel 20

int main()
{
	char s1[maxel] = "1234";
	int num1;
	double num2;
	num1 = atoi(s1);
	printf("the string \"%s\" as an integer number is: %d", s1, num1);
	printf("\nthis number divided by 3 is %d\n\n", num1 / 3);
	strcat(s1, ".96");
	num2 = atof(s1);
	printf("the string \"%s\" as a double number is: %f\n", s1, num2);
	printf("this number divided by 3 is: %f", num2 / 3);
	return 0;
}	//program 9.7

#include <stdio.h>
#include <string.h>
#define size 100

int main()
{
	char str1[size] = "hello";
	char str2[size] = "hello there";
	int n;
	n = strcmp(str1, str2);
	if (n == 0)
		printf("%s is equal to %s\n\n", str1, str2);
	else if (n > 0)
		printf("%s is greater than %s\n\n", str1, str2);
	else
		printf("%s is less than %s\n\n", str1, str2);
	printf("the length of string 1 is %d characters\n", strlen(str1));
	printf("the length of string 2 is %d characters\n\n", strlen(str2));

	printf("after concatenation, string1 contains the string value\n");
	strcat(str1, " there world!");
	printf("%s\n", str1);
	printf("the length of this string is %d characters\n\n", strlen(str1));

	printf("type in a sequence of characters for string2:\n");
	gets(str2);
	printf("after copying string 2 to string1, the string value in string 1 is:\n");
	strcpy(str1, str2);
	printf("%s\n", str1);
	printf("the length of this string is %d characters\n\n", strlen(str1));

	printf("the starting address of the string1 string is: %d",  strchr(str1,0));
	return 0;
}	//chapter 9.2 programming exercise 1

#include <stdio.h>
#include <ctype.h>
#define size 25
void converttoupper(char[]);

int main()
{
	char ch[size];
	printf("type in any sequence of characters: \n");
	gets(ch);
	converttoupper(ch);
	printf("the characters just entered, in uppercase are: \n%s", ch);
	return 0;
}
void converttoupper(char c[])
{
	int i;
	for (i = 0; c[i]; i++)
		c[i] = toupper(c[i]);
}	//chapter 9.2 programming exercise 2

#include <stdio.h>
#include <ctype.h>
#define maxel 50
char *trimfrnt(char *);

int main()
{
	char str[] = " hello";
	printf("%s", trimfrnt(str));
	return 0;
}
char *trimfrnt(char *strng)
{
	char *begin;
	begin = strng;
	while (begin != '\0')
	{
		if (isspace(*begin))
			begin++;
		else
		{
			strng = begin;
			break;
		}
	}
	return strng;
}	//chapter 9.2 programming exercise 3

#include <stdio.h>
#include <ctype.h>
void trimrear(char *);

int main()
{
	char str[50];
	printf("enter a string: ");
	scanf("%[^\n]", str);	//개행문자(\n)이 나올때 까지 입력받음 단, str배열의 크기를 넘어가면 안됨
	trimrear(str);
	return 0;
}
void trimrear(char strng[])
{
	int i = 0;
	while (strng[i])
		i++;
	i--;		//while루프를 돌며 i는 \0까지 이동을 했고 루프를 탈출했으니 \0바로 앞 문자로 i를 이동시킨다
	while (isspace(strng[i]))
	{
		strng[i] = '\0';
		i--;
	}
	printf("[%s]", strng);
}	//chapter 9.2  programming exercise 4

#include <stdio.h>
void chartype(int);
int main()
{
	int str;
	printf("enter a num: ");
	scanf("%d", &str);
	chartype(str);
	return 0;
}
void chartype(int num)
{
	if ((num >= 97) && (num <= 122))
		printf("the ascii character is a lowercase letter\nascii code: %c", num);
	else if ((num >= 65) && (num <= 90))
		printf("the ascii character is a uppercase letter\nascii code: %c", num);
	else if ((num >= 48) && (num <= 57))
		printf("the ascii character is a digit\nascii code: %c", num);
	else if ((num >= 33) && (num <= 47) || (num >= 58) && (num <= 64) || (num >= 91) && (num <= 96) || (num >= 123) && (num <= 126))
		printf("the ascii character is a punctuation mark\nascii code: %c", num);
	else if (num == 32)
		printf("the ascii character is a space\nascii code: %c", num);
	else
		printf("the ascii character is a nonprintable character\nascii codenum: %d", num);
}	//chapter 9.2 programming exercise 5

#include <stdio.h>
#include <string.h>
#define maxel 100
int concat(char[], char[], int);
int main()
{
	char s1[maxel] = "hello";
	char s2[maxel] = " world";
	int n;
	printf("num: ");
	scanf("%d", &n);
	concat(s1, s2, n);
	return 0;
}
int concat(char string1[], char string2[], int maxlength)
{
	int size = strlen(string2);
	int n;
	if (maxlength >= size)
		strcat(string1, string2);
	else if (maxlength < size)
		strncat(string1, string2, maxlength);
	printf("%s", string1);
	return 0;
}	//chapter 9.2 programming exercise 6

#include <stdio.h>
#include <ctype.h>
#define size 100
int countlets(char[]);

int main()
{
	char str[size];
	printf("enter a string: ");
	gets(str);
	printf("%d", countlets(str));
	return 0;
}
int countlets(char strng[])
{
	int i, count = 0;
	for (i = 0; strng[i]; i++)
	{
		if ((isupper(strng[i])) || (islower(strng[i])))
			count++;
	}
	return count;
}	//chapter 9.2 programming exercise 7

#include <stdio.h>
#include <stdlib.h>
#define size 40
#define true 1
#define false 0
int isvalidint(char[]);

int main()
{
	char str[size];
	int num;
	printf("enter an integer: ");
	scanf("%s", str);
	if (isvalidint(str) == true)
	{
		num = atoi(str);
		printf("the number you entered is %d.", num);
	}
	else
		printf("the number you entered is not a valid integer.");
}
int isvalidint(char strng[])
{
	int i, valid = true, sign = false, start = 0;
	if (strng[0] == ' ')
		valid = false;
	if (strng[0] == '+' || strng[0] == '-')
	{
		sign = true;
		start = 1;
	}
	if (sign == true && strng[1] == ' ')
		valid = false;
	i = start;
	while (valid == true && strng[i] != '\0')
	{
		if (strng[i] < '0' || strng[i] > '9')
			valid = false;
		i++;
	}
	return valid;
}	//program 9.8

#include <stdio.h>
#include <stdlib.h>
#define false 0
#define true 1
#define size 40
int getanint();

int main()
{
	int val;
	printf("enter an integer value: ");
	val = getanint();
	printf("the integer entered is: %d", val);
}
int getanint()
{
	int isvalidint(char[]);
	char value[size];
	int isanint = false;
	do
	{
		gets(value);
		if (isvalidint(value) == false)
		{
			printf("invalid integer - please re-enter: ");
			continue;
		}
		isanint = true;
	} while (isanint == false);
	return atoi(value);
}
int isvalidint(char str[])
{
	int start = 0;
	int i;
	int valid = true;
	int sign = false;
	if (str[0] == ' ')
		valid = false;
	if (str[0] == '+' || str[0] == '-')
	{
		sign = true;
		start = 1;
	}
	if (sign == true && str[1] == '\0')
		valid = false;
	i = start;
	while (valid == true && str[i] != '\0')
	{
		if (str[i]<'0' || str[i] > '9')
			valid = false;
		i++;
	}
	return valid;
}	//program 9.9

#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0
#define size 40
int isvalidint(char[]);

int main()
{
	char str[size];
	int num, i;
	for (i = 0; i < 5; i++)
	{
		printf("enter an integer: ");
		gets(str);
		if (isvalidint(str) == true)
		{
			num = atoi(str);
			printf("the number you entered is %d\n", num);
		}
		else
			printf("the number you entered is not a valid integer.\n");
	}
	return 0;
}
int isvalidint(char strng[])
{
	int i, start = 0, valid = true, sign = false;
	if (strng[0] == ' ')
		valid = false;
	if (strng[0] == '+' || strng[0] == '-')
	{
		sign = true;
		start = 1;
	}
	i = start;
	if (sign == true && strng[1] == ' ')
		valid = false;
	while (valid == true && strng[i] != '\0')
	{
		if (strng[i] < '0' || strng[i] > '9')
			valid = false;
		i++;
	}
	return valid;
}	//chapter 9.3  programming exercise 1

#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0
#define size 40
int isvalidint(char[]);

int main()
{
	char str[size];
	int num, i;
	printf("enter an integer: ");
	gets(str);
	if (isvalidint(str) == true)
	{
		num = atoi(str);
		printf("the number you entered is %d\n", num);
	}
	else
		printf("the number you entered is %s\n", str);
	return 0;
}
int isvalidint(char strng[])
{
	int i, start = 0, valid = true, sign = false;
	if (strng[0] == ' ')
		valid = false;
	if (strng[0] == '+' || strng[0] == '-')
	{
		sign = true;
		start = 1;
	}
	i = start;
	if (sign == true && strng[1] == ' ')
		valid = false;
	while (valid == true && strng[i] != '\0')
	{
		if (strng[i] < '0' || strng[i] > '9')
			valid = false;
		i++;
	}
	return valid;
}	//chapter 9.3 programming exercise 2

#include <stdio.h>
#include <stdlib.h>
#define size 40
#define true 1
#define false 0
int isvalidint(char[]);

int main()
{
	char str[size];
	int num;
	printf("enter an integer: ");
	scanf("%s", str);
	if (isvalidint(str) == true)
	{
		num = atoi(str);
		printf("the number you entered is %d.", num);
	}
	else
		printf("the number you entered is not a valid integer.");
}
int isvalidint(char strng[])
{
	int i = 1, valid = true, sign = false, start = 0;
	while (valid == true && strng[i] != '\0')
	{
		if (strng[i] < '0' || strng[i] > '9')
			valid = false;
		i++;
	}
	return valid;
}	//chapter 9.3 programming exercise 3

#include <stdio.h>
#define size 100

int main()
{
	char fname[size];
	char lname[size];
	printf("enter your name(ex: firstname lastname): \n");
	gets(fname);
	gets(lname);
	printf("%s, %s", lname, fname);
	return 0;
}   //chapter 9.3 programming exercise 4

#include "datachecks.h"
int main()
{
	int val;
	printf("enter an integer value: ");
	val = getanint();
	printf("the integer entered is: %d", val);
	return 0;
}	//chapter 9.3 programming exercise 5

#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0
#define size 100
float isvalidreal(char[]);
int main()
{
	char val[size];
	float num;
	printf("enter a float num: ");
	gets(val);
	if (isvalidreal(val) == true)
	{
		num = atof(val);
		printf("the number you entered is %f", num);
	}
	else
		printf("the number you entered is not a valid num");
	return 0;
}
float isvalidreal(char value[])
{
	int valid = true, sign = false, i, start = 0;
	if (value[0] == '\0' || value[0] == '.')
		valid = false;
	if (value[0] == '+' || value[0] == '-')
	{
		sign = true;
		start = 1;
	}
	if (sign == true && value[1] == '\0')
		valid = false;
	i = start;
	while (valid == true && value[i] != '\0')
	{
		if (value[i] < '0' || value[i] > '9')
			valid = false;
		if (value[i] == '.')
			valid = true;
		i++;
	}
	return valid;
}	//chapter 9;3 programming exercise 6

#include <stdio.h>

int main()
{
	char data[] = "$23.45 10";
	char dol;
	float price;
	int unit;
	char text[] = "have a nice day!";
	printf("|%25s|\n", "have a happy day");
	printf("|%-25s|\n", "have a happy day");
	printf("|%25.12s|\n", "have a happy day");
	printf("|%.12s|\n", "have a happy day");
	sscanf(data, "%c%f%d", &dol, &price, &unit);
	printf("%s", data);
	printf("%s\n", text);
	printf("%c", text);
}	//chapter 9.4 연습

#include <stdio.h>
#define size 100
void separate(char [], char [], char []);
int main()
{
	char str1[size];
	char str2[size];
	char str3[size];
	printf("enter a number: ");
	gets(str1);
	printf("enter a number: ");
	gets(str2);
	printf("enter a number: ");
	gets(str3);
	separate(str1, str2, str3);
	return 0;
}
void separate(char s1[], char s2[], char s3[])
{
	char total[size];
	sprintf_s(total, "result: %s, %s, %s", s1, s2, s3);
	puts(total);
}	//chapter 9.4 programming exercise 1

#include <stdio.h>

int main()
{
	char text[] = "%6.2f %6.2f %6.2f";
	printf("%s\n", text);
	printf("%c", *text);
}	//chapter 9.4 programming execise 2

#include <stdio.h>
#define size 100

int main()
{
	char str1[size];
	char str2[size];
	char str3[size];
	char result[size];
	printf("enter a string: ");
	gets(str1);
	printf("enter a number: ");
	gets(str2);
	printf("enter a number: ");
	gets(str3);
	sprintf(result, "string: %s number1: %s number2: %s", str1, str2, str3);
	puts(result);
}	//chapter 9.4 programming exercise 3

#include <stdio.h>
#define size 1000
int countchar(char[]);
int main()
{
	char test[size];
	printf("type in any number of characters: ");
	gets(test);
	printf("the number of characters just entered is %d", countchar(test));
	return 0;
}
int countchar(char list[])
{
	int i, count = 0;
	for (i = 0; list[i] != '\0'; i++)
		count++;
	return count;
}	//program 9.10

#include <stdio.h>
#define size 100
#define yes 1
#define no 0
int countword(char[]);
int main()
{
	char test[size];
	printf("type in any number of words: ");
	gets(test);
	printf("the number of words just entered is %d", countword(test));
	return 0;
}
int countword(char list[])
{
	int i, count = 0, word = no;
	for (i = 0; list[i] != '\0'; i++)
	{
		if (list[i] == ' ')
			word = no;
		else if (word == no)
		{
			word = yes;
			count++;
		}
	}
	return count;
}	//program 9.11

#include <stdio.h>
#define size 1000
int countchar(char[]);
int main()
{
	char test[size];
	printf("type in any number of characters: ");
	gets(test);
	printf("the number of characters just entered is %d", countchar(test));
	return 0;
}
int countchar(char list[])
{
	int i, count = 0;
	for (i = 0; list[i] != '\0'; i++)
	{
		if (list[i] != ' ')
			count++;
	}
	return count;
}	//chapter 9.5 programming exercise 1

#include <stdio.h>
#define size 1000
int countchar(char[]);
int main()
{
	char test[size];
	printf("type in any number of characters: ");
	gets(test);
	printf("the number of characters just entered is %d", countchar(test));
	return 0;
}
int countchar(char list[])
{
	int i, count = 0;
	for (i = 0; list[i] != '\0'; i++)
	{
		if (list[i] == 'a' || list[i] == 'e' || list[i] == 'i' || list[i] == 'o' || list[i] == 'u')
			count++;
	}
	return count;
}	//chapter 9.5 programming exercise 2

#include <stdio.h>
#define size 100
#define yes 1
#define no 0
int countword(char[]);
int countchar(char[]);
int main()
{
	char test[size];
	printf("type in any number of words: ");
	gets(test);
	printf("the number of words just entered is %d\n", countword(test));
	printf("the number of characters just entered is %d", countchar(test));
	return 0;
}
int countword(char list[])
{
	int i, count = 0, word = no;
	for (i = 0; list[i] != '\0'; i++)
	{
		if (list[i] == ' ')
			word = no;
		else if (word == no)
		{
			word = yes;
			count++;
		}
	}
	return count;
}
int countchar(char list[])
{
	int i, count = 0;
	for (i = 0; list[i] != '\0'; i++)
	{
		if (list[i] != ' ')
			count++;
	}
	return count;
}	//chapter 9.5 programming exercise 3

#include <stdio.h>
#include <math.h>
#define size 100
#define yes 1
#define no 0
int countword(char[]);
int main()
{
	char test[size];
	printf("type in any number of words: ");
	gets(test);
	printf("the number of words just entered is %d", countword(test));
	return 0;
}
int countword(char list[])
{
	int i, j, count = 0, word = no, cntchar = 0;
	float countchar = 0;
	for (i = 0; list[i] != '\0'; i++)
	{
		if (list[i] == ' ')
			word = no;
		else if (word == no)
		{
			word = yes;
			count++;
		}
		if (word == yes)
		{
			for (j = 0; list[j]; j++)
			{
				countchar++;
				if (list[j] == ' ')
				{
					countchar = 0;
				}
			}
		}
	}
	printf("characters: %.0f\n", sqrt(countchar));
	return count;
}	//chapter 9.5 programming exercise 4

#include <stdio.h>
#define size 100
int main()
{
	char str[size];
	int i = 0, line = 0;
	printf("enter some sentences: \n");
	while (gets(str) != NULL)
	{
		if (str[i] == EOF)
			break;
		else
			line++;
	}
	printf("line: %d", line);
	return 0;
}	//chapter 9.5 programming exercise 5

#include <stdio.h>
#define size 100
int countsentence(char[]);
int main()
{
	char str[100];
	printf("enter some sentences: ");
	gets(str);
	printf("sentences: %d", countsentence(str));
	return 0;
}
int countsentence(char strng[])
{
	int i, count = 0;
	for (i = 0; strng[i]; i++)
	{
		if (strng[i] == '.' || strng[i] == '?' || strng[i] == '!')
			count++;
	}
	return count;
}	//chapter 9.5 programming exercise 6

#include <stdio.h>
#define size 10000
#define true 1
#define false 0
int countsentence(char[]);
int countword(char[]);
int main()
{
	char str[size];
	int words, sentences;
	printf("enter some strings: \n");
	gets(str);
	sentences = countsentence(str);
	words = countword(str);
	printf("sentences: %d\n", sentences);
	printf("words: %d\n", words);
	printf("words per sentences: %d", words / sentences);
	return 0;
}
int countsentence(char strng[])
{
	int i, cntsentence = 0;
	for (i = 0; strng[i]; i++)
	{
		if (strng[i] == '.' || strng[i] == '?' || strng[i] == '!')
			cntsentence++;
	}
	return cntsentence;
}
int countword(char strng[])
{
	int i, cntword = 0, word = false;
	for (i = 0; strng[i]; i++)
	{
		if (strng[i] == ' ')
			word = false;
		else if (word == false)
		{
			word = true;
			cntword++;
		}
	}
	return cntword;
}	//chapter 9.5 programming exercise 7

#include <stdio.h>
#define size 10000
int countsentence(char[]);
int main()
{
	char str[size];
	printf("enter some sentences: ");
	gets(str);
	printf("sentences: %d", countsentence(str));
	return 0;
}
int countsentence(char s[])
{
	int i, count = 0;
	for (i = 0; s[i]; i++)
	{
		if (s[i] == '.' || s[i] == '!' || s[i] == '?'|| s[i] == ',' || s[i] == ';')
			count++;
	}
	return count;
}	//chapter 9.5 porgramming exercise 8