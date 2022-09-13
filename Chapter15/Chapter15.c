//program 15.1
#include <stdio.h>

int main()
{
	double price, total;
	int units;
	printf("enter the price: ");
	scanf("%lf", &price);
	printf("enter the number sold: ");
	scanf("%d", &units);

	total = price * units;
	printf("the total for the %d units is $%4.2f\n", units, total);
	return 0;
}