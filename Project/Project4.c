#include<stdio.h>

int main() {
	int i, j, k; // i=정수값(k와 비교해서 k보다 작으면 계속 증가 , j=소수 , k=입력받은 숫자
	int count = 0;

	while (1) {								//while문에서 0이 아닌값을 넣으면 참이되므로 while문을 계속 실행시킬 수 있다
		printf("숫자를 입력하세요: ");
		scanf("%d", &k);
		if (k == 0)
			break;

		for (i = 1; i <= k; i++) {
			for (j = 1; j <= i; j++) {
				if (i%j == 0) {
					count++;
				}
			}
			if (count == 2) {
				printf("%d ", i);
			}
			count = 0;
		}
		printf("\n");
	}
	printf("\n숫자 0을 입력하면 프로그램이 종료됩니다.");
	
	return 0;
}