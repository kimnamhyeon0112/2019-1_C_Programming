#include<stdio.h>

int main()
{
#define MAXELS 50
	char string1[MAXELS] = "Hello";
	char string2[MAXELS] = "Hello there";
	int n;
	void strcpy(char[], char[]);
	int strlen(char[]);
	int strcmp(char[], char[]);
	void strcat(char[], char[]);

	n = strcmp(string1, string2);

	if (n < 0)
		printf("%s is less than %s\n\n", string1, string2);
	else if (n == 0)
		printf("%s is equal to %s\n\n", string1, string2);
	else
		printf("%s is greater than %s\n\n", string1, string2);

	printf("The length of string1 is %d characters\n", strlen(string1));
	printf("The length of string2 is %d characters\n", strlen(string2));

	strcat(string1, string2);

	printf("After concatenation, string1 contains the string value\n");
	printf("%s\n", string1);
	printf("The length of this string is %d characters\n\n", strlen(string1));
	printf("Type in a sequence of characters for string2:\n");
	gets(string2);

	strcpy(string1, string2);

	printf("After copying string2 to string1");
	printf(" the string value in string1 is:\n");
	printf("%s\n", string1);
	printf("The length of this string is %d characters\n\n", strlen(string1));

	return 0;
}