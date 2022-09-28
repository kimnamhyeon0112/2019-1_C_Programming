#include <stdio.h>
int main() {
	int i, num, number, max1, secmax;
	printf("5개의 정수를 입력: ");
	scanf("%d", &num);
	for (i = 0; i <= num; i++) {
		scanf("%d", &number);

		if (number == 0) {
			max1 = number;
			secmax = number;
		}
		else if (max1 < number) {
			max1 = number;
			printf("first = %d", max1);
		}
		else
			secmax = num;
		printf("second = %d", secmax);
	}
	return 0;
}