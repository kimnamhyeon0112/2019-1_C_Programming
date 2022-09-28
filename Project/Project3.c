#include <stdio.h>

int main()
{
	int sum = 0;
	int num1, i, number, average, max, min;// i는 변수, num1은 입력한 정수의 갯수, number은 입력한 값, average는 평균, max는 최댓값, min은 최솟값 
	printf("입력할 정수의 갯수: ");
	scanf("%d", &num1);

	printf("\n숫자를 입력하세요.\n");
	for (i = 0; i < num1; i++)
	{
		scanf("%d", &number);
		sum = sum + number;

		if (i == 0) {
			max = number;
			min = number;
		}
		else {
			if (max < number) {
				max = number;
			}

			if (min > number) {
				min = number;
			}
		}
	}
	average = sum / num1;
	printf("입력한 정수들의 합은 %d이고 평균은 %d이고 최대값은 %d이고 최솟값은 %d입니다", sum, average, max, min);
	return 0;
}