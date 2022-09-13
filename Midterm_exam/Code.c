//기초컴퓨터프로그래밍 중간고사 1번
#include <stdio.h>
#include <stdlib.h>
int main()
{
	float num;
	float i = 0, first = 0, second, total = 0;
	float avg = 0;

	while (1)
	{
		printf("enter integers>> ");
		scanf("%f", &num);
		if (num < 0)
			break;
		else
		{
			total += num;
			if (first < num)
				first = num;
		}
	}
	avg = total / i;
	printf("first = %.0f\n", first);
	printf("average = %.2f", avg);
}

//기초컴퓨터프로그래밍 중간고사 2번
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int sec, min, hr, day;
	printf("enter a seconds>> ");
	scanf("%d", &sec);	//1day = 24hr, 1hr = 60min 1min=60sec, 1min=60sec 1hr=3600sec 1day=86400sec
	if (sec == 0)
		exit(1);
	else if (sec > 0 && sec < 86400)		//하루넘지 않을떄
	{
		if (sec > 3600)		//시간단위일때
		{
			hr = sec / 3600;
			min = sec % 3600;
			if (min > 60)
			{
				sec = min % 60;
				min = min / 60;
			}
			if (sec != 0)
				printf("%dh%dm%ds", hr, min, sec);
			if (sec == 0)
				printf("%dh%dm", hr, min);
		}
		else if (sec > 60 && sec < 3600)	//분단위일때
		{
			min = sec / 60;
			sec = sec % 60;
			if (sec != 0)
				printf("%dm%ds", min, sec);
			if (sec == 0)
				printf("%dm", min);
		}
		else //초단위일때
			printf("%ds", sec);
	}
	else if (sec > 86400)	//하루 넘을때
	{
		day = sec / 86400;	//200000 / 86400 = 2
		hr = sec % 86400;	//200000 % 86400 = 27200
		if (hr > 3600)
		{
			min = hr % 3600;
			hr = hr / 3600;
			sec = min % 60;
			min = min / 60;
		}
		printf("%dd%dh%dm%ds", day, hr, min, sec);
	}
}

//기초컴퓨터프로그래밍 중간고사 3번
#include <stdio.h>

int main()
{
	int n1, n2, i, j, count = 0;
	while (1)
	{
		printf("\nenter two integers>> ");
		scanf("%d %d", &n1, &n2);		//if n1 = 3 n2 = 10
		if (n1 == 0 && n2 == 0)
			break;
		for (i = n1; i <= n2; i++)		//3 4 5 6 7 8 9 10
		{
			for (j = 1; j <= i; j++)	// 1 2 3 4 5 6 7 8 9 10
			{
				if (count > 2)
					break;
				if (i%j == 0) //3 % 1 == 0, count = 1 4 % 2 ==
					count++;
			}
			if (count == 2)
				printf("%d ", i);
			count = 0;
		}
	}
	return 0;
}

//기초컴퓨터프로그래밍 중간고사 4번
#include <stdio.h>

int main()
{
	int n1, n2, fibo = 0, first = 1, sec = 1, cnt = 0;
	while (1)
	{
		printf("enter two integers>> ");
		scanf("%d %d", &n1, &n2);	//10 100-> 1 1 2 3 5 8 (13 21 34 55 89)
		if (n1 == 0 && n2 == 0)
			break;
		for (int i = n1; i <= n2; i++)
		{
			//printf("%d ", first);
			printf("%d ", sec);
			fibo = first + sec;	//1 + 1 = 2 -> 1 + 2 = 3
			first = sec; // first = 2 sec = 1
			sec = fibo;	// sec = 2
			cnt++;
		}
		printf("the two number of fibonacci numbers is %d\n\n", cnt);
	}
		return 0;
}