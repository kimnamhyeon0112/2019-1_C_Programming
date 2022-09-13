#include <stdio.h>

int main()
{
	void findmax(float, float);	//void: 반환할 값 즉 return값이 없을 때 사용 int: 리턴값이 있어야 하는 변수형임 이떄 리턴값이 정수면 return 0 등으로 쓴다
	float fnum, snum;
	printf("enter a number: ");
	scanf("%f", &fnum);
	printf("enter a second number: ");
	scanf("%f", &snum);
	findmax(fnum, snum);	//새로만든 findmax함수를 호출
	return 0;
}
void findmax(float x, float y)	//findmax라는 함수를 새로 만든것이고 이 함수의 동작은 {}안에 명령대로 작동한다
{
	float maxnum;
	if (x >= y)
		maxnum = x;
	else
		maxnum = y;
	printf("maxnum is %f", maxnum);
}	//program 6.1, program 6.2

#include <stdio.h>
#define maxcount 4

int main()
{
	void tempconvert(float );
	int count;
	float fahrenheit;
	for (count = 1; count <= maxcount; count++)
	{
		printf("enter a degree: ");
		scanf("%f", &fahrenheit);
		tempconvert(fahrenheit);
	}
	return 0;
}
void tempconvert(float intemp)
{
	printf("the celsius equivalent is %.2f\n\n", (5.0 / 9.0) * (intemp - 32.0));
}	//program 6.3

#include <stdio.h>

int main()
{
	void check(int num1, float num2, double num3){}	//a
	void findabs(double abs){}						//b
	void mult(float num1, float num2){}				//c
	void sqrit(int num){}							//d
	void powfun(int num){}							//e
	void none(){}									//f
}	//exercise 6.1 q2

#include <stdio.h>

int main()
{
	void check(int, float, double);		//a
	void findabs(double);				//b
	void mult(float, float);			//c
	void sqrit(int);					//d
	void powfun(int);					//e
	void none();						//f
}	//exercise 6.1 q3

#include <stdio.h>

int main()
{
	void check(int , float , double);
	int n1, n2, n3;
	printf("enter three num: ");
	scanf("%d%f%f", &n1, &n2, &n3);
	check(n1, n2, n3);
}
void check(int x, float y, double z)
{
	printf("%f", x + y + z);
}	//chapter 6 programming exercise 1

#include <stdio.h>
#include <math.h>

int main()
{
	void findabs(int );
	int num;
	printf("enter a num: ");
	scanf("%d", &num);
	findabs(num);
	return 0;
}
void findabs(int num)
{
	if (num > 0)
		printf("%d", num);
	else
		printf("%d", abs(num));
}	//chapter 6 programming exercise 2

#include <stdio.h>

int main()
{
	void mult(float, float);
	float num1, num2;
	printf("enter two numbers: ");
	scanf("%f%f", &num1, &num2);
	mult(num1, num2);
	return 0;
}
void mult(float n1, float n2)
{
	printf("%f", n1 * n2);
}	//chapter 6 programming exercise 3

#include <stdio.h>
#include <math.h>

int main()
{
	void squareit(float);
	float num;
	printf("enter a number: ");
	scanf("%f", &num);
	squareit(num);
	return 0;
}
void squareit(float x)
{
	printf("%f", pow(x, 2));
}	//chapter 6 programming exercise 4

#include <stdio.h>
#include <math.h>

int main()
{
	void powfun(float, float);
	float num1, num2;
	printf("enter two numbers: ");
	scanf("%f%f", &num1, &num2);
	powfun(num1, num2);
	return 0;
}
void powfun(float x, float y)
{
	if (x < 0)
		printf("error");
	else
		printf("%.0f", pow(x, y));
}	//chapter 6 programming exercise 5

#include <stdio.h>

int main()
{
	void none();
	printf("number\tsquare\tcube\n");
	printf("------\t------\t----\n");
	none();
	return 0;
}
void none()
{
	int num;
	for (num = 1; num <= 10; num++)
		printf("%d\t%d\t%d\n", num, num*num, num*num*num);
}	//chapter 6 programming exercise 6

#include <stdio.h>

int main()
{
	void selectable(int ,int ,int);
	int start, end, add;
	printf("enter 3 numbers: ");
	scanf("%d%d%d", &start, &end, &add);
	printf("number\tsquare\tcube\n");
	printf("------\t------\t----\n");
	selectable(start, end, add);
	return 0;
}
void selectable(int x, int y, int z)
{
	int num;
	for (num = x; num <= y; num += z)
	{
		printf("%d\t%d\t%d\n", x, x * x, x * x * x);
		x += z;
	}
}	//chapter 6 programming exercise 7

#include <stdio.h>

int main()
{
	void testnum(int);
	int num;
	printf("enter a num in integer: ");
	scanf("%d", &num);
	testnum(num);
	return 0;
}
void testnum(int x)
{
	if (x % 2 == 0)
		printf("짝수");
	else
		printf("홀수");
}	//chapter 6 programming exercise 8

#include <stdio.h>
#include <math.h>

int main()
{
	void hypotenuse(int, int);
	int a, b;
	printf("enter two sides of triangle: ");
	scanf("%d%d", &a, &b);
	hypotenuse(a, b);
	return 0;
}
void hypotenuse(int x, int y)
{
	int z,z;
	z = (pow(x, 2) + pow(y, 2));
	z = sqrt(z);
	printf("hypotenuse is %d", z);
}	//chapter 6 programming exercise 9

#include <stdio.h>

int main()
{
	float findmax(float, float);
	float fnum, snum, max;
	printf("enter a number : ");
	scanf("%f", &fnum);
	printf("great! please enter a second number: ");
	scanf("%f", &snum);
	max = findmax(fnum, snum);
	printf("maxnum is %f", max);
	return 0;
}
float findmax(float x, float y)
{
	float maxnum;
	if (x > y)
		maxnum = x;
	else
		maxnum = y;
	return maxnum;
}	//program 6.4

#include <stdio.h>
#define maxcount 4

int main()
{
	float tempconvert(float);
	int count;
	float fahrenheit, celsius;
	for (count = 1; count <= maxcount; count++)
	{
		printf("enter a fahrenheit temperature: ");
		scanf("%f", &fahrenheit);
		celsius = tempconvert(fahrenheit);
		printf("the celcius equivalent is %.2f\n\n", celsius);
	}
	return 0;
}
float tempconvert(float intemp)
{
	return (5.0 / 9.0) * (intemp - 32.0);
}	//program 6.5

#include <stdio.h>

int main()
{
	void check(int a, float b, double c);	//a
	float findabs(float a);					//b
	float mult(float a, float b);			//c
	int sqrit(inta);						//d
	void pyo();								//e
}	//exercise 6.2 q2

#include <stdio.h>

int main()
{
	void totamt(float, float, float, float);
	float penny = .01, nickel, dime, quarter, dollar;
	nickel = penny * 5;
	dime = nickel * 2;
	quarter = dime * 2.5;
	dollar = quarter * 4;

	totamt(quarter, dime, nickel, penny);
	return 0;
}
void totamt(float q, float d, float n, float p)
{
	float tot;
	q *= 26;
	d *= 80;
	n *= 100;
	p *= 216;
	tot = q + d + n + p;
	printf("$%.2f", tot);
}   //chapter 6 programming exercise 1

#include <stdio.h>
#include <math.h>

int main()
{
	void distance(int, int, int, int);
	int x1, x2, y1, y2;
	printf("enter two point's jwapyo: ");
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
	distance(x1, x2, y1, y2);
	return 0;
}
void distance(int w, int x, int y, int z)
{
	int d;
	d = sqrt(pow(x - w, 2) + pow(z - y, 2));
	printf("distance is %d", d);
}	//chapter 6 programming exercise 2

#include <stdio.h>
#define maxcount 4

int main()
{
	float tempconvert(float, char);
	int count;
	float temperature;
	char temptype;
	for (count = 1; count <= maxcount; count++)
	{
		printf("enter a temperature: ");
		scanf("%f", &temperature);
		printf("enter a temperature type: ");
		scanf("%c", &temptype);
		scanf("%c", &temptype);
		tempconvert(temperature, temptype);
		printf("the temperature is %.2f\n\n", temperature);
	}
	return 0;
}
float tempconvert(float intemp, char c_or_f)
{
	float temp;
	if (c_or_f == 'c')
		temp = (5.0 / 9.0) * (intemp - 32.0);
	else if (c_or_f == 'f')
		temp = (9.0 / 5.0) * (intemp + 32.0);
	else
	{
		temp = 0;
		printf("error\n");
	}
	return temp;
}	//chapter 6 programming exercise 3

#include <stdio.h>

int main()
{
	void gallonstoliters(float);
	float gal;
	printf("enter a gallon: ");
	scanf("%f", &gal);
	gallonstoliters(gal);
	return 0;
}
void gallonstoliters(float gallon)
{
	float liters = 1;
	liters = gallon * 3.7854;	//gallon = 3.7854 l
	printf("%.2f gallon is %.4f liters\n", gallon, liters);
}	//chapter 6 programming exercise 4

#include <stdio.h>

int main()
{
	void conversions();
	void milestokm(float);
	float mile;
	printf("enter a mile: ");
	scanf("%f", &mile);
	conversions();
	milestokm(mile);
	return 0;
}
void conversions()
{
	printf(" miles   kilometers\n");
	printf("-------- -----------\n");
}
void milestokm(float x)		//mile->km
{
	int i, cnt, add;
	float kilometer = 1;
	scanf("%d%d", &cnt, &add);
	for (i = x; i < cnt; i += add)
	{
		kilometer = x * 1.6093;
		printf("%.0f miles %.4f km\n", x, kilometer);
		x += add;
	}
}	//chapter 6 programming exercise 5

#include<stdio.h>

int main()
{
	float factorial(int, int);
	int m, n, o;
	printf("enter a number: ");
	scanf("%d", &m);
	printf("enter another number: ");
	scanf("%d", &n);
	o = factorial(m, n);
	printf("%d", o);
	return 0;
}
float factorial(int x, int y)
{
	int z, i, j = 1, k, l = 1, m, n = 1;
	for (i = x; i > 0; i--)
		j *= i;
	for (k = y; k > 0; k--)
		l *= k;
	z = x - y;
	for (m = z; m > 0; m--)
		n *= m;
	return j / (l * n);
}	//chapter 6 programming exercise 6

#include <stdio.h>
#include <math.h>

int main()
{
	void polytwo(int, int, int, int);
	int a, b, c, x;
	printf("enter the num of a, b, c and x: ");
	scanf("%d%d%d%d", &a, &b, &c, &x);
	polytwo(a, b, c, x);
	return 0;
}
void polytwo(int a, int b, int c, int x)
{
	if (a != 0)
	{
		x = (a * pow(x, 2)) + (b * x) + c;
		printf("%d", x);
	}
	else
		printf("error");
}	//chapter 6 proamming exercise 7

#include <stdio.h>
#include <math.h>

int main()
{
	void pi();
	pi();
}
void pi()
{
	float a;
	a = asin(1.0) * 2.0;
	printf("%f", a);
}	//chapter 6 programming exercise 8

#include <stdio.h>

int main()
{
	float norms(float);
	float pcdif(float, float);
	void showit(float, float);
	int year, month;
	float height, age, normht, perdif;
	printf("how old (in years) is this child?: ");
	scanf("%d", &year);
	printf("how many months since the child's birthday?: ");
	scanf("%d", &month);
	age = year + month / 12.0;
	printf("enter the child's height (in inches): ");
	scanf("%f", &height);
	normht = norms(age);
	perdif = pcdif(height, normht);
	showit(normht, perdif);
	return 0;
}
float norms(float age)
{
	printf("\ninto norms()");
	printf("\n	age = %f", age);
	return 52.5;
}
float pcdif(float actual, float normal)
{
	printf("\ninto pcdif()");
	printf("\n	actual = %f", actual);
	printf("	normal = %f", normal);
	return 2.5;
}
void showit(float normht, float perdif)
{
	printf("\ninto showit()");
	printf("\nnormht = %f", normht);
	printf("	perdif = %f", perdif);
}	//program 6.6

#include <stdio.h>
#include <math.h>

int main()
{
	float norm(float);
	float pcdif(float, float);
	void showit(float, float);
	int year, month;
	float inch, age, normht, perdif;
	printf("how old (in years) is this child?: ");
	scanf("%d", &year);
	printf("how many months since the child's birthday: ");
	scanf("%d", &month);
	age = year + month / 12.0;
	printf("enter the child's height (in inches): ");
	scanf("%f", &inch);
	normht = norm(age);
	perdif = pcdif(inch,normht);
	showit(normht, perdif);
	return 0;
}
float norm(float age)
{
	#define minage 6
	float normht;
	normht = -0.25 * pow(age - minage, 2) + 3.5 * (age - minage) + 45;
	return normht;
}
float pcdif(float actual, float base)
{
	float perdif;
	perdif = (100 * (actual - base)) / base;	//actual=50
	return perdif;
}
void showit(float normht, float perdif)
{
	printf("\nthe average height in inches is: %.2f\n", normht);
	printf("\nthe actual height deviates from the norm by: %.2f%%", perdif);
}	//program 6.7

#include <stdio.h>
#include <math.h>
#define pi 3.1416

int main()
{
	float radius(float);
	float c, rad;
	printf("enter a circumference: ");
	scanf("%f", &c);
	rad = radius(c);
	printf("%.4f", rad);
	return 0;
}
float radius(float c)
{
	float r, a;
	r = (c * pi) / (2 * pi);
	a = pi * pow(r, 2);
	return a;
}	//exercise 6.3 q2

#include <stdio.h>
#include <math.h>
#define pi 3.1416

int main()
{
	float volume(float, float);
	float r, h, vol;
	printf("enter a radius and height: ");
	scanf("%f%f", &r, &h);
	vol = volume(r,h);
	printf("volume is %f", vol);
	return 0;
}
float volume(float r,float h)
{
	return pow(r, 2) * pi * h;;
}	//exercise 6.3 q3

#include <stdio.h>

int main()
{
	float winpercent(int, int);
	int win, lose, year;
	float rate;
	char teamname[50];
	printf("enter the team name in initial: ");
	//scanf("%c", &teamname);
	gets(teamname);
	printf("enter a year: ");
	scanf("%d", &year);
	printf("enter the number of win and lose: ");
	scanf("%d%d", &win, &lose);
	rate = winpercent(win, lose);
	printf("%s's winning percentage in %d is %f%%", teamname, year, rate);
	return 0;
}
float winpercent(int win, int lose)
{
	return 100 * win / (win + lose);
}	//exercise 6.3 q4

#include <stdio.h>
#include <math.h>

int main()
{
	float round(float, float);
	float n, res;
	int rndup;
	printf("enter a number and round up to n: ");
	scanf("%f%d", &n, &rndup);
	res = round(n, rndup);
	printf("%f", res);
	return 0;
}
float round(float num,float roundup)
{
	num = num * pow(10, roundup)+.5;
	num = floor(num);
	num = num / pow(10, roundup);
	return num;
}	//exercise 6.3 q6.a

#include <stdio.h>
#include <math.h>
#define rate .08675

int main()
{
	float round(float);
	float res, money;
	printf("enter your money in won: ");
	scanf("%f", &money);
	money *= rate;
	res = round(money);
	printf("%.2fwon", money);
	return 0;
}
float round(float cash)
{
	cash = cash * pow(10, 2) + .5;
	cash = floor(cash);
	cash = cash / pow(10, 2);
	return cash;
}	//exercise 6.3 q6.b

#include <stdio.h>

int main()
{
	float whole(float);
	float num;
	float res;
	printf("enter a number: ");
	scanf("%f", &num);
	res = whole(num);
	printf("%f", res);
	return 0;
}
float whole(float n)
{
	int j;
	j = n;
	return j;
}	//exercise 6.3 q7

#include <stdio.h>

int main()
{
	float fracpart(float);
	float whole(float);
	float num;
	float res1, res2, res3;
	printf("enter a number: ");
	scanf("%f", &num);
	res1 = fracpart(num);
	res2 = whole(num);
	res3 = res1 - res2;
	printf("%f", res3);
	return 0;
}
float fracpart(float n)
{
	return n;
}
float whole(float n)
{
	int j;
	j = n;
	return j;
}	//exercise 6.3 q8

#include <stdio.h>

int main()
{
	void pumpkin(int);
	void lemon_juice(int);
	void driedgrape(int);
	void applesource(int);
	void yellowsugar(int);
	void walnut(int);
	int people;
	printf("how wany people to eat?: ");
	scanf("%d", &people);
	printf("\n%d people's food's ingredient is\n", people);
	pumpkin(people);
	lemon_juice(people);
	driedgrape(people);
	applesource(people);
	yellowsugar(people);
	walnut(people);
}
void pumpkin(int x)
{
	printf("pumpkin: %.1f pumpkin\n", x * .5);
}
void lemon_juice(int x)
{
	printf("lemon juice: %.1f teaspoon\n", x * .5);
}
void driedgrape(int x)
{
	printf("dried grape: %.4f cup\n", x * .0625);
}
void applesource(int x)
{
	printf("apple source: %.3f cup\n", x * .375);
}
void yellowsugar(int x)
{
	printf("yellow sugar: %.4f cup\n", x * .0625);
}
void walnut(int x)
{
	printf("walnut: %.2f tablespoon\n", x * .75);
}	//exercise 6.3 q9

#include <stdio.h>

int main()
{
	float straw(float, float);
	int student;
	float pound, res;
	printf("how many students in farm?: ");
	scanf("%d", &student);
	printf("enter a pound of strawberries: ");
	scanf("%f", &pound);
	res = straw(student, pound);
	printf("they will get about %.4f strawberries per one student.", res);
	return 0;
}
float straw(float x, float y)
{
	x = y / 16;
	return x;
}	//exercise 6.3 q10

#include <stdio.h>

int main()
{
	float det2(int);
	float det3(int);
	int num, res1, res2;
	printf("select numbers 2 or 3: ");
	scanf("%d", &num);
	if (num == 2)
	{
		res1 = det2(num);
		printf("%d\n", res1);
	}
	else if (num == 3)
	{
		res2 = det3(num);
		printf("%d", res2);
	}
	return 0;
}
float det2(int num)
{
	int res, a, b, c, d;
	printf("enter 4 numbers: ");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	res = a*d - b*c;
	return res;
}
float det3(int num)
{
	int res, a, b, c, d, e, f, g, h, i;
	printf("enter 9 numbers: ");
	scanf("%d%d%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g, &h, &i);
	res = a * (e * i - f * h) - d * (b * i - c * h) - g * (b * f - e * c);
	return res;
}	//exercise 6.3 q11

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define totalnumber 10

int main()
{
	float randvalue;
	int i;

	srand(time(NULL));
	for (i = 1; i <= totalnumber; i++)
	{
		randvalue = rand();
		randvalue = 1 + rand() % 6;
		printf("%.0f\n",randvalue);
	}
	return 0;
}	//program 6.8

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int flip(int);
	void percentage(int, int);
	int toss = 1000;
	int head;
	head = flip(toss);
	percentage(toss, head);
	return 0;
}
int flip(int toss)
{
	int i, randvalue, head = 0;
	srand(time(NULL));
	for (i = 0; i <= toss; i++)
	{
		randvalue = 1 + (int)rand() % 100;
		if (randvalue > 50)
			head++;
	}
	return head;
}
void percentage(int toss, int head)
{
	int tail;
	float headper, tailper;
	if (toss == 0)
		printf("you never flip a coin.");
	else
	{
		tail = toss - head;
		printf("number of coin tosses: %d\n", toss);
		printf("   heads: %d   tails: %d\n", head, tail);
		headper = (float)head / toss * 100;
		tailper = (float)tail / toss * 100;
		printf("heads came up %.1f percent of the time.\n", headper);
		printf("tails came up %.1f percent of the time.\n", tailper);
	}
}	//program 6.9

#include <stdio.h>
#include <ctype.h>

int main()
{
	char inchar;
	do
	{
		printf("push any key (type an x to stop): ");
		inchar = getchar();			//= scanf("%c",&inchar);
		inchar = tolower(inchar);	//이 코드가 없으면 inchar가 large 'x'가 입력되면 while문의 조건 small 'x'가 아니므로 계속 반복
									//반대로 toupper를 쓰면 small 'x'가 large 'x'로 변함 단, while문의 조건을 'x'로 변경
		getchar();					//enter키도 하나의 문자형으로 입력받으므로 enter를 제거하기 위해 문자를 한번더 scan함

		if (isalpha(inchar))		//inchar가 alphabet인 경우
			printf("the character entered is a letter\n\n");
		else if(isdigit(inchar))	//inchar가 digit(정수)인 경우
			printf("the character entered is a digit\n\n");	//44부터 오류
	}
	while (inchar != 'x');
}	//program 6.10

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1;
	float num2;
	num1 = atoi("1234");
	printf("the string \"%d\" as an integer number is : %d", num1, num1);	//printf문 안에서 ""를 출력하고 싶으면 \"%d or %f\"를 입력하면 됨
	printf("\nthis number divided by %d is: %d\n\n", 3, num1 / 3);

	num2 = atof("1234.96");
	printf("the string \"%.2f\" as an integer number is : %.2f", num2, num2);	//이하동문
	printf("\nthis number divided by %d is: %f\n\n", 3, num2 / 3);
	return 0;
}	//program 6.11

#include <stdio.h>
#include <math.h>

int main()
{
	float root4(float);
	float num, res;
	printf("enter a num: ");
	scanf("%f", &num);
	res = root4(num);
	printf("%f", res);
}
float root4(float num)
{
	return pow(num, 4);
}	//exercise 6.4 q1

#include <stdio.h>
#include <math.h>

int main()
{
	float dist(int, int);
	float angle(int, int);
	int x, y;
	float distance, ceta;
	printf("enter x,y: ");
	scanf("%d%d", &x, &y);
	distance = dist(x, y);
	ceta = angle(x, y);
	printf("distance: %f, theta: %f", distance, ceta);
	return 0;
}
float dist(int x, int y)
{
	float r;
	r = sqrt(pow(x, 2) + pow(y, 2));
	return r;
}
float angle(int x, int y)
{
	float theta;
	theta = atan(y / x);
	return theta;
}	//exercise 6.4 q2

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define game 10

int main()
{
	int flip(int);
	void percentage(int, int);
	int toss;
	int head;
	for (int i = 0; i < game; i++)
	{
		printf("enter the number of times to toss a coin: ");
		scanf("%d", &toss);
		head = flip(toss);
		percentage(toss, head);
	}
	return 0;
}
int flip(int toss)
{
	int i, randvalue, head = 0;
	srand(time(NULL));
	for (i = 0; i <= toss; i++)
	{
		randvalue = 1 + (int)rand() % 100;
		if (randvalue > 50)
			head++;
	}
	return head;
}
void percentage(int toss, int head)
{
	int tail;
	float headper, tailper;
	if (toss == 0)
		printf("you never flip a coin.");
	else
	{
		tail = toss - head;
		printf("number of coin tosses: %d\n", toss);
		printf("   heads: %d   tails: %d\n", head, tail);
		headper = (float)head / toss * 100;
		tailper = (float)tail / toss * 100;
		printf("heads came up %.1f percent of the time.\n", headper);
		printf("tails came up %.1f percent of the time.\n\n", tailper);
	}
}	//exercise 6,4 q4

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define game 20

int main()
{
	int flip(int);
	void percentage(int, int);
	int toss = 1000;
	int head;
	srand(time(NULL));
	for (int i = 1; i <= game; i++)
	{
		head = flip(toss);
		percentage(toss, head);
	}
	return 0;
}
int flip(int toss)
{
	int i, randvalue, head = 0;
	for (i = 0; i <= toss; i++)
	{
		randvalue = 1 + rand() % 100;
		if (randvalue > 50)
			head++;
	}
	return head;
}
void percentage(int toss, int head)
{
	int tail;
	float headper, tailper;
	if (toss == 0)
		printf("you never flip a coin.");
	else
	{

		tail = toss - head;
		printf("number of coin tosses: %d\n", toss);
		printf("   heads: %d   tails: %d\n", head, tail);
		headper = (float)head / toss * 100;
		tailper = (float)tail / toss * 100;
		printf("heads came up %.1f percent of the time.\n", headper);
		printf("tails came up %.1f percent of the time.\n\n", tailper);
	}
}	//exercise 6.4 q5

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	void print(int);
	int n;
	printf("hi-lo game\n");
	srand(time(NULL));
	n = 1 + rand() % 100;
	print(n);
	return 0;
}
void print(int n)
{
	to:
	int num;
	int tries = 7;
	char answer;
	do
	{
		printf("\nenter a number: ");
		scanf("%d", &num);
		tries--;
		if (n > num)
		{
			printf("wrong number, try again!\n");
			printf("up\n");
			printf("%d try remain\n\n", tries);
		}
		else if (n < num)
		{
			printf("wrong number, try again!\n");
			printf("down\n");
			printf("%d try remain\n\n", tries);
		}
		else
			printf("hooray, you have won!\n\n");
		if (tries == 0)
		{
			printf("sorry, you lose\n");
			break;
		}
	} while (n != num);
	printf("would you like to play again?(answer y/n): ");
	scanf("%c", &answer);
	scanf("%c", &answer);
	while (1)
	{
		if (answer == 'n')
			break;
		else if (answer == 'y')
		{
			goto to;
		}
	}
}	//exercise 6.4 q6

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int onescount = 0, twoscount = 0, threescount = 0, fourscount = 0, fivescount = 0, sixscount = 0, sevenscount = 0, eightscount = 0, ninescount = 0, tenscount = 0;
	int num;
	srand(time(NULL));
	num = 1 + rand() % 10;
	if (num == 1)
		onescount++;
	else if (num == 2)
		twoscount++;
	else if (num == 3)
		threescount++;
	else if (num == 4)
		fourscount++;
	else if (num == 5)
		fivescount++;
	else if (num == 6)
		sixscount++;
	else if (num == 7)
		sevenscount++;
	else if (num == 8)
		eightscount++;
	else if (num == 9)
		ninescount++;
	else
		tenscount++;
	printf("onescount:  %d		percentage: %d%%\n", onescount, onescount * 100);
	printf("twoscount:  %d		percentage: %d%%\n", twoscount, twoscount * 100);
	printf("threescount:%d		percentage: %d%%\n", threescount, threescount * 100);
	printf("fourscount: %d		percentage: %d%%\n", fourscount, fourscount * 100);
	printf("fivescount: %d		percentage: %d%%\n", fivescount, fivescount * 100);
	printf("sixscount:  %d		percentage: %d%%\n", sixscount, sixscount * 100);
	printf("sevenscount:%d		percentage: %d%%\n", sevenscount, sevenscount * 100);
	printf("eightscount:%d		percentage: %d%%\n", eightscount, eightscount * 100);
	printf("ninescount: %d		percentage: %d%%\n", ninescount, ninescount * 100);
	printf("tenscount:  %d		percentage: %d%%\n", tenscount, tenscount * 100);
}	//exercisde 6.4 q7

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	void game(int);
	int dice1, dice2, money, sum;
	printf("enter all of your money: ");
	scanf("%d", &money);
	game(money);
	return 0;
}
void game(int money)
{
	int dice1, dice2, sum;
	srand(time(NULL));
to:
	dice1 = rand();
	dice1 = 1 + rand() % 6;
	dice2 = rand();
	dice2 = 1 + rand() % 6;
	sum = dice1 + dice2;
	while (1)
	{
		printf("first dice: %d second dice: %d\n", dice1, dice2);
		if (sum != 7 && sum != 11)
		{
			printf("you lose\n");
			money = money - 100;
			printf("your money is now %d\n", money);
			goto to;
		}
		else
		{
			printf("you win\n");
			printf("your money is now %d\n", money);
			break;
		}
		if (money == 0)
		{
			printf("you lost all of your money");
			break;
		}
	}
}   //exercise 6.4 q8

#include <stdio.h>

int main()
{
	float stubgcd(int, int);
	int n1, n2, res;
	printf("enter two numbers: ");
	scanf("%d%d", &n1, &n2);
	res = stubgcd(n1, n2);
	printf("%d", res);
	return 0;
}
float stubgcd(int n1, int n2)
{
	int n3;
	n3 = n1 + n2;
	return 5;
}	//exercise 6.4 q9

#include <stdio.h>

int main()
{
	float gcd(int, int);
	int n1, n2, res;
	printf("enter two numbers: ");
	scanf("%d%d", &n1, &n2);
	res = gcd(n1, n2);
	printf("%d",res);
	return 0;
}
float gcd(int x, int y)
{
	int rem1, rem2, rem3, res;
	if (x < y)
	{
		rem1 = y % x;		// 35 = 84/49
		if (rem1 == 0)
			return x;
		rem2 = x % rem1;	// 14 = 49/35
		while (rem2 != 0)
		{
			rem3 = rem1 % rem2;	// 7  = 35/14
			rem1 = rem2;		// rem1 = 35 -> 14
			rem2 = rem3;		// rem2 = 14 -> 7
			rem3 = rem1;
		}
	}
	else
	{
		rem1 = x % y;		// 35 = 84/49
		if (rem1 == 0)
			return y;
		rem2 = y % rem1;	// 14 = 49/35
		while (rem2 != 0)
		{
			rem3 = rem1 % rem2;	// 7  = 35/14		0 = 14%7
			rem1 = rem2;		// rem1 = 35 -> 14
			rem2 = rem3;		// rem2 = 14 -> 7
			rem3 = rem1;		// rem3 = 7
		}
	}
	return rem3;
}	//exercise 6.4 q10

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int card, dealer, sum = 0;
	char answer;
	printf("black jack game start!\n");
	printf("you have to pick another 3 cards!\n");
	do
	{
		srand(time(NULL));
		card = rand();
		card = 1 + rand() % 10;
		printf("your card is %d\n", card);
		sum += card;
		printf("sum is %d\n\n", sum);
		dealer = 1 + rand() % 21;
		printf("do you want to pick another card? (answer y/n): \n");
		scanf("%c", &answer);
		if (answer == 'n')
		{
			if (sum > dealer)
			{
				if (sum > 21)
				{
					printf("you lose!\n");
					printf("your total sum is %d\n", sum);
				}
			}
			else if (sum == dealer)
			{
				printf("you draw!\n");
				printf("your total sum is %d\n", sum);
			}
			else
			{
				printf("you lose!\n");
				printf("your total sum is %d\n", sum);
			}
			break;
		}
		if (answer == 'y')
			continue;
	} while (1);
	printf("dealer is %d\n", dealer);
	if (sum > dealer)
	{
		if (sum > 21)
		{
			printf("you lose!\n");
			printf("your total sum is %d\n", sum);
		}
		else
		{
			printf("you win!\n");
			printf("your total sum is %d\n", sum);
		}
	}
	return 0;
}	//exercise 6.4 q11

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	float rand1();
	float rand2();
	int count = 0;
	char res1, res2;
	srand(time(NULL));
	to:
	res1 = rand1();
	res2 = rand2();
	count++;
	while (1)
	{
		if (res1 == 'a' && res2 == 't')
		{
			printf("%c%c ", res1, res2);
			break;
		}
		else if (res1 == 'i' && res2 == 's')
		{
			printf("%c%c ", res1, res2);
			break;
		}
		else if (res1 == 'h' && res2 == 'e')
		{
			printf("%c%c ", res1, res2);
			break;
		}
		else if (res1 == 'w' && res2 == 'e')
		{
			printf("%c%c ", res1, res2);
			break;
		}
		else if (res1 == 'u' && res2 == 'p')
		{
			printf("%c%c ", res1, res2);
			break;
		}
		else if (res1 == 'o' && res2 == 'n')
		{
			printf("%c%c ", res1, res2);
			break;
		}
		else
			goto to;

	}
	printf("%d", count);
	return 0;
}
float rand1()
{
	int randvalue;
	randvalue = rand();
	randvalue = 1 + rand() % 26;
	if (randvalue == 1)
		return 'a';
	else if (randvalue == 2)
		return 'b';
	else if (randvalue == 3)
		return 'c';
	else if (randvalue == 4)
		return 'd';
	else if (randvalue == 5)
		return 'e';
	else if (randvalue == 6)
		return 'f';
	else if (randvalue == 7)
		return 'g';
	else if (randvalue == 8)
		return 'h';
	else if (randvalue == 9)
		return 'i';
	else if (randvalue == 10)
		return 'j';
	else if (randvalue == 11)
		return 'k';
	else if (randvalue == 12)
		return 'l';
	else if (randvalue == 13)
		return 'm';
	else if (randvalue == 14)
		return 'n';
	else if (randvalue == 15)
		return 'o';
	else if (randvalue == 16)
		return 'p';
	else if (randvalue == 17)
		return 'q';
	else if (randvalue == 18)
		return 'r';
	else if (randvalue == 19)
		return 's';
	else if (randvalue == 20)
		return 't';
	else if (randvalue == 21)
		return 'u';
	else if (randvalue == 22)
		return 'v';
	else if (randvalue == 23)
		return 'w';
	else if (randvalue == 24)
		return 'x';
	else if (randvalue == 25)
		return 'y';
	else
		return 'z';
}
float rand2()
{
	int randvalue;
	randvalue = rand();
	randvalue = 1 + rand() % 26;
	if (randvalue == 1)
		return 'a';
	else if (randvalue == 2)
		return 'b';
	else if (randvalue == 3)
		return 'c';
	else if (randvalue == 4)
		return 'd';
	else if (randvalue == 5)
		return 'e';
	else if (randvalue == 6)
		return 'f';
	else if (randvalue == 7)
		return 'g';
	else if (randvalue == 8)
		return 'h';
	else if (randvalue == 9)
		return 'i';
	else if (randvalue == 10)
		return 'j';
	else if (randvalue == 11)
		return 'k';
	else if (randvalue == 12)
		return 'l';
	else if (randvalue == 13)
		return 'm';
	else if (randvalue == 14)
		return 'n';
	else if (randvalue == 15)
		return 'o';
	else if (randvalue == 16)
		return 'p';
	else if (randvalue == 17)
		return 'q';
	else if (randvalue == 18)
		return 'r';
	else if (randvalue == 19)
		return 's';
	else if (randvalue == 20)
		return 't';
	else if (randvalue == 21)
		return 'u';
	else if (randvalue == 22)
		return 'v';
	else if (randvalue == 23)
		return 'w';
	else if (randvalue == 24)
		return 'x';
	else if (randvalue == 25)
		return 'y';
	else
		return 'z';
}	//exercise 6.4 q12

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	char abt;
	do
	{
		abt = getchar();
		getchar();
		abt = toupper(abt);
		putchar(abt);
		printf("\n\n");
	} while (abt != 'x');
}	//exercise 6.4 q14

#include <stdio.h>
#include <ctype.h>

int main()
{
	char inchar;
	while(1)
	{
		printf("push any key (type an x to stop): ");
		inchar = getchar();
		getchar();
		inchar = tolower(inchar);
		if (isalpha(inchar))		//inchar가 alphabet인 경우
			printf("the character entered is a letter\n\n");
		else if (isdigit(inchar))	//inchar가 digit(정수)인 경우
			printf("the character entered is a digit\n\n");	//44부터 오류
		if (inchar == 'x')
			break;
	}
}	//exercise 6.4 q15

#include <stdio.h>
#include <ctype.h>

int main()
{
	char inchar;
	do
	{
		inchar = getchar();
		getchar();
		putchar(inchar);
		printf("\n\n");
	} while (inchar != '+');
	printf("%d", inchar);
}	//exercise 6.4 q16