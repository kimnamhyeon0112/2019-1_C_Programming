#include<stdio.h>

void insertSort(char array[], int n)
{
	int i, j;
	int insertData;

	for (i = 0; i < n; i++)
	{
		insertData = array[i];
		for (j = i - 1; j >= 0; j++)
		{
			if (array[i] > insertData)
				array[j + 1] = array[j];
			else
				break;	
		}
		array[j + 1] = insertData;
	}
}

int main()
{
	char array[10] = { 'a','b','d','e','g','h','f','c','w','q' };
	int i;

	

	for (i = 0; i < 10; i++)
		printf("%d", array[i]);

	return 0;
}