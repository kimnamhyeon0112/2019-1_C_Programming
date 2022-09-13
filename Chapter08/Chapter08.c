#include <stdio.h>
#define max 5

int main()
{
	int grade[max];
	int i;

	for (i = 0; i < max; i++)	//i <= max를 하면 run-time check failure #2 - stack around the variable 'grade' was corrupted.라는 오류가 뜨는데 배열에 지정된 크기를 초과하기 때문이다
	{
		printf("enter a grade: ");
		scanf("%d", &grade[i]);
	}
	for (i = 0; i < max; i++)
	{
		printf("grade %d is %d\n", i, grade[i]);
	}
	return 0;
}	//program 8.1

#include <stdio.h>
#define max 5

int main()
{
	int grade[max];
	int i, total = 0;

	for (i = 0; i < max; i++)
	{
		printf("enter a grade: ");
		scanf("%d", &grade[i]);
		total = total + grade[i];
	}
	printf("the total of the grades %d %d %d %d %d is %d", grade[0], grade[1], grade[2], grade[3], grade[4], total);
	return 0;
}	//program 8.2 직접짠것

#include <stdio.h>
#define max 5

int main()
{
	int grade[max];
	int i, total = 0;

	for (i = 0; i < max; i++)
	{
		printf("enter a grade: ");
		scanf("%d", &grade[i]);
	}
	printf("the total of the grades ");
	for (i = 0; i < max; i++)
	{
		printf("%d ", grade[i]);
		total = total + grade[i];
	}
	printf("is %d", total);
	return 0;
}	//program 8.2 원본

#include  <stdio.h>
#define max1 60
#define max2 30
#define max3 25
#define max4 100
#define max5 26
#define max6 1000
#define max7 20

int main()
{
	double rate[max1];
	double temp[max2];
	char code[max3];
	int year[max4];
	double coupon[max5];
	double distance[max6];
	int codenum[max7];
}	//exercise 8.1 q1

#include <stdio.h>
#define max 20

int main()
{
	int grade[max];
	int i;
	for (i = 0; i < max; i++)
	{
		printf("enter num: ");
		scanf("%d", &grade[i]);
	}
	printf("%d %d %d", grade[0], grade[2], grade[6]);
}	//exercise 8.1 q2.1

#include <stdio.h>
#define max 10

int main()
{
	double grade[max];
	int i;
	for (i = 0; i < max; i++)
	{
		printf("enter num: ");
		scanf("%lf", &grade[i]);
	}
	printf("%lf %lf %lf", grade[0], grade[2], grade[6]);
}	//exercise 8.1 q2.2

#include <stdio.h>
#define max 16

int main()
{
	double amps[max];
	int i;
	for (i = 0; i < max; i++)
	{
		printf("enter num: ");
		scanf("%lf", &amps[i]);
	}
	printf("%lf %lf %lf", amps[0], amps[2], amps[6]);
}	//exercise 8.1 q2.3

#include <stdio.h>
#define max 15

int main()
{
	double dist[max];
	int i;
	for (i = 0; i < max; i++)
	{
		printf("enter num: ");
		scanf("%lf", &dist[i]);
	}
	printf("%lf %lf %lf", dist[0], dist[2], dist[6]);
}	//exercise 8.1 q2.4

#include <stdio.h>
#define max 25

int main()
{
	double velocity[max];
	int i;
	for (i = 0; i < max; i++)
	{
		printf("enter num: ");
		scanf("%lf", &velocity[i]);
	}
	printf("%lf %lf %lf", velocity[0], velocity[2], velocity[6]);
}	//exercise 8.1 q2.5

#include <stdio.h>
#define max 100

int main()
{
	double time[max];
	int i;
	for (i = 0; i < max; i++)
	{
		printf("enter num: ");
		scanf("%lf", &time[i]);
	}
	printf("%lf %lf %lf", time[0], time[2], time[6]);
}	//exercise 8.1 q2.6

#include <stdio.h>

int main()
{
	double prices[9] = { 10.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 18.59};
	printf("%.2f %.2f %.2f\n%.2f %.2f %.2f\n%.2f %.2f %.2f", prices[0], prices[1], prices[2], prices[3], prices[4], prices[5], prices[6], prices[7], prices[8]);
}	//chapter 8.1 programming exercise 1

#include <stdio.h>
#define max 15

int main()
{
	int temp[max];
	int i, total = 0, avg;
	for (i = 0; i < max; i++)
	{
		printf("enter num: ");
		scanf("%d", &temp[i]);
		total += temp[i];
	}
	avg = total / max;
	printf("entered numbers are: ");
	for (i = 0; i < max; i++)
		printf("%d ", temp[i]);
	printf("\naverage: %d", avg);
}	//chapter 8.1 programming exercise 2.a

#include <stdio.h>
#define max 15

int main()
{
	int temp[max];
	int i, total = 0, avg, maxnum = 0;
	for (i = 0; i < max; i++)
	{
		printf("enter num: ");
		scanf("%d", &temp[i]);
		total += temp[i];
	}
	avg = total / max;
	printf("entered numbers are: ");
	for (i = 0; i < max; i++)
	{
		if (maxnum < temp[i])
			maxnum = temp[i];
		printf("%d ", temp[i]);
	}
	printf("\naverage: %d", avg);
	printf("\nmaxnumber: %d", maxnum);
}	//chapter 8.1 programming exercise 2.b

#include <stdio.h>
#define max 15

int main()
{
	int temp[max];
	int i, maxnum = 0, listnum = 0;
	for (i = 0; i < max; i++)
	{
		printf("enter num: ");
		scanf("%d", &temp[i]);
	}
	for (i = 0; i < max; i++)
	{
		if (maxnum < temp[i])
		{
			maxnum = temp[i];
			listnum = i;
		}
	}
	printf("\nthe maximum value is: %d", maxnum);
	printf("\nthis is element number %d in the list of numbers", listnum);
}	//chapter 8.1 programming exercise 2.c

#include <stdio.h>
#define max 15

int main()
{
	int temp[max];
	int i, minnum = 9999999;
	for (i = 0; i < max; i++)
	{
		printf("enter num: ");
		scanf("%d", &temp[i]);
	}
	for (i = 0; i < max; i++)
	{
		if (minnum > temp[i])
			minnum = temp[i];
	}
	printf("minimum number: %d", minnum);
}	//chapter 8.1 programming exercise 2.d

#include <stdio.h>

int main()
{
	int grades[14] = { 89,95,72,83,99,54,86,75,92,73,79,75,82,73 };
	int total = 0, avg, dev, i;
	for (i = 0; i < 14; i++)
	{
		total += grades[i];
	}
	avg = total / 14;
	printf("total: %d\naverage: %d\n", total, avg);
	for (i = 0; i < 14; i++)
	{
		dev = grades[i] - avg;
		printf("%d's deviation: %3d\n", grades[i], dev);
	}
	return 0;
}	//chapter 8.1 programming exercise 3.a

#include <stdio.h>

int main()
{
	int grades[14] = { 89,95,72,83,99,54,86,75,92,73,79,75,82,73 };
	int total = 0, avg, dev, i, var = 0;
	for (i = 0; i < 14; i++)
	{
		total += grades[i];
	}
	avg = total / 14;
	printf("total: %d\naverage: %d\n", total, avg);
	for (i = 0; i < 14; i++)
	{
		dev = grades[i] - avg;
		printf("%d's deviation: %3d\n", grades[i], dev);
	}
	for (i = 0; i < 14; i++)
		var += ((grades[i] - avg) * (grades[i] - avg));
	var = var / 14;
	printf("variance: %d\n", var);
	return 0;
}	//chapter 8.1 programming exercise 3.b

#include <stdio.h>
#define max 10

int main()
{
	int price[max], quantity[max], amount[max];
	int i;
	for (i = 0; i < max; i++)
	{
		scanf("%d%d", &quantity[i], &price[i]);
		amount[i] = quantity[i] * price[i];
	}
	printf("quantity  price  amount\n");
	printf("--------  -----  ------\n");
	for (i = 0; i < max; i++)
	{
		printf("%8d %6d %7d\n", quantity[i], price[i], amount[i]);
	}
	return 0;
}	//chapter 8.1 programming exercise 4

#include <stdio.h>
#define max 10

int main()
{
	int raw[max];
	int num, i, j,temp;
	for (i = 0; i < max; i++)
	{
		printf("enter a num: ");
		scanf("%d", &num);
	}
	for (i = 0; i < max; i++)
	{
		for (j = 0; j < max - 1; j++)
		{
			if (num > raw[j])
			{
				temp = num;
				num = raw[j];
				raw[j] = temp;
			}
		}
	}
	for (i = 0; i < max; i++)
	{
		printf("%d", raw[i]);
	}
	return 0;
}	//chapter 8.1 programming exercise 5

#include <stdio.h>
#define max 5

int main()
{
	int nums[max] = { 2,18,1,27,16 };
	int i, maxnum = 0;
	for (i = 0; i < max; i++)
	{
		if (maxnum < nums[i])
			maxnum = nums[i];
	}
	printf("the maximum value is %d", maxnum);
	return 0;
}	//program 8.3

#include <stdio.h>
#define max1 10
#define max2 5
#define max3 100
#define max4 64
#define max5 15
void print(int[max1], double[max2], double[max3], double[max4], char[max5]);

int main()
{
	int score[max1] = { 89,75,82,93,78,95,81,88,77,82 };
	double total[max2] = { 10.62,13.98,18.45,12.68,14.76 };
	double rate[max3] = { 6.29,6.95,8.25,8.35,8.40,8.42 };
	double temp[max4] = { 78.2,69.6,68.5,83.9,55.4,68.0,49.8,58.3,62.5,71.6 };
	char code[max5] = { 'f','j','m','q','t','w','z' };
	print(score, total, rate, temp, code);
	return 0;
}
void print(int score[max1], double total[max2], double rate[max3], double temp[max4], char code[max5])
{
	int i;
	for (i = 0; i < max1; i++)
		printf("%d\n", score[i]);
	for (i = 0; i < max2; i++)
		printf("%lf\n", total[i]);
	for (i = 0; i < max3; i++)
		printf("%lf\n", rate[i]);
	for (i = 0; i < max4; i++)
		printf("%lf\n", temp[i]);
	for (i = 0; i < max5; i++)
		printf("%c\n", code[i]);
}	//exercise 8.2 q1

#include <stdio.h>
#define max 12
void question1(char[max]);
void question2(char[]);
void question3(char[]);

int main()
{
	char goodstring1[max] = { 'g','o','o','d',' ','m','o','r','n','i','n','g' };
	char goodstring2[] = { 'g','o','o','d',' ','m','o','r','n','i','n','g' };
	char goodstring3[] = "good morning";
	question1(goodstring1);
	question2(goodstring2);
	question3(goodstring3);
}
void question1(char goodstring1[max])
{
	int i;
	for (i = 0; i < max; i++)
		printf("%c", goodstring1[i]);
	printf("\n");
}
void question2(char goodstring2[])
{
	int i;
	for (i = 0; i < max; i++)
		printf("%c", goodstring2[i]);
	printf("\n");
}
void question3(char goodstring3[])
{
	int i;
	for (i = 0; i < max; i++)
		printf("%c", goodstring3[i]);
}	//exercise 8.2 q2

#include <stdio.h>

int main()
{
	int i;
	char message1[] = "input the following data";
	char message2[] = "----------";
	char message3[] = "enter the data:";
	char message4[] = "enter the account number:";
	printf("%s\n", message1);
	printf("%s\n", message2);
	printf("%s\n", message3);
	printf("%s\n", message4);
	return 0;
}	//chapter 8.2 programming exercise 1

#include <stdio.h>
void q1(char[]);
void q2(char[]);
void q3(char[]);
void q4(char[]);
int main()
{
	char strtest[] = "this is a test\0";
	q1(strtest);
	printf("\n");
	q2(strtest);
	printf("\n");
	q3(strtest);
	printf("\n");
	q4(strtest);
	return 0;
}
void q1(char strtest[])
{
	int i;
	for (i = 0; i <= 14; i++)
		printf("%c", strtest[i]);
}
void q2(char strtest[])
{
	int i;
	for (i = 10; i <= 14; i++)
		printf("%c", strtest[i]);
}
void q3(char strtest[])
{
	printf("%s", strtest);
}
void q4(char strtest[])
{
	int i = 0;
	while (strtest[i] != '\0')
	{
		for (i = 0; i < 15; i++)
			printf("%c", strtest[i]);
	}
}	//chapter 8.2 programming exercise 2

#include <stdio.h>

int main()
{
	float price[8] = { 16.24,18.98,23.75,16.29,19.54,14.22,11.13,15.39 };
	int i;
	for (i = 0; i < 8; i++)
		printf("%.2f ", price[i]);
}	//chapter 8.2 programming exercise 3.a

#include <stdio.h>
float price[8] = { 16.24,18.98,23.75,16.29,19.54,14.22,11.13,15.39 };
int main()
{
	int i;
	for (i = 0; i < 8; i++)
		printf("%.2f ", price[i]);
}	//chapter 8.2 programming exercise 3.b

#include <stdio.h>

int main()
{
	double rates[9] = { 17.24,25.63,5.94,33.92,3.71,32.84,35.93,18.24,6.92 };
	int i;
	float Max = 0, min = 999;
	for (i = 0; i < 9; i++)
		printf("%.2f\n", rates[i]);
	for (i = 0; i < 9; i++)
	{
		if (Max < rates[i])
			Max = rates[i];
		if (min > rates[i])
			min = rates[i];
	}
	printf("max: %.2f, min: %.2f", max, min);
	return 0;
}	//chapter 8.2 programming exercise 4

#include <stdio.h>
#define max 5
double prices[max] = { 9.92,6.32,12.63,5.95,10.29 };
int main()
{
	int units[max];
	float amount[max];
	int i;
	float total = 0;
	for (i = 0; i < max; i++)
	{
		printf("enter %d's units: ", i + 1);
		scanf("%d", &units[i]);
	}
	printf("price  units  amount\n");
	printf("-----  -----  ------\n");
	for (i = 0; i < max; i++)
	{
		amount[i] = prices[i] * units[i];
		printf("%5.2f %6d %7.2f\n", prices[i], units[i], amount[i]);
		total += amount[i];
	}
	printf("-----  -----  ------\n");
	printf("total: %.2f", total);
	return 0;
}	//chapter 8.2 programming exercise 5

#include <stdio.h>
#define MAX 5
void find_max(int[MAX]);

int main()
{
	int array[MAX] = { 2,18,1,27,16 };
	find_max(array);
	return 0;
}
void find_max(int array[MAX])
{
	int i, Max = 0;;
	for (i = 0; i < Max; i++)
	{
		if (Max < array[i])
			Max = array[i];
	}
	printf("max: %d", Max);
}	//program 8.4

#include <stdio.h>
#define MAX 5
int Find_max(int[], int);

int main()
{
	int num[MAX] = { 2,18,1,27,16 };
	printf("the maximum value is %d", Find_max(num, MAX));

	return 0;
}
int Find_max(int num[], int maxel)
{
	int i, Max = 0;
	for (i = 0; i < maxel; i++)
	{
		if (Max < num[i])
			Max = num[i];
	}
	return Max;
}	//program 8.5

#include <stdio.h>

void sortarray(double inarray[500]);
void sortarray(double inarray[]);
void findkey(char select[256]);
void findkey(char select[]);
float prime(double rates[256]);
float prime(double rates[]);
int main()
{
	double prices[500];
	char keys[256];
	double rates[256];
}	//exercise 8.3 q1, q2, q3

#include <stdio.h>
#define max 5
int Findmax(int[], int);

int main()
{
	int num[max] = { 2,18,1,27,16 };
	printf("the minimum value is %d", Findmax(num, max));

	return 0;
}
int Findmax(int num[], int maxel)
{
	int i, min = 999;
	for (i = 0; i < maxel; i++)
	{
		if (min > num[i])
			min = num[i];
	}
	return min;
}	//chapter 8.3 programming exercise 1

#include <stdio.h>
void show(float[]);
int main()
{
	float rates[] = { 6.5, 8.2, 8.5, 8.3, 8.6, 9.4, 9.6, 9.8, 10.0 };
	show(rates);
	return 0;
}
void show(float r[])
{
	for (int i = 0; i < 9; i++)
		printf("%.1f\n", r[i]);
}	//chapter 8.3 programming exercise 2

#include <stdio.h>

void display(char[]);
int main()
{
	char message[] = "vacation is near";
	display(message);
	return 0;
}
void display(char string[])
{
	int i;
	printf("%s", string);
	printf("\n");
	for (i = 0; i < 8; i++)
	{
		printf("%c", string[i]);
	}
}	//chapter 8.3 programming exercise 3

#include <stdio.h>
#define max 10
void display(double[],double[]);
int main()
{
	double price[max] = { 10.62, 14.89, 13.21, 16.55, 18.62, 9.47, 6.58, 18.32, 12.15, 3.98 };
	double quantity[max] = { 4, 8.5, 6, 8.35, 9, 15.3, 3, 5.4, 2.9, 4.8 };
	display(price, quantity);
	return 0;
}
void display(double p[], double q[])
{
	int i;
	float a[max];
	printf("price quantity amount\n");
	printf("----- -------- ------\n");
	for (i = 0; i < max; i++)
	{
		a[i] = p[i] * q[i];
		printf("%5.2f %8.2f %6.2f\n", p[i], q[i], a[i]);
	}
}	//chapter 8.3 programming exercise 4

#include <stdio.h>
#include <math.h>
#define max 14
double calcavg(int[max]);
double variance(int[max]);
int main()
{
	int testvals[max] = { 89,95,72,83,99,54,86,75,92,73,79,75,82,73 };
	printf("average: %.2f\n", calcavg(testvals));
	printf("variance: %f", variance(testvals));
	return 0;
}
double calcavg(int t[max])
{
	int i;
	double avg, total = 0;
	for (i = 0; i < max; i++)
		total += t[i];
	avg = total / max;
	return avg;
}
double variance(int t[max])
{
	double res = calcavg(t);
	double var = 0;
	int i;
	for (i = 0; i < max; i++)
		var += pow(t[i] - calcavg(t), 2);
	var = var / max;
	return var;
}	//chapter 8.3 programming exercise 5

#include <stdio.h>
#include <math.h>
#define max 10
double average(int[]);
double stddev(int[]);
int main()
{
	int num[max] = { 98,82,67,54,78,83,95,76,68,63 };
	printf("the average of the numbers is %.2f\n", average(num));
	printf("the standard deviation of the numbers is %.2f", stddev(num));
	return 0;
}
double average(int n[max])
{
	int i;
	double total = 0, avg;
	for (i = 0; i < max; i++)
		total += n[i];
	avg = total / max;
	return avg;
}
double stddev(int n[max])
{
	int i;
	double res = average(n);
	double var = 0, stddev;
	for (i = 0; i < max; i++)
		var += pow(n[i] - average(n), 2);
	var /= max;
	stddev = sqrt(var);
	return stddev;
}	//program 8.6 직접 짠것

#include <stdio.h>
#include <math.h>

double findavg(int[], int);
double stddev(int[], int, double);
int main()
{
#define numel 10
	int values[numel] = { 98,82,67,54,78,83,95,76,68,63 };
	double average, stddev;
	average = findavg(values,numel);
	stddev = stDdev(values, numel, average);
	printf("the average of the numbers is %.2f", average);
	printf("\nthe standard deviation of the numbers is %.2f", stddev);
	return 0;
}
double findavg(int nums[], int numel)
{
	int i;
	double sumnums = 0.0;
	for (i = 0; i < numel; i++)
		sumnums = sumnums + nums[i];
	return sumnums / numel;
}
double stdDev(int nums[], int numel, double av)
{
	int i;
	double sumdevs = 0.0;
	for (i = 0; i < numel; i++)
		sumdevs = sumdevs + pow((nums[i] - av), 2);
	return sqrt(sumdevs / numel);
}	//program 8.6 책에 있는 코드

#include <stdio.h>
#include <math.h>

double findavg(int[], int);
double stddev(int[], int, double);
void entvals(int[]);
int main()
{
#define numel 10
	int values[numel] = { 98,82,67,54,78,83,95,76,68,63 };
	double average, stddev;
	average = findavg(values, numel);
	stddev = stddev(values, numel, average);
	printf("the average of the numbers is %.2f", average);
	printf("\nthe standard deviation of the numbers is %.2f\n", stddev);
	entvals(values);
	return 0;
}
double findavg(int nums[], int numel)
{
	int i;
	double sumnums = 0.0;
	for (i = 0; i < numel; i++)
		sumnums = sumnums + nums[i];
	return sumnums / numel;
}
double stddev(int nums[], int numel, double av)
{
	int i;
	double sumdevs = 0.0;
	for (i = 0; i < numel; i++)
		sumdevs = sumdevs + pow((nums[i] - av), 2);
	return sqrt(sumdevs / numel);
}
void entvals(int n[])
{
	for (int i = 0; i < numel; i++)
		printf("%d ", n[i]);
}	//exercise 8.4 q1

#include <stdio.h>
#include <math.h>

double findavg(int[], int);
double stddev(int[], int, double);
int main()
{
#define numel 15
	int values[numel] = { 68,72,78,69,85,98,95,75,77,82,84,91,89,65,74 };
	double average, stddev;
	average = findavg(values, numel);
	stddev = stddev(values, numel, average);
	printf("the average of the numbers is %.2f", average);
	printf("\nthe standard deviation of the numbers is %.2f", stddev);
	return 0;
}
double findavg(int nums[], int numel)
{
	int i;
	double sumnums = 0.0;
	for (i = 0; i < numel; i++)
		sumnums = sumnums + nums[i];
	return sumnums / numel;
}
double stddev(int nums[], int numel, double av)
{
	int i;
	double sumdevs = 0.0;
	for (i = 0; i < numel; i++)
		sumdevs = sumdevs + pow((nums[i] - av), 2);
	return sqrt(sumdevs / numel);
}	//exercise 8.4 q2

#include <stdio.h>
#include <math.h>

double findavg(int[], int);
double stddev(int[], int, double);
double findmax(int[], int);
int main()
{
#define numel 10
	int values[numel] = { 98,82,67,54,78,83,95,76,68,63 };
	int max;
	double average, stddev;
	average = findavg(values, numel);
	stddev = stddev(values, numel, average);
	max = findmax(values, numel);
	printf("the average of the numbers is %.2f", average);
	printf("\nthe standard deviation of the numbers is %.2f", stddev);
	printf("\nthe maximum number is %d", max);
	return 0;
}
double findavg(int nums[], int numel)
{
	int i;
	double sumnums = 0.0;
	for (i = 0; i < numel; i++)
		sumnums = sumnums + nums[i];
	return sumnums / numel;
}
double stddev(int nums[], int numel, double av)
{
	int i;
	double sumdevs = 0.0;
	for (i = 0; i < numel; i++)
		sumdevs = sumdevs + pow((nums[i] - av), 2);
	return sqrt(sumdevs / numel);
}
double findmax(int nums[],int numel)
{
	int i;
	int max = 0;
	for (i = 0; i < numel; i++)
		if (max < nums[i])
			max = nums[i];
	return max;
}	//exercise 8.4 q3

#include <stdio.h>
#include <math.h>

double findavg(int[], int);
double stddev(int[], int, double);
double sort(int[], int);
int main()
{
#define numel 10
	int values[numel] = { 98,82,67,54,78,83,95,76,68,63 };
	int sort, i;
	double average, stddev;
	average = findavg(values, numel);
	stddev = stddev(values, numel, average);
	sort = sort(values, numel);
	printf("the average of the numbers is %.2f", average);
	printf("\nthe standard deviation of the numbers is %.2f", stddev);
	printf("\nsorted result:");
	for (i = 0; i < numel; i++)
		printf("%d ", values[i]);
	return 0;
}
double findavg(int nums[], int numel)
{
	int i;
	double sumnums = 0.0;
	for (i = 0; i < numel; i++)
		sumnums = sumnums + nums[i];
	return sumnums / numel;
}
double stddev(int nums[], int numel, double av)
{
	int i;
	double sumdevs = 0.0;
	for (i = 0; i < numel; i++)
		sumdevs = sumdevs + pow((nums[i] - av), 2);
	return sqrt(sumdevs / numel);
}
double sort(int nums[], int numel)
{
	int i, j, temp, move = 0;
	for (i = 0; i < (numel - 1); i++)
	{
		for (j = 1; j < numel; j++)
		{
			if (nums[j] < nums[j - 1])
			{
				temp = nums[j];
				nums[j] = nums[j - 1];
				nums[j - 1] = temp;
				move++;
			}
		}
	}
	return move;
}	//exercise 8.4 q4

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *grades, i, count, total = 0, avg;
	printf("declar the size of arrangement \"grades\": ");
	scanf("%d", &count);
	grades = (int*)malloc(sizeof(int)*count);
	if (grades == NULL)
	{
		printf("error");
		exit(1);
	}
	for (i = 0; i < count; i++)
	{
		printf("enter a score: ");
		scanf("%d", &grades[i]);
		total += grades[i];
		if (grades[i] < 0)
			exit(1);
	}
	avg = total / count;
	printf("total: %d average: %d\n", total, avg);
	for (i = 0; i < count; i++)
		if (avg > grades[i])
			printf("*%d ", grades[i]);
	printf("\n");
	for (i = 0; i < count; i++)
	{
		if (grades[i] >= 90 && grades[i] <= 100)
			printf("\n%d: a", grades[i]);
		else if (grades[i] >= 80 && grades[i] <= 89)
			printf("\n%d: b", grades[i]);
		else if (grades[i] >= 70 && grades[i] <= 79)
			printf("\n%d: c", grades[i]);
		else if (grades[i] >= 60 && grades[i] <= 69)
			printf("\n%d: d", grades[i]);
		else
			printf("\n%d: f", grades[i]);
	}
	free(grades);
	return 0;
}	//exercise 8.4 q5

#include <stdio.h>
#define max 50
int main()
{
	int peopletypes[max];
	int i, cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
	while (1)
	{
		for (i = 0; i < max; i++)
		{
			printf("enter a num between 1 to 4: ");
			scanf("%d", &peopletypes[i]);
			if (peopletypes[i] >= 1 && peopletypes[i] <= 4)
			{
				if (peopletypes[i] == 1)
					cnt1++;
				else if(peopletypes[i] == 2)
					cnt2++;
				else if (peopletypes[i] == 3)
					cnt3++;
				else
					cnt4++;
			}
			else if (peopletypes[i] == 0 || peopletypes[i] > 4)
				printf("invalid number, enter between 1 to 4\n\n");
			else
				break;
		}
			break;
	}
	printf("infant: %d\nchildren: %d\nteenager: %d\nadult: %d", cnt1, cnt2, cnt3, cnt4);
	return 0;
}	//exercise 8.4 q6

#include <stdio.h>
#include <stdlib.h>
#define max 50

int main()
{
	int num[max];
	int i, j, temp;
	for (i = 0; i < max; i++)
	{
		printf("enter a num: ");
		scanf("%d", &num[i]);
		if (num[i] < 0)
			exit(1);
	}
	for(i = 1; i < max; i++)
		for(j = 0; j < max-1; j++)
			if (num[j] < num[j+1])
			{
				temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
	for (i = 0; i < max; i++)
		printf("%d ", num[i]);
	return 0;
}	//exercise 8.4 q7

#include <stdio.h>
#define max 10
int main()
{
	int numarray[max];
	int i, min = 999, maxtemp, mintemp;
	for (i = 0; i < max; i++)
	{
		printf("enter a number: ");
		scanf("%d", &numarray[i]);
	}
	for (i = 0; i < max; i++)
	{
		if (max < numarray[i])
		{
			max = numarray[i];
			maxtemp = i;
		}
		else if (min > numarray[i])
		{
			min = numarray[i];
			mintemp = i;
		}
	}
	printf("max: %d and its location: %d\nmin: %d and its location: %d", max, maxtemp, min, mintemp);
	return 0;
}	//exercise 8.4 q8

#include <stdio.h>

int main()
{
	int intarray[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i;
	for (i = 9; i >= 0; i--)
		printf("%d ", intarray[i]);
}	//exercis 8.4 q9

#include <stdio.h>
#define max 15

int main()
{
	char text[max];
	int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0, cnt5 = 0, i;
	for (i = 0; i < max; i++)
	{
		printf("enter a vowel: ");
		scanf("%c", &text[i]);
		if (text[i] == 'a')
			cnt1++;
		else if (text[i] == 'e')
			cnt2++;
		else if (text[i] == 'i')
			cnt3++;
		else if (text[i] == 'o')
			cnt4++;
		else if (text[i] == 'u')
			cnt5++;
	}
	printf("\na |");
	for (i = 0; i < cnt1; i++)
		printf("*");
	printf("\ne |");
	for (i = 0; i < cnt2; i++)
		printf("*");
	printf("\ni |");
	for (i = 0; i < cnt3; i++)
		printf("*");
	printf("\no |");
	for (i = 0; i < cnt4; i++)
		printf("*");
	printf("\nu |");
	for (i = 0; i < cnt5; i++)
		printf("*");
	printf("\n  +----|----|----|\n");
	printf("  0    5    10   15");
}	//exercise 8.4 q10

#include <stdio.h>

void split(int[]);
int main()
{
	int numarray[20] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, -10, -9, -8, -7, -6, -5, -4, -3, -2, -1, };
	split(numarray);
	return 0;
}
void split(int n[20])
{
	int pos[20], neg[20], i;
	for (i = 0; i < 20; i++)
	{
		if (n[i] >= 0)
			pos[i] = n[i];
		else
			neg[i] = n[i];
	}
	printf("positive:");
	for (i = 0; i < 20; i++)
		printf("%d ", pos[i]);
	printf("\nnegative:");
	for (i = 0; i < 20; i++)
		printf("%d ", neg[i]);
}	//exercise 8.4 q11

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define total 1000
int main()
{
	int numarray[total];
	srand(time(NULL));
	for (int i = 0; i < total; i++)
	{
		numarray[i] = rand();
		numarray[i] = 1 + rand() % 100;
	}
	printf("50down:\n");
	for (int i = 0; i < total; i++)
	{
		if (numarray[i] <= 50)
			printf("%d ", numarray[i]);
	}
	printf("\n50up:\n");
	for (int i = 0; i < total; i++)
	{
		if (numarray[i] > 50)
			printf("%d ", numarray[i]);
	}
	return 0;
}	//exercise 8.4 q12

#include <stdio.h>

int main()
{
	double num[10], total = 0.0, avg, dev, var = 0;
	int i, cnt = 0;
	for (i = 0; i < 10; i++)
	{
		printf("enter a number: ");
		scanf("%lf", &num[i]);
		total += num[i];
	}
	avg = total / 10;
	printf("before\naverage: %f\n", avg);
	for (i = 0; i < 10; i++)
		dev = num[i] - avg;
	for (i = 0; i < 10; i++)
		var += ((num[i] - avg) * (num[i] - avg));
	var = var / 10;
	printf("variance: %f\n\n", var);

	for (i = 0; i < 10; i++)
	{
		if (var - num[i] > 4)
		{
			cnt++;
			total -= num[i];
		}
	}
	avg = total / cnt;
	printf("after\naverage: %f\n", avg);
	return 0;
}	//exercise 8.4 q13

#include <stdio.h>
#define max 10
int main()
{
	int num[max];
	int i, total = 0, n;
	for (i = 0; i < max; i++)
	{
		printf("enter a num: ");
		scanf("%d", &num[i]);
	}
	printf("which paragraph you want to know the total?");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		if (n == 1)
			total = num[0];
		else
		{
			for (i = 0; i < n - 1; i++)
				total += num[i];
			total += num[i];
		}
	}
	printf("%d", total);
	return 0;
}	//exercise 8.4 q14

#include <stdio.h>
#define numrows 3
#define numcols 4
int main()
{
	int val[numrows][numcols] = { 8,16,9,52,3,15,27,6,14,25,2,10 };
	int i, j;
	printf("display of val array by explicit element\n");
	printf("%d %d %d %d\n", val[0][0], val[0][1], val[0][2], val[0][3]);
	printf("%d %d %d %d\n", val[1][0], val[1][1], val[1][2], val[1][3]);
	printf("%d %d %d %d\n", val[2][0], val[2][1], val[2][2], val[2][3]);
	printf("display of val array using a nested for loop");
	for (i = 0; i < numrows; i++)
	{
		printf("\n");
		for (j = 0; j < numcols; j++)
			printf("%d ", val[i][j]);
	}
	return 0;
}	//program 8.7

#include <stdio.h>
#define numrows 3
#define numcols 4

int main()
{
	int val[numrows][numcols] = { 8,16,9,52,3,15,27,6,14,25,2,10 };
	int i, j;
	printf("display of multiplied elements");
	for (i = 0; i < numrows; i++)
	{
		printf("\n");
		for (j = 0; j < numcols; j++)
		{
			val[i][j] = val[i][j] * 10;
			printf("%d ", val[i][j]);
		}
	}
	printf("\n");
	return 0;
}	//program 8.8

#include <stdio.h>
#define rows 3
#define cols 4

void display(int[rows][cols]);
int main()
{
	int val[rows][cols] = { 8,16,9,52,3,15,27,6,14,25,2,10 };
	display(val);

	return 0;
}
void display(int nums[rows][cols])
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		printf("\n");
		for (j = 0; j < cols; j++)
			printf("%d ", nums[i][j]);
	}
}   //program 8.9

#include <stdio.h>
#define numels 20
int main()
{
	int numbers[numels];
	printf("the starting address of the numbers array is %d\n", &numbers[0]);
	printf("the storage size of each array element is: %d\n",sizeof(int));
	printf("the address of element numbers[5] is: %d\n",&numbers[5]);
	printf("the starting address of the array,\nusing the notation numbers, is:%d ",numbers);
	return 0;
}	//program 8.10

#include <stdio.h>
#define rows 3
#define cols 4
int main()
{
	int num[rows][cols];
	int i, j, n;
	for (i = 0; i < rows; i++)
		for (j = 0; j < cols; j++)
		{
			printf("enter a number: ");
			scanf("%d", &num[i][j]);
		}
	printf("enter the number you want to multiple: ");
	scanf("%d", &n);
	printf("\nresult:");
	for (i = 0; i < rows; i++)
	{
		printf("\n");
		for (j = 0; j < cols; j++)
		{
			num[i][j] = num[i][j] * n;
			printf("%d ", num[i][j]);
		}
	}
	return 0;
}	//exercise 8.5 q1

#include <stdio.h>
#define rows 4
#define cols 5
int main()
{
	float val[rows][cols];
	int i, j;
	float total = 0.0;
	for (i = 0; i < rows; i++)
		for (j = 0; j < cols; j++)
		{
			printf("enter a number: ");
			scanf("%f", &val[i][j]);
			total = total + val[i][j];
		}
	printf("%.2f", total);
	return 0;
}   //exercise 8.5 q2

#include <stdio.h>
#define rows 2
#define cols 3
int main()
{
	int first[rows][cols] = { 16,18,23,54,91,11 };
	int second[rows][cols] = { 24,52,77,16,19,59 };
	int element[rows][cols];
	int i, j;
	printf("result:");
	for (i = 0; i < rows; i++)
	{
		printf("\n");
		for (j = 0; j < cols; j++)
		{
			element[i][j] = first[i][j] + second[i][j];
			printf("%d ", element[i][j]);
		}
	}
	return 0;
}	//exercise 8.5 q3

#include <stdio.h>
#define rows 10
#define cols 20

void display(int[rows][cols]);
int main()
{
	int val[rows][cols];
	display(val);
	return 0;
}
void display(int v[rows][cols])
{
	int i, j, max = 0, loc1,loc2;
	for (i = 0; i < rows; i++)
		for (j = 0; j < cols; j++)
		{
			printf("enter a number: ");
			scanf("%d", &v[i][j]);
		}
	for (i = 0; i < rows; i++)
		for (j = 0; j < cols; j++)
		{
			if (max < v[i][j])
			{
				max = v[i][j];
				loc1 = i;
				loc2 = j;
			}
		}
	printf("the maximum number :%d\nlocation: %d %d", max,loc1,loc2);
}	//exercise 8.5 q4

#include <stdio.h>
#define rows 2
#define cols 3
void swap(int[rows][cols], int *, int *);
int main()
{
	int fnum, snum, i, j;
	int val[rows][cols];
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			printf("enter a num: ");
			scanf("%d", &val[i][j]);
		}
	}
	for(i = 0; i < rows; i++)
		for (j = 0; j < cols; j++)
		{
			fnum = val[0][j];
			snum = val[0][j+1];
		}
	swap(val, &fnum, &snum);
	for (i = 0; i < rows; i++)
	{
		printf("\n");
		for (j = 0; j < cols; j++)
		{
			printf("%d ", val[i][j]);
		}
	}
	return 0;
}
void swap(int v[rows][cols],int *fnumaddr,int *secnumaddr)
{
	int temp, i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			if (*fnumaddr > *secnumaddr)
			{
				temp = *fnumaddr;
				*fnumaddr = *secnumaddr;
				*secnumaddr = temp;
			}
		}
	}
}	//exercise 8.5 q5

#include <stdio.h>
#define rows 35
#define cols 4

int main()
{
	int grade, i, j, cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0, cnt5 = 0;
	int cnt6 = 0, cnt7 = 0, cnt8 = 0, cnt9 = 0, cnt10 = 0, cnt11 = 0, cnt12 = 0, cnt13 = 0, cnt14 = 0, cnt15 = 0;
	int cnt16 = 0, cnt17 = 0, cnt18 = 0, cnt19 = 0, cnt20 = 0;
	int val[rows][cols];
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			printf("enter a grade(between 1 ~ 4: ");
			scanf("%d", &grade);
			printf("enter a score: ");
			scanf("%d", &val[i][j]);
			printf("\n");
		}
	}
	if (grade == 1)
	{
		for (i = 0; i < rows; i++)
		{
			for (j = 0; j < cols; j++)
			{
				if (val[i][j] < 60)
					cnt1++;
				else if (val[i][j] >= 60 && val[i][j] < 70)
					cnt2++;
				else if (val[i][j] >= 70 && val[i][j] < 80)
					cnt3++;
				else if (val[i][j] >= 80 && val[i][j] < 90)
					cnt4++;
				else if (val[i][j] >= 90 && val[i][j] <= 100)
					cnt5++;
			}
		}
	}
	else if (grade == 2)
	{
		for (i = 0; i < rows; i++)
		{
			for (j = 0; j < cols; j++)
			{
				if (val[i][j] < 60)
					cnt6++;
				else if (val[i][j] >= 60 && val[i][j] < 70)
					cnt7++;
				else if (val[i][j] >= 70 && val[i][j] < 80)
					cnt8++;
				else if (val[i][j] >= 80 && val[i][j] < 90)
					cnt9++;
				else if (val[i][j] >= 90 && val[i][j] <= 100)
					cnt10++;
			}
		}
	}
	else if (grade == 3)
	{
		for (i = 0; i < rows; i++)
		{
			for (j = 0; j < cols; j++)
			{
				if (val[i][j] < 60)
					cnt11++;
				else if (val[i][j] >= 60 && val[i][j] < 70)
					cnt12++;
				else if (val[i][j] >= 70 && val[i][j] < 80)
					cnt13++;
				else if (val[i][j] >= 80 && val[i][j] < 90)
					cnt14++;
				else if (val[i][j] >= 90 && val[i][j] <= 100)
					cnt15++;
			}
		}
	}
	else if (grade == 4)
	{
		for (i = 0; i < rows; i++)
		{
			for (j = 0; j < cols; j++)
			{
				if (val[i][j] < 60)
					cnt16++;
				else if (val[i][j] >= 60 && val[i][j] < 70)
					cnt17++;
				else if (val[i][j] >= 70 && val[i][j] < 80)
					cnt18++;
				else if (val[i][j] >= 80 && val[i][j] < 90)
					cnt19++;
				else if (val[i][j] >= 90 && val[i][j] <= 100)
					cnt20++;
			}
		}
	}
	else
		printf("error");
	printf("\ngrade 1\n");
	printf("under 60: %d\n", cnt1);
	printf("between 60 to 69: %d\n", cnt2);
	printf("between 70 to 79: %d\n", cnt3);
	printf("between 80 to 89: %d\n", cnt4);
	printf("between 90 to 100: %d\n\n", cnt5);

	printf("grade 2\n");
	printf("under 60: %d\n", cnt6);
	printf("between 60 to 69: %d\n", cnt7);
	printf("between 70 to 79: %d\n", cnt8);
	printf("between 80 to 89: %d\n", cnt9);
	printf("between 90 to 100: %d\n\n", cnt10);

	printf("grade 3\n");
	printf("under 60: %d\n", cnt11);
	printf("between 60 to 69: %d\n", cnt12);
	printf("between 70 to 79: %d\n", cnt13);
	printf("between 80 to 89: %d\n", cnt14);
	printf("between 90 to 100: %d\n\n", cnt15);

	printf("grade 4\n");
	printf("under 60: %d\n", cnt16);
	printf("between 60 to 69: %d\n", cnt17);
	printf("between 70 to 79: %d\n", cnt18);
	printf("between 80 to 89: %d\n", cnt19);
	printf("between 90 to 100: %d\n", cnt20);
	return 0;
}	//exercise 8.5 q6

#include <stdio.h>
#define rows 10
#define cols 20
int main()
{
	int val[rows][cols];
	int i, j, max = 0, loc1, loc2;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			printf("enter a num: ");
			scanf("%d", &val[i][j]);
		}
	}
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			if (max < val[i][j])
			{
				max = val[i][j];
				loc1 = i;
				loc2 = j;
			}
		}
	}
	printf("maximum num: %d\nlocation: %d %d", max, loc1, loc2);
	return 0;
}	//exercise 8.5 q7

#include <stdio.h>
#define true 1
#define false 0
#define max 10
int linearsearch(int[], int, int);
int main()
{
	int val[max] = { 5,10,22,32,45,67,73,98,99,101 };
	int num, location;
	printf("enter the item you are searching for: ");
	scanf("%d", &num);
	location = linearsearch(val, max, num);
	if (location > -1)
		printf("the item was found at index location %d", location);
	else
		printf("the item was not found in the list");
	return 0;
}
int linearsearch(int v[], int item, int n)
{
	int found = false, index = -1, i = 0;
	while (i < item && !found) //!found == found가 false일 떄까지
	{
		if (v[i] == n)
		{
			found = true;
			index = i;
		}
		i++;
	}
	return index;
}	//program 8.11

#include <stdio.h>
#define false 0
#define true 1
#define max 10
int binarysearch(int[], int, int);
int main()
{
	int val[max] = { 5,10,22,32,45,67,73,98,99,101 };
	int num, location;
	printf("enter the item you are searching for: ");
	scanf("%d", &num);
	location = binarysearch(val, max, num);
	if (location > -1)
		printf("the item was found at index location %d", location);
	else
		printf("the item was not found in the list");
	return 0;
}
int binarysearch(int v[], int item, int n)
{
	int index = -1, found = false, low = 0, mid, high = item - 1;
	while (low <= high && !found)
	{
		mid = (low + high) / 2;
		if (n == v[mid])
		{
			found = true;
			index = mid;
		}
		else if (n > v[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}
	return index;
}	//program 8.12

#include <stdio.h>
#define max 10
int selectionsort(int[], int);
int main()
{
	int i, res;
	int val[max] = { 22,5,67,98,45,32,101,99,73,10 };
	res = selectionsort(val, max);
	printf("the sorted list, in ascending order, is\n");
	for (i = 0; i < max; i++)
		printf("%d ", val[i]);
	printf("\n%d moves were made to sort this list", res);
	return 0;
}
int selectionsort(int v[], int maxel)
{
	int moves = 0, i, j, min, minidx, temp;
	for (i = 0; i < maxel - 1; i++)
	{
		min = v[i];		//최소값을 모르는 상태이므로 배열 첫번째 수를 최소값 지정
		minidx = i;		//최소값의 위치를 배열의 첫번째 위치인 i = 0으로 설정
		for (j = i + 1; j < maxel; j++)
		{
			if (v[j] < min)		//만약 배열의 j번째 숫자가 min 즉, 배열의 첫번째 숫자보다 작으면
			{
				min = v[j];		//최소값을 배열의 j번째 숫자로 변경
				minidx = j;		//최솟값의 위치를 j번째로 변경
			}
		}
		if (min < v[i])		//만약 최솟값(배열의 j번째 숫자가) 배열의 첫번째 값보다 작으면
		{
			temp = v[i];		//첫번쨰 숫자를 temp로 치환(v[i]는 빈공간)
			v[i] = min;			//최솟값(배열의 j번쨰 숫자)를 배열의 첫번째 자리로 변경(min은 빈공간)
			v[minidx] = temp;	//temp에 있는 값이 minidx = j 즉, 배열의 j번째 숫자로 치환 v[minidx] == v[j]
			moves++;
		}
	}
	return moves;
}	//program 8.13

#include <stdio.h>
#define max 10
int bubblesort(int[], int);
int main()
{
	int nums[max] = { 22,5,67,98,45,32,101,99,73,10 };
	int i, res;
	res = bubblesort(nums, max);
	printf("the sorted list, in ascending order is: \n");
	for (i = 0; i < max; i++)
		printf("%d ", nums[i]);
	printf("\n%d moves were made to sort this list", res);
	return 0;
}
int bubblesort(int n[], int maxel)
{
	int moves = 0, i, j, temp;
	for (i = 0; i < maxel - 1; i++)		//첫번째 수부터 배열 마지막 이전 수 까지 반복
	{
		for (j = 1; j < maxel; j++)		//두번째 수부터 배열 마지막 수 까지 반복
		{
			if (n[j] < n[j - 1])		//만약 j번째 수가 j의 바로 앞의 수보다 작으면
			{
				temp = n[j];			//j번째 수를 temp에 치환하고
				n[j] = n[j - 1];		//j번째 바로 앞의 수를 j번째에 치환하여
				n[j - 1] = temp;		//j번째에 있는 수와 j바로 앞의 수의 자리를 서로 바꾼다
				moves++;				//바꾼횟수 카운트
			}
		}
	}
	return moves;
}	//program 8.14

#include <stdio.h>
#define max 7

int main()
{
	int i;
	int num[max] = { 98,32,45,99,101,73,67 };
	void quicksort(int[], int, int);
	quicksort(num, 0, max - 1);
	printf("the list is now in the order: \n");
	for (i = 0; i < max; i++)
		printf("%d ", num[i]);
	return 0;
}
void quicksort(int n[], int left, int right)
{
	int pivot;
	int partition(int[], int, int);
	pivot = partition(n, left, right);
	if (left < pivot)
		quicksort(n, left, pivot - 1);
	if (right > pivot)
		quicksort(n, pivot + 1, right);
}
int partition(int n[], int leftindex,int rightindex)
{
	int pivot;
	pivot = n[leftindex];

	while (leftindex < rightindex)
	{
		while (n[rightindex] >= pivot && leftindex < rightindex)
			rightindex--;
		if (rightindex != leftindex)
		{
			n[leftindex] = n[rightindex];
			leftindex++;
		}
		while (n[leftindex] <= pivot && leftindex < rightindex)
			leftindex++;
		if (rightindex != leftindex)
		{
			n[rightindex] = n[leftindex];
			rightindex--;
		}
	}
	n[leftindex] = pivot;
	return leftindex;
}	//program 8.15, 8.16

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define max 100
int selectionsort(int[], int);
int main()
{
	int i, res;
	int val[max];
	srand(time(NULL));
	printf("before: \n");
	for (i = 0; i < max; i++)
	{
		val[i] = rand();
		printf("%d ",val[i]);
	}
	res = selectionsort(val, max);
	printf("\n\nthe sorted list, in ascending order, is\n");
	for (i = 0; i < max; i++)
		printf("%d ", val[i]);
	printf("\n%d moves were made to sort this list", res);
	return 0;
}
int selectionsort(int v[], int maxel)
{
	int moves = 0, i, j, min, minidx, temp;
	for (i = 0; i < maxel - 1; i++)
	{
		min = v[i];		//최소값을 모르는 상태이므로 배열 첫번째 수를 최소값 지정
		minidx = i;		//최소값의 위치를 배열의 첫번째 위치인 i = 0으로 설정
		for (j = i + 1; j < maxel; j++)
		{
			if (v[j] < min)		//만약 배열의 j번째 숫자가 min 즉, 배열의 첫번째 숫자보다 작으면
			{
				min = v[j];		//최소값을 배열의 j번째 숫자로 변경
				minidx = j;		//최솟값의 위치를 j번째로 변경
			}
		}
		if (min < v[i])		//만약 최솟값(배열의 j번째 숫자가) 배열의 첫번째 값보다 작으면
		{
			temp = v[i];		//첫번쨰 숫자를 temp로 치환(v[i]는 빈공간)
			v[i] = min;			//최솟값(배열의 j번쨰 숫자)를 배열의 첫번째 자리로 변경(min은 빈공간)
			v[minidx] = temp;	//temp에 있는 값이 minidx = j 즉, 배열의 j번째 숫자로 치환 v[minidx] == v[j]
			moves++;
		}
	}
	return moves;
}	//exercise 8.8 q1

#include <stdio.h>
#define max 10
int selectionsort(int[], int);
int main()
{
	int i, res;
	int val[max] = { 22,5,67,98,45,32,101,99,73,10 };
	res = selectionsort(val, max);
	printf("the sorted list, in ascending order, is\n");
	for (i = 0; i < max; i++)
		printf("%d ", val[i]);
	printf("\n%d moves were made to sort this list", res);
	return 0;
}
int selectionsort(int v[], int maxel)
{
	int moves = 0, i, j, max, maxidx, temp;
	for (i = 0; i < maxel - 1; i++)
	{
		max = v[maxel - 1];		//최대값을 모르는 상태이므로 배열 마지막 수를 최대값 지정
		maxidx = maxel - 1;		//최대값의 위치를 배열의 마지막 위치로 설정
		for (j = i + 1; j < maxel; j++)
		{
			if (v[j] > max)		//만약 배열의 j번째 숫자가 max 즉, 배열의 마지막 숫자보다 크면
			{
				max = v[j];		//최대값을 배열의 j번째 숫자로 변경
				maxidx = j;		//최대값의 위치를 j번째로 변경
			}
		}
		if (max > v[i])		//만약 최대값(배열의 j번째 숫자가) 배열의 첫번째 값보다 작으면
		{
			temp = v[i];		//첫번쨰 숫자를 temp로 치환(v[i]는 빈공간)
			v[i] = max;			//최대값(배열의 j번쨰 숫자)를 배열의 첫번째 자리로 변경(max는 빈공간)
			v[maxidx] = temp;	//temp에 있는 값이 maxidx = j 즉, 배열의 j번째 숫자로 치환 v[maxidx] == v[j]
			moves++;
		}
	}
	return moves;
}	//exercise 8.8 q2.1

#include <stdio.h>
#define max 10
int bubblesort(int[], int);
int main()
{
	int nums[max] = { 22,5,67,98,45,32,101,99,73,10 };
	int i, res;
	res = bubblesort(nums, max);
	printf("the sorted list, in ascending order is: \n");
	for (i = 0; i < max; i++)
		printf("%d ", nums[i]);
	printf("\n%d moves were made to sort this list", res);
	return 0;
}
int bubblesort(int n[], int maxel)
{
	int moves = 0, i, j, temp;
	for (i = maxel - 1; i > 0; i--)		//마지막 수부터 배열 첫번째 까지 반복
	{
		for (j = 0; j < i; j++)			//첫번째 수부터 배열 i번쨰 수 까지 반복
		{
			if (n[j] < n[j + 1])		//만약 j번째 수가 j의 바로 뒤의 수보다 작으면
			{
				temp = n[j];			//j번째 수를 temp에 치환하고
				n[j] = n[j + 1];		//j번째 바로 앞의 수를 j번째에 치환하여
				n[j + 1] = temp;		//j번째에 있는 수와 j바로 앞의 수의 자리를 서로 바꾼다
				moves++;				//바꾼횟수 카운트
			}
		}
	}
	return moves;
}	//exercise 8.8 q2.2

#include <stdio.h>
#define max 7

int main()
{
	int i;
	int num[max] = { 98,32,45,99,101,73,67 };
	void quicksort(int[], int, int);
	quicksort(num, 0, max - 1);
	printf("the list is now in the order: \n");
	for (i = 0; i < max; i++)
		printf("%d ", num[i]);
	return 0;
}
void quicksort(int n[], int left, int right)
{
	int pivot;
	int partition(int[], int, int);
	pivot = partition(n, left, right);
	if (left < pivot)
		quicksort(n, left, pivot - 1);
	if (right > pivot)
		quicksort(n, pivot + 1, right);
}
int partition(int n[], int leftindex, int rightindex)
{
	int pivot;
	pivot = n[leftindex];

	while (leftindex < rightindex)
	{
		while (n[rightindex] >= pivot && leftindex < rightindex)
			rightindex--;
		if (rightindex != leftindex)
		{
			n[leftindex] = n[rightindex];
			leftindex++;
		}
		while (n[leftindex] <= pivot && leftindex < rightindex)
			leftindex++;
		if (rightindex != leftindex)
		{
			n[rightindex] = n[leftindex];
			rightindex--;
		}
	}
	n[leftindex] = pivot;
	return leftindex;
}	//exercise 8.8 q2.3

#include <stdio.h>
#define max 5
void selectionsort(int[], int);
int main()
{
	int num[max] = { 7,4,13,2,39 };
	int i;
	selectionsort(num, max);
	for (i = 0; i < max; i++)
		printf("%d ", num[i]);
	return 0;
}
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void selectionsort(int n[], int numel)
{
	int i, j, min, minidx;
	for (i = 0; i < numel - 1; i++)
	{
		min = n[i];
		minidx = i;
		for (j = i + 1; j < numel; j++)
		{
			if (n[j] < min)
			{
				min = n[j];
				minidx = j;
			}
		}
		if (min < n[i])
			swap(&n[minidx], &n[i]);
	}
}	//exercise 8.8 q3.a

#include <stdio.h>
#define max 5
void bubblesort(int[], int);
int main()
{
	int num[max] = { 7,4,13,2,39 };
	int i;
	bubblesort(num, max);
	for (i = 0; i < max; i++)
		printf("%d ", num[i]);
	return 0;
}
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void bubblesort(int n[], int numel)
{
	int i, j;
	for (i = 0; i < numel - 1; i++)
	{
		for (j = 1; j < numel; j++)
		{
			if (n[j] < n[j - 1])
				swap(&n[j], &n[j - 1]);
		}
	}
}	//exercise 8.8 q3.b

#include <stdio.h>
#define true 1
#define false 0
int newbubble(int[]);
int main()
{
	int nums[10] = { 22, 5, 67, 98, 45, 32, 101, 99, 73, 10 };
	int i, moves;
	moves = newbubble(nums);
	printf("the sorted list, in ascending order is:\n");
	for (i = 0; i < 10; i++)
		printf("%d ", nums[i]);
	printf("\n %d moves where made to sort this list\n", moves);
}
int newbubble(int n[])
{
	int i, temp, moves, npts, outord;
	moves = 0;
	npts = 10;
	outord = true;
	while (outord && npts > 0)
	{
		outord = false;
		for (i = 0; i < npts - 1; i++)
			if (n[i] > n[i + 1])
			{
				temp = n[i + 1];
				n[i + 1] = n[i];
				n[i] = temp;
				outord = true;
				moves++;
			}
		npts--;
	}
	return moves;
}	//exercise 8.8 q4

#include <stdio.h>
#define max 20

int main()
{
	int i;
	int num[max] = { 98,32,45,99,101,73,67,230,13,66,93,51,173,123,180,120,11,40,7,33 };
	void quicksort(int[], int, int);
	quicksort(num, 0, max - 1);
	printf("the list is now in the order: \n");
	for (i = 0; i < max; i++)
		printf("%d ", num[i]);
	return 0;
}
void quicksort(int n[], int left, int right)
{
	int pivot;
	int partition(int[], int, int);
	pivot = partition(n, left, right);
	if (left < pivot)
		quicksort(n, left, pivot - 1);
	if (right > pivot)
		quicksort(n, pivot + 1, right);
}
int partition(int n[], int leftindex, int rightindex)
{
	int pivot;
	pivot = n[leftindex];

	while (leftindex < rightindex)
	{
		while (n[rightindex] >= pivot && leftindex < rightindex)
			rightindex--;
		if (rightindex != leftindex)
		{
			n[leftindex] = n[rightindex];
			leftindex++;
		}
		while (n[leftindex] <= pivot && leftindex < rightindex)
			leftindex++;
		if (rightindex != leftindex)
		{
			n[rightindex] = n[leftindex];
			rightindex--;
		}
	}
	n[leftindex] = pivot;
	return leftindex;
}	//exercise 8.8 q5.a

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define max 100

int main()
{
	int i;
	int num[max];
	srand(time(NULL));
	for (i = 0; i < max; i++)
		num[i] = rand();
	void quicksort(int[], int, int);
	quicksort(num, 0, max - 1);
	printf("the list is now in the order: \n");
	for (i = 0; i < max; i++)
		printf("%d ", num[i]);
	return 0;
}
void quicksort(int n[], int left, int right)
{
	int pivot;
	int partition(int[], int, int);
	pivot = partition(n, left, right);
	if (left < pivot)
		quicksort(n, left, pivot - 1);
	if (right > pivot)
		quicksort(n, pivot + 1, right);
}
int partition(int n[], int leftindex, int rightindex)
{
	int pivot;
	pivot = n[leftindex];

	while (leftindex < rightindex)
	{
		while (n[rightindex] >= pivot && leftindex < rightindex)
			rightindex--;
		if (rightindex != leftindex)
		{
			n[leftindex] = n[rightindex];
			leftindex++;
		}
		while (n[leftindex] <= pivot && leftindex < rightindex)
			leftindex++;
		if (rightindex != leftindex)
		{
			n[rightindex] = n[leftindex];
			rightindex--;
		}
	}
	n[leftindex] = pivot;
	return leftindex;
}	//exercise 8.8 q5.b

#include <stdio.h>
#define max 10
void bubblesort(int[], int[], int);
void swap(int *, int * );
int main()
{
	int list1[max] = { 1, 2, 3, 5, 4, 6, 7, 8, 9, 10 };
	int list2[max] = { 1, 2, 3, 45, 6, 7, 13, 89, 92, 100 };
	int i, res;
	bubblesort(list1, list2, max);
	for (i = 0; i < max; i++)
	{
		if (list1[i] == list2[i])
		{
			printf("%d ", list1[i]);
		}
	}
}
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void bubblesort(int v1[], int v2[], int numel)
{
	int i, j;
	for (i = 0; i < numel - 1; i++)
	{
		for (j = 1; j < numel; j++)
		{
			if (v1[j] < v1[j - 1])
				swap(&v1[j], &v1[j - 1]);
		}
	}
	for (i = 0; i < numel - 1; i++)
	{
		for (j = 1; j < numel; j++)
		{
			if (v2[j] < v2[j - 1])
				swap(&v2[j], &v2[j - 1]);
		}
	}
}	//exercise 8.8 q6

#include <stdio.h>
#define max 10

int main()
{
	int list[max] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i;
	for (i = 0; i < max; i++)
		printf("%d ", list[i]);
}	//exercise 8.8 q7

#include <stdio.h>
#define max 10
int binarysearch(int[], int, int, int);
int main()
{
	int num[max] = { 5,10,22,32,45,67,73,98,99,101 };
	int item, location;
	printf("enter the item you are searching for: ");
	scanf("%d", &item);
	location = binarysearch(num, 0, max, item);

	if (location > -1)
		printf("the item was found at index location %d", location);
	else
		printf("the item was not found in the list");
	return 0;
}
int binarysearch(int n[], int left,int right, int key)
{
	int idx = -1, mid;
	if (left > right)
		return -1;
	else
	{
		mid = (left + right) / 2;
		if (key == n[mid])
			return mid;
		else if (key > n[mid])
			return binarysearch(n, mid + 1, right, key);
		else
			return binarysearch(n, left, mid - 1, key);
	}
}	//exercise 8.8 q8