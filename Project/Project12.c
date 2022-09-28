#include <stdio.h>
int calcul(char *);

int main()
{
	while (1)
	{
		char arr[10000] = {0,};
		printf("Enter an expression>> ");
		gets(arr);
		if (arr[0] == NULL) break;
		printf(" Value: %d\n", calcul(arr));
	}
	return 0;
}

int mid(char *arr, int k)
{
	int mid = 0;
	while (arr[k] != '+' && arr[k] != '-' && arr[k] != NULL)
	{
		if ('0' <= arr[k] <= '9' && arr[k] != ' ')
		{
			mid *= 10;
			mid += arr[k] - '0';
		}
		k++;
	}
	return mid;
}

int calcul(char *arr)
{
	int temp = 0;
	temp = mid(arr, temp);
	for (int i = 0; arr[i] != NULL; i++)
	{
		if (arr[i] == '+') temp += mid(arr, i + 1);
		else if (arr[i] == '-') temp -= mid(arr, i + 1);
	}
	return temp;
}