//program 7.1
#include <stdio.h>

int firstnum;
void valfun();
int  main()
{
	int secnum;
	firstnum = 10;
	secnum = 20;
	printf("from main(): firstnum = %d\n", firstnum);
	printf("from main(): secnum = %d\n\n", secnum);
	valfun();
	printf("from main() again: firstnum = %d\n", firstnum);
	printf("from main() again: secnum = %d\n", secnum);
}
void valfun()
{
	int secnum = 30;
	printf("from valfun(): firstnum = %d\n", firstnum);
	printf("from valfun(): secnum = %d\n\n", secnum);
	firstnum = 40;
}

//exercises 7.1 q4
int firstnum = 10;
#include <stdio.h>

int main()
{
	int firstnum = 20;
	void display();
	printf("the value of firstnum is %d", firstnum);
	display();
	return 0;
}
void display()
{
	printf("\nthe value of firstnum is now %d", firstnum);
}

//program 7.2
#include <stdio.h>

void testauto();
int main()
{
	int i;
	for (i = 0; i < 3; i++)
		testauto();
	return 0;
}
void testauto()
{
	int num = 0;	//자동변수 num생성, 0으로 초기화하고 이 값은 변하지 않음 단, auto int num = 0이라고 코딩하면 오류가 남
	printf("the value of the automatic variable num is %d\n", num);
}

//program 7.3
#include <stdio.h>

void teststat();
int main()
{
	int i;
	for (i = 0; i < 3; i++)
		teststat();
	return 0;
}
void teststat()
{
	static int num = 0;	//정적변수 num을 생성해 0으로 초기화한다. 정적변수는 for문을 돌아도 0으로 초기화되지 않고 num++값을 가져감
	printf("the value of the static variable num is now %d\n", num);
	num++;
}

//exercise 7.2 q3
#include <stdio.h>

int main()
{
	int init1();
	void init2();
	init1();
	init2();
	return 0;
}
int init1()
{
	static int yrs = 1;
	printf("\nthe value of yrs is %d", yrs);
	yrs += 2;
	return 0;
}
void init2()
{
	static int yrs;
	yrs = 1;
	printf("\nthe value of yrs is %d", yrs);
	yrs += 2;
	return;
}

//program 7.4
#include <stdio.h>

int main()
{
	int num = 22;
	printf("num = %d\n", num);
	printf("the address of num is %u", &num);
	return 0;
}

//program 7.5
#include <stdio.h>

int main()
{
	int mile = 22, *milesaddr;
	milesaddr = &mile;
	printf("the address stored in milesaddr is %u\n", milesaddr);
	printf("the value pointed to by milesaddr is %d\n\n", *milesaddr);
	*milesaddr = 158;
	printf("the value in miles is now %d", mile);
	return 0;
}

//program 7.6
#include <stdio.h>

int main()
{
	void newval(float *);
	float testval;
	printf("enter a number: ");
	scanf("%f", &testval);
	printf("the address that will be passed is %u\n\n", &testval);
	newval(&testval);
	return 0;
}
void newval(float *xnum)
{
	printf("the address received is %u\n", xnum);
	printf("the value pointed to by xnum is: %.2f", *xnum);
}

//program 7.7
#include <stdio.h>

int main()
{
	void newval(float *);
	float testval;
	printf("enter a number: ");
	scanf("%f", &testval);
	printf("from main(): the value in testval is: %.2f\n", testval);
	newval(&testval);
	printf("from main(): the value in testval has been changed to: %.2f\n", testval);
	return 0;
}
void newval(float *xnum)
{
	printf("from newval(): the value pointed to by xnum is: %.2f\n", *xnum);
	*xnum += 20.2;
}

//program 7.8
#include <stdio.h>

int main()
{
	void calc(float, float, float, float*, float*);
	float a, b, c, sum, product;
	printf("enter three numbers: ");
	scanf("%f%f%f", &a, &b, &c);
	calc(a, b, c, &sum, &product);
	printf("the sum of the entered numbers is: %.2f", sum);
	printf("\nthe product of the entered numbers is: %.2f", product);
	return 0;
}
void calc(float a, float b, float c, float *sumaddr, float *productaddr)
{
	*sumaddr = a + b + c;
	*productaddr = a * b * c;
}

//chapter 7 programming exercise 1
#include <stdio.h>

int main()
{
	char key, choice;
	int num, count;
	long date;
	float yield;
	double price;
	printf("%u %u %u %u %u %u %u\n", &key, &choice, &num, &count, &date, &yield, &price);
	printf("key size: %d\n", sizeof(key));
	printf("choice size: %d\n", sizeof(choice));
	printf("num size: %d\n", sizeof(num));
	printf("count size: %d\n", sizeof(count));
	printf("date size: %d\n", sizeof(date));
	printf("yield size: %d\n", sizeof(yield));
	printf("price size: %d\n", sizeof(price));
}

//chapter 7 programming exercise 2
#include <stdio.h>

int main()
{
	void change(int *, int *, int *, int *);
	float quarters, dimes, nickels, pennies;
	change(&quarters, &dimes, &nickels, &pennies);
}
void change(int *q, int *d, int *n, int *p)
{

}

//chapter 7 programming exercise 3
#include <stdio.h>

int secs(int, int, int, int *);
int main()
{
	int hr, mn, sec, totsec;
	printf("enter hours, minutes and secs: ");
	scanf("%d%d%d", &hr, &mn, &sec);
	totsec = secs(hr, mn, sec, &totsec);	//중요: totsec변수를 생성한후 포인터를 이용해 주소를 secs함수로 보내서 main함수에서 호출, secs함수내 *tot이 main함수의 totsec와 연결됨
	printf("%d seconds", totsec);
	return 0;
}
int secs(int hour, int minute, int second, int *tot)
{
	hour = hour * 3600;
	minute = minute * 60;
	*tot = hour + minute + second;
	return *tot;
}

//chapter 7 programming exercise 4
#include <stdio.h>

int main()
{
	void time(int *);
	int second;
	printf("enter seconds: ");
	scanf("%d", &second);
	time(&second);
	return 0;
}
void time(int *sec)
{
	int hours, min;
	min = *sec / 60;
	hours = min / 60;
	*sec = *sec % 60;
	min = min % 60;
	printf("%d:%d:%d", hours, min, *sec);
}

//chapter 7 programming exercise 5
#include <stdio.h>

float a, b, c;
int main()
{
	void computesum(float*);
	void computeproduct(float*);
	float sum, product;
	printf("enter three numbers: ");
	scanf("%f%f%f", &a, &b, &c);
	computesum(&sum);
	computeproduct(&product);
	printf("the sum of the entered numbers is: %.2f", sum);
	printf("\nthe product of the entered numbers is: %.2f", product);
	return 0;
}
void computesum(float *sumaddr)
{
	*sumaddr = a + b + c;
}
void computeproduct(float *productaddr)
{
	*productaddr = a * b * c;
}

//chapter 7 programming exercise 6
#include <stdio.h>

int birth;
int main()
{
	void date(float);
	printf("enter your birthday: ");
	scanf("%d", &birth);
	date(birth);
	return 0;
}
void date(float birth)
{
	float yr, mn, day;
	int yr1, mn1, day1;
	yr= birth / 10000;
	yr1 = yr;
	printf("%d ", yr1);
	mn = (yr - yr1) * 100;
	mn1 = mn;
	printf("%d ", mn1);
	day = (mn - mn1) * 100;
	day1 = day;
	printf("%d", day1);
}

//chapter 7 programming exercise 7
#include <stdio.h>
#include <math.h>

int years, months;
float height, normht;
float age, perdif;
int main()
{
	float norms(float);
	float pcdif(float, float);
	void showit(float, float);
	void getdata();

	getdata();
	normht = norms(age);
	perdif = pcdif(height, normht);
	showit(normht, perdif);
	return 0;
}
void getdata()
{
	float age;
	printf("how old(in years) is this child? ");
	scanf("%d", &years);
	printf("how many months since the child's birthday? ");
	scanf("%d", &months);
	age = years + months / 12.0;
	printf("enter the child's height (in inches): ");
	scanf("%f", &height);
	printf("%f %f\n", age, height);
}
float norms(float age)
{
	printf("age = %f\n", age);
	return 52.5;
}
float pcdif(float actual, float normal)
{
	printf("actual = %f, normal = %f\n", actual, normal);
	return 2.5;
}
void showit(float normht, float perdif)
{
	printf("normht = %f, perdif = %f\n", normht, perdif);
}

//program 7.9
#include <stdio.h>

int main()
{
	void swap(float *, float*);
	float num1 = 20.0, num2 = 5.0;
	swap(&num1, &num2);
	return 0;
}
void swap(float *num1addr, float *num2addr)
{
	printf("the number pointed to by num1addr is %.2f\n", *num1addr);
	printf("the number pointed to by num2addr is %.2f", *num2addr);
}

//program 7.10
#include <stdio.h>

int main()
{
	void swap(float *, float *);
	float firstnum, secnum;
	printf("enter two numbers: ");
	scanf("%f%f", &firstnum, &secnum);
	printf("\nbefore the call to swap(): \n\n");
	printf("  the value in firstnum is %.2f\n", firstnum);
	printf("  the value in secnum is %.2f\n\n", secnum);
	swap(&firstnum, &secnum);
	printf("after the call to swap(): \n\n");
	printf("  the value in firstnum is %.2f\n", firstnum);
	printf("  the value in secnum is %.2f\n", secnum);
	return 0;
}
void swap(float *fnumaddr,float *snumaddr)
{
	float temp;
	temp = *fnumaddr;
	*fnumaddr = *snumaddr;
	*snumaddr = temp;
}

//exercise 7.4 q1
#include <stdio.h>

int main()
{
	void time(int*, int*, int*);
	int sec, min, hours;
	printf("enter sec,min,hours: ");
	scanf("%d%d%d", &sec, &min, &hours);
	time(&sec, &min, &hours);
	return 0;
}
void time(int *sadr, int *madr, int *hadr)
{
	if (*hadr < 10 && *madr < 10 && *sadr < 10)
		printf("0%d:0%d:0%d", *hadr, *madr, *sadr);
	else
		printf("%d:%d:%d", *hadr, *madr, *sadr);
}

//exercise 7.4 q2
#include <stdio.h>

void time(int*, int*);
int main()
{
	int min, hour;
	printf("enter two numbers: ");
	scanf("%d%d", &min, &hour);
	time(&min, &hour);
	return 0;
}
void time(int *min, int *hour)
{
	int sec;
	sec = ((*hour) * 60 + *min) * 60;
	printf("the total number of seconds is %d", sec);
}

//exercise 7.4 q3
#include <stdio.h>

int main()
{
	int *pt1, *pt2;
	int pnt1=1, pnt2=2;
	pt1 = &pnt1;
	pt2 = &pnt2;
	printf("%d", *pt1 **pt2);
}

//chapter 7 programming exercise 2
#include <stdio.h>

void liquid(int*, int*, int*, int*);
int main()
{
	int gallons, quarts, pints, cups;
	printf("enter gallons,quarts,pints and cups: ");
	scanf("%d%d%d%d", &gallons, &quarts, &pints, &cups);
	liquid(&gallons, &quarts, &pints, &cups);
	return 0;
}
void liquid(int *g, int *q, int *p, int *c)
{
	int totcup;
	*g = *g * 16;
	*q = *q * 4;
	*p = *p * 2;
	*c = *c * 1;
	totcup = (*g) + (*q) + (*p) + (*c);
	printf("%d cups", totcup);
}

//chapter 7 programming exercise 3
#include <stdio.h>

int main()
{
	void findmax(float*, float*, float*);	//void: 반환할 값 즉 return값이 없을 때 사용 int: 리턴값이 있어야 하는 변수형임 이떄 리턴값이 정수면 return 0 등으로 쓴다
	float fnum, snum, max;
	printf("enter a number: ");
	scanf("%f", &fnum);
	printf("enter a second number: ");
	scanf("%f", &snum);
	findmax(&fnum, &snum, &max);	//새로만든 findmax함수를 호출
	return 0;
}
void findmax(float *x, float *y, float *m)	//findmax라는 함수를 새로 만든것이고 이 함수의 동작은 {}안에 명령대로 작동한다
{
	if (*x >= *y)
		*m = *x;
	else
		*m = *y;
	printf("maxnum is %f", *m);
}

//program 7.11
#include <stdio.h>

int n;
int main()
{
	int factorial(int);
	int res;
	printf("enter a number: ");
	scanf("%d", &n);
	res = factorial(n);
	printf("the factorial of %d is %d", n, res);
	return 0;
}
int factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}

//exercise 7.5 q1
#include <stdio.h>

int main()
{
	void fibo(int);
	int n;
	printf("enter a number: ");
	scanf("%d", &n);
	fibo(n);
	return 0;
}
void fibo(int n)
{
	int result, a1 = 0, a2 = 1, a3, i;
	if (n == 1)
		result = a1;
	else if (n == 2)
		result = a2;
	else if (n > 2)
		for (i = 0; i <= n-3; i++)
		{
			a3 = a1 + a2;
			result = a3;
			a1 = a2;
			a2 = a3;
		}
	printf("%dth num is %d", n, result);
}

//exercise 7.5 q2
#include <stdio.h>

int main()
{
	void sum(int);
	int n;
	printf("enter a num: ");
	scanf("%d", &n);
	sum(n);
	return 0;
}

void sum(int n)
{
	int sum = 0, i = 1;
	while (i <= n)
	{
		sum += i;
		i++;
	}
	printf("the result is %d", sum);
}

//exercise 7.5 q3
#include <stdio.h>

int main()
{
	void solve(int, int, int);
	int a, d, n;
	printf("enter a firstnum and common difference: ");
	scanf("%d%d", &a, &d);
	printf("which paragraph are you want to get?: ");
	scanf("%d", &n);
	solve(a, d, n);
	return 0;
}
void solve(int a, int d, int n)
{
	int sum;
	sum = a + ((n-1) * d);
	if (n == 1)
		printf("%dst sum is %d", n, sum);
	else if (n == 2)
		printf("%dnd sum is %d", n, sum);
	else if (n == 3)
		printf("%drd sum is %d", n, sum);
	else
		printf("%dth sum is %d", n, sum);
}

//exercise 7.5 q4
#include <stdio.h>
#include <math.h>

int main()
{
	void solve(int, int, int);
	int a, r, n;
	printf("enter a firstnum and common rate: ");
	scanf("%d%d", &a, &r);
	printf("which paragraph are you want to get?: ");
	scanf("%d", &n);
	solve(a, r, n);
	return 0;
}

void solve(int a, int r, int n)
{
	int rate;
	rate = a * pow(r, n - 1);
	if (n == 1)
		printf("%dst num is %d", n, rate);
	else if (n == 2)
		printf("%dnd num is %d", n, rate);
	else if (n == 3)
		printf("%drd num is %d", n, rate);
	else
		printf("%dth num is %d", n, rate);
}

//exercise 7.5 q5
#include <stdio.h>
#include <math.h>

int main()
{
	void solve(int, int);
	int x, n;
	printf("enter a num: ");
	scanf("%d", &x);
	printf("which paragraph are you want to get?: ");
	scanf("%d", &n);
	solve(x, n);
	return 0;
}
void solve(int x, int n)
{
	int num;
	num = x * pow(x, n - 1);
	if (n == 1)
		printf("%dst num is %d", n, num);
	else if (n == 2)
		printf("%dnd num is %d", n, num);
	else if (n == 3)
		printf("%drd num is %d", n, num);
	else
		printf("%dth num is %d", n, num);
}

//exercise 7.5 q6
#include <stdio.h>

int main()
{
	int gcd(int, int);
	int n1, n2, res;
	printf("enter two nums: ");
	scanf("%d%d", &n1, &n2);
	res = gcd(n1, n2);
	printf("%d and %d's gcd is %d", n1, n2, res);
	return 0;
}
int gcd(int a, int b)
{
	int x, y, z;
	if (a > b)
	{
		x = a % b;	//큰수를 작은수로 나눈후 나머지 보존
		if (x == 0)
			return b;
		y = b % x;	//작은수를 나머지로 나눈 나머지 보존(and 나머지==0까지 부한반복)
		while (y != 0)
		{
			z = x % y;
			x = y;
			y = z;
			z = x;
		}
	}
	else if (a < b)
	{
		x = b % a;
		if (x == 0)
			return a;
		y = a % x;
		while (y != 0)
		{
			z = x % y;
			x = y;
			y = z;
			z = x;
		}
	}
}

//exercise 7.5 q7
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int numpal(int);
	int num, res;
	printf("enter a num: ");
	scanf("%d", &num);
	res = numpal(num);
	printf("%d", res);
	return 0;
}
int numpal(int n)
{
	char text[30];	//text문자열 크기 30byte지정(문자형은 1칸당 1byte이므로 1 * 30 = 30byte
	int length, i, flag = 0;
	itoa(n, text, 10);	//itoa(int value, char buffer, int radix)가 기본형태이며 value = n, buffer = 문자열(text), radix(n진수) = 10
	length = strlen(text);	//text문자열의 크기를 구하는 함수strlen을 사용해 크기를 구하고 length변수에 값을 저장
	for (i = 0; i < length / 2; i++)	//문자열의 모든 항을 구할 이유 없이 반을 나누어 0항과 마지막항, 2항과 마지막-1항 순서로 비교함
	{
		if (text[i] != text[length - 1 - i])	//0항과 마지막항을 비교해 값이 다를때 flag = 1, 값이 같다면 flag = 0깂을 계속 가짐
		{
			flag = 1;	// flag는 true,false를 가리는 함수고 초기값이 0(false)이므로 flag기 1이 되면 비교한 숫자가 다름을 의미하므로 for문 빠져나옴
			//break;
		}
	}
	if (flag == 0)
		return 1;	//회문인 경우
	else
		return 0;	//회문이 아닌경우
}