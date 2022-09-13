#pragma once
#include <stdio.h>
#include <stdlib.h>
#define FALSE 0
#define TRUE 1
#define SIZE 40
int getanInt();
int getanInt()
{
	int isvalidInt(char[]);
	char value[SIZE];
	int isanInt = FALSE;
	do
	{
		gets(value);
		if (isvalidInt(value) == FALSE)
		{
			printf("Invalid integer - Please re-enter: ");
			continue;
		}
		isanInt = TRUE;
	} while (isanInt == FALSE);
	return atoi(value);
}
int isvalidInt(char str[])
{
	int start = 0;
	int i;
	int valid = TRUE;
	int sign = FALSE;
	if (str[0] == ' ')
		valid = FALSE;
	if (str[0] == '+' || str[0] == '-')
	{
		sign = TRUE;
		start = 1;
	}
	if (sign == TRUE && str[1] == '\0')
		valid = FALSE;
	i = start;
	while (valid == TRUE && str[i] != '\0')
	{
		if (str[i]<'0' || str[i] > '9')
			valid = FALSE;
		i++;
	}
	return valid;
}