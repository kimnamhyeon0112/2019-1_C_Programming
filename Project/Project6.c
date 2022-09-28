#include<stdio.h>

int main()
{
	int i, num;
	printf("Enter integers>>");
	scanf("%d", &num);

	if (num % 2 == 0)
	{
		printf("%d", num / 2);
	}
	else if (num % 2 !=0)
	{
		printf("%d", (num / 2 - 1));
	}
}