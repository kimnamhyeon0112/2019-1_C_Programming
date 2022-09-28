#include <stdio.h>

int main()
{
	int N, i;
	int a = 0, b = 1, c;
	printf("Enter a number: ");
	scanf("%d", &N);

	if (N == 0)
		printf("Until %d Fibonacci number is %d ", N, a);
	else
		printf("Until %d Fibonacci number is %d ", N, b);

	for (i = 1; i < N; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%d ", c);
	}

	return 0;
}