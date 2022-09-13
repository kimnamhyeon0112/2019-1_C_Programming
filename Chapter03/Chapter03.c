//program 3.1
#include <stdio.h>

int main()
{
	float length = 27.2, width = 13.8, area;
	area = length * width;
	printf("the length of the rectangle is %f", length);
	printf("\nthe width of the rectangle is %f", width);
	printf("\nthe area of the rectangle is %f", area);

	return 0;
}

//program 3.2
#include <stdio.h>

int main()

{
	int sum = 25;
	printf("the number stored in sum is %d", sum);
	sum += 10;
	printf("\nthe number now stored in sum is %d", sum);

	return 0;
}

//program 3.3
#include <stdio.h>

int main()
{
	int sum = 0;
	printf("the value of sum is initially set to %d", sum);
	sum += 96;
	printf("\nsum is now %d", sum);
	sum += 70;
	printf("\nsum is now %d", sum);
	sum += 85;
	printf("\nsum is now %d", sum);
	sum += 60;
	printf("\nthe final sum is %d", sum);

	return 0;
}

//program 3.4
#include <stdio.h>

int main()
{
	int count = 0;
	printf("the initial value of count is %d", count);
	count++;
	printf("\ncount is now %d", count);
	count++;
	printf("\ncount is now %d", count);
	count++;
	printf("\ncount is now %d", count);
	count++;
	printf("\ncount is now %d", count);

	return 0;
}

//exercise 3.1 q1.1
#include <stdio.h>

int main()
{
	int width = 15, area, length = 15;
	area = length * width;
	printf("the area is %d", area);

	return 0;
}

//exercise 3.1 q1.2
#include <stdio.h>

int main()
{
	int length, width, area;
	length = 20;
	width = 15;
	area = length * width;
	printf("the area is %d", area);
	return 0;
}

//exercise 3.1 q1.3
#include <stdio.h>

int main()
{
	int length = 20;
	int width = 15, area;
	area = length * width;
	printf("the area is %d", area);

	return 0;
}

//exeercise 3.1 q2
#include <stdio.h>

int main()
{
	float a = 10.6, b = 13.10, c = -3.42;
	printf("%d", (int)a);
	printf("\n%d", (int)b);
	printf("\n%d", (int)c);
	printf("\n%d", (int)(a + b));
	printf("\n%d", (int)a + b + c);
	printf("\n%d", (int)(a + b) + c);
	printf("\n%d", (int)(a + b + c));
}

//chapter 3 programming exercise 1
#include <stdio.h>

int main()
{
	float a = 32.6, b = 55.2, c = 67.9, d = 48.6, avg;
	avg = (a + b + c + d) / 4;
	printf("%.3f", avg);

	return 0;
}

//chapter 3 programming exercise 2
#include <stdio.h>

int main()
{
	int length = 25, width = 10, deep = 6, v;
	v = length * width * deep;
	printf("부피는 %d", v);

	return 0;
}

//chapter 3 programming exercise 3
#include <stdio.h>

int main()
{
	float celcius, fahrenheit = 98.6;
	fahrenheit = 5.0 / 9.0*(fahrenheit - 32.0);
	printf("98.6℉ to celcius is %f℃", fahrenheit);

	return 0;
}

//chapter 3 programming exercise 4
#include <stdio.h>

int main()
{
	float mile, feet = 1, mtf;
	mile = 5280 * feet;
	mtf = mile * 2.36;
	printf("2.36 mile to feet is %f", mtf);
}

//chapter 3 programming exercise 5
#include <stdio.h>

int main()
{
	float c50 = 50, c25 = 25, c10 = 10, c5 = 5, c1 = 1, dollar,cent;
	cent = c50 * 12 + c25 * 20 + c10 * 32 + c5 * 45 + c1 * 27;
	dollar = cent * 0.001;
	printf("$%.3f", dollar);

	return 0;
}

//chapter 3 programming exercise 6
#include <stdio.h>

int main()
{
	float a = 3.5, t = 30;
	int distance = 1.0 / 2.0 * (a * t * t);
	printf("distance is %d", distance);

	return 0;
}

//chater 3 programming exercise 7
#include <stdio.h>
#include <math.h>

int main()
{
	float l = 13000, t = 100;
	l = l * 12 * pow(10, -6) * t;
	printf("%fm", l);

	return 0;
}

//chater 3 programming exercise 8
#include <stdio.h>
#include <math.h>

int main()
{
	float w, k = 300, d = 0.55;
	w = 1.0 / 2.0 * k * pow(d, 2);
	printf("%fnm", w);

	return 0;
}

//program 3.5
#include <stdio.h>
#include <math.h>

int main()
{
	float root = sqrt(6.456), sejegob = pow(7.6, 3), juldae = fabs(-8.24);
	printf("the square root of 6.456 is %f", root);
	printf("\n7.6 raised to the 3rd power is %f", sejegob);
	printf("\nthe absolute value of -8.24 is %f", juldae);

	return 0;
}

//program 3.6
#include <stdio.h>
#include <math.h>

int main()
{
	float time, g = 32.2;
	int distance = 800;
	time = sqrt(2 * distance / g);
	printf("it will take %f seconds to fall %d feet", time, distance);

	return 0;
}

//exercise 3.2 q1
#include <stdio.h>
#include <math.h>

int main()
{
	printf("the square root of 6.37 is %f", sqrt(6.37));
	//printf("\nthe square root of x-y is %f", sqrt(x-y));
	printf("\nthe value of 3.62 raised to the 3rd power is %f", pow(3.62, 3));
	printf("\nthe value of 81 raised to the .24 power is %f", pow(81, .24));
	//printf("\nthe absolute value of a^2-b^2 is %f", fabs(pow(a, 2) - pow(b, 2)));
	printf("\nthe value of e raised to the 3rd power is %f", exp(3));
}

//exercise 3.2 q2
#include <stdio.h>
#include <math.h>

int main()
{
	int c, p, sum, a = 1, b = 2, m = 3, n = 4, r = 5;
	c = sqrt(pow(a, 2) + pow(b, 2));
	printf("%d", c);
	p = sqrt(abs(m - n));
	printf("%d", p);
	sum = (a * (pow(r, n) - 1)) / (r - 1);
	printf("%d", sum);
}

//chapter 3 programming exercise 1
#include <stdio.h>
#include <math.h>

int main()
{
	printf("%d", pow(81, 4));
	printf("\n%f", pow(1728.896400,4));

	return 0;
}

//chapter 3 programming exercise 2
#include <stdio.h>
#include <math.h>
int main()
{
	int x1 = 7, x2 = 3, y1 = 12, y2 = 9, length;
	length = sqrt( pow(x1 - x2, 2) + pow(y1 - y2, 2));
	printf("%d", length);
}

//chapter 3 programming exercise 3
#include <stdio.h>
#include <math.h>

int main()
{
	int area, a = 3, b = 4, c = 5, s;
	s = (a + b + c) / 2;
	area = sqrt(s * (s - 1) * (s - b) * (s - c));
	printf("%d", area);

	return 0;
}

//chapter 3 programming exercise 4
#include <stdio.h>
#include <math.h>

int main()
{
	float people;
	int year = 2010;
	people = 6.0 * exp(.02*(year - 2000));
	printf("%d", people);

	return 0;
}

//chapter 3 programming exercise 5
#include <stdio.h>
#include <math.h>

int main()
{
	float t, pi = 3.1416, r = 70.0, g = 9.81;
	t = 2 * pi*sqrt(r / g);
	printf("%f", t);

	return 0;
}

//chapter 3 programming exercise 6
#include <stdio.h>
#include <math.h>

int main()
{
	float amount, deposit = 10000, n = 4, i = 0.1;
	amount = deposit * pow(1 + i, n);
	printf("$%f", amount);

	return 0;
}

//chapter 3 programming exercise 7
#include <stdio.h>
#include <math.h>

int main()
{
	float itemp = 150, a = 60, tfin, t = 20, k = 0.0367;
	tfin = a + (itemp - a) * exp(-k * t);
	printf("%f℃", tfin);

	return 0;
}

//chapter 3 programming exercise 8
#include <stdio.h>
#include <math.h>

int main()
{
	float b, t = 8;
	b = 300000 * exp(-.032 * t);
	printf("%f", b);
}

//program 3.7, 3.8
#include <stdio.h>
#include <math.h>

int main()
{
	float num1 = 300.0, num2 = .05, res;
	res = num1 * num2;
	printf("%f times %f is %f", num1, num2, res);

	return 0;
}

//program 3.9
#include <stdio.h>
#include <math.h>

int main()
{
	float num1, num2, res;
	printf("please type in a number:");
	scanf("%f", &num1);
	printf("\nplease type in another number:");
	scanf("%f", &num2);
	res = num1 * num2;
	printf("\n%f times %f is %f", num1, num2, res);
}

//program 3.10
#include <stdio.h>

int main()
{
	char c, key;
	printf("type in a character: ");
	scanf("%c", &c);	//문자를 입력하고 enter을 누르면 자동적으로 문자는 c에 enter는 key에 저장되어 문자의 고유숫자값과 enter의 숫자값이 출력됨
	printf("the keystroke just accepted is %d", c);
	printf("\ntype in another character: ");
	scanf("%c", &key);
	printf("the keystroke just accepted is %d", key);
}

//program 3.11
#include <stdio.h>

int main()
{
	char c1, c2;
	printf("type in a character: ");
	scanf("%c%c", &c1, &c2);	//c1에 입력한 값이 저장되고 c2에 enter가 저장됨
	printf("the keystroke just accepted is %d", c1);	//c1에 입력한 값의 ascii코드 출력
	printf("\ntype in another character: ");
	scanf("%c", &c2);			//c2 값을 다시 스캔함으로서 c2에 저장되어있던 enter가 지워지고 c2에 새로운 값을 입력할수있다
	printf("the keystroke just accepted is %d", c2);
}

//program 3.12
#include <stdio.h>

int main()
{
	int n1, n2, n3;
	double avg;
	printf("enter three integer numbers: ");
	scanf("%d%d%d", &n1, &n2, &n3);
	avg = (n1 + n2 + n3) / 3.0;
	printf("the average of %d %d and %d is %f", n1, n2, n3, avg);
}

//chapter 3 programming exercise 1
#include <stdio.h>

int main()
{
	float radius, r;
	printf("enter the radius of a circle: ");
	scanf("%f", &r);
	radius = 2.0 * 3.1416 * r;
	printf("radius is %f", radius);

	return 0;
}

//chapter 3 programming exercise 2
#include <stdio.h>

int main()
{
	float cel, fah;
	printf("enter the temperature in degrees fahrenheit: ");
	scanf("%f", &fah);
	cel = (5.0 / 9.0)*(fah - 32.0);
	printf("fahrenheit to celcius is %f℃",cel);

	return 0;
}

//chapter 3 programming exercise 3
#include <stdio.h>

int main()
{
	int area, length, width;
	printf("enter the length of the room: ");
	scanf("%d", &length);
	printf("enter the width of the room: ");
	scanf("%d", &width);
	area = length * width;
	printf("%d", area);

	return 0;
}

//chapter 3 programming exercise 4
#include <stdio.h>

int main()
{
	float mpg, mile, gallon;
	printf("enter the mile: ");
	scanf("%f", &mile);
	printf("enter the gallon: ");
	scanf("%f", &gallon);
	mpg = mile / gallon;
	printf("%f", mpg);
}

//chapter 3 programming exercise 5
#include <stdio.h>

int main()
{
	int len, wid, dep, v;
	printf("enter the length of the swimming pool: ");
	scanf("%d", &len);
	printf("enter the width of the swimming pool: ");
	scanf("%d", &wid);
	printf("enter the average depth of the swimming pool: ");
	scanf("%d", &dep);
	v = len * wid * dep;
	printf("v is %d", v);

	return 0;
}

//chapter 3 programming exercise 6.1
#include <stdio.h>

int main()
{
	int num1, num2, num3, num4, avg;
	printf("enter a number: ");
	scanf("%d", &num1);
	printf("enter a second number: ");
	scanf("%d", &num2);
	printf("enter a third number: ");
	scanf("%d", &num3);
	printf("enter a fourth number: ");
	scanf("%d", &num4);
	avg = (num1 + num2 + num3 + num4) / 4;
	printf("avg is %d", avg);

	return 0;
}

//chpater 3 programming exercise 6.2
#include <stdio.h>

int main()
{
	int number, sum = 0;
	printf("enter a number: ");
	scanf("%d", &number);
	sum += number;

	printf("enter a second number: ");
	scanf("%d", &number);
	sum += number;

	printf("enter a third number: ");
	scanf("%d", &number);
	sum += number;

	printf("enter a fourth number: ");
	scanf("%d", &number);
	sum += number;
	printf("sum is %d", sum);
}

//chapter 3 programming exercise 7
#include <stdio.h>

int main()
{
	int getnum;
	scanf("%d", &getnum);
	printf("your number is %d\n", getnum);
	scanf("%f%c", &getnum, &getnum);
	printf("your number is %f\n", getnum);
	scanf("%d", &getnum);
	printf("your number is %c", getnum);

	return 0;
}

//chappter 3 progrramming exercise 8
#include <stdio.h>

int main()
{
	float getnum;
	scanf("%d", &getnum);
	printf("your number is %d\n", getnum);
	scanf("%d", &getnum);
	printf("your number is %d\n", getnum);
	scanf("%d%c", &getnum, &getnum);
	printf("your number is %d\n", getnum);
	scanf("%c", &getnum);
	printf("your number is %c", getnum);
	return 0;
}

//chapter 3 programming exercise 9
#include <stdio.h>

int main()
{
	double getnum;
	scanf("%d", &getnum);
	printf("your number is %d\n", getnum);
	scanf("%d", &getnum);
	printf("your number is %d\n", getnum);
	scanf("%d%c", &getnum, &getnum);
	printf("your number is %d\n", getnum);
	scanf("%c", &getnum);
	printf("your number is %c", getnum);

	return 0;
}

//chapter 3 programming exercise 12
#include <stdio.h>

int main()
{
	int num1, num2, num3 = 0;
	printf("please type in a number:");
	scanf("%d", &num1);
	printf("please type in another number:");
	scanf("%d", &num2);
	num3 = num1;	//num1값 num3저장: num1=num3
	num1 = num2;	//num2값 num1저장: num2->num1
	num2 = num3;	//num3값 num2옮김: num1->num2
	printf("num1 = %d and num2 = %d", num1, num2);
}

//program 3.13
#include <stdio.h>

int main()
{
	printf("%d\n", 6);
	printf("%d\n", 18);
	printf("%d\n", 124);
	printf("---\n");
	printf("%d", 6 + 18 + 124);

	return 0;
}

//program 3.14
#include <stdio.h>

int main()
{
	printf("%3d\n", 6);
	printf("%3d\n", 18);
	printf("%3d\n", 124);
	printf("---\n");
	printf("%3d", 6 + 18 + 124);
	printf("\n%-10d", 59);

	return 0;
}

//program 3.15
#include <stdio.h>

int main()
{
	printf("the decimal (base 10) value of 15 is %d.", 15);
	printf("\nthe octal (base 8) value of 15 is %o.", 15);		//%o = 8진수 변환
	printf("\nthe hexadecimal (base 16) value of 15 is %x.", 15);	//%x = 16진수 변환

	return 0;
}

//program 3.16
#include <stdio.h>

int main()
{
	printf("the decimal value of 025 is %d.", 025);		//%#o = 25
	printf("\nthe decimal value of 0x37 is %d", 0x37);	//%#x = 0x37

	return 0;
}

//program 3.17
#include <stdio.h>

int main()
{
	printf("the decimal value of the letter %c is %d", 'a', 'a');
	printf("\nthe octal value of the letter %c is %o", 'a', 'a');
	printf("\nthe hex value of the letter %c is %x", 'a', 'a');

	return 0;
}

//exercose 3.4 q1
#include <stdio.h>

int main()
{
	printf("%d", 27 / 5);
	printf("\n%d", 16 / 8);
}

//exercise 3.4 q2
#include <stdio.h>

int main()
{
	printf("%d", 9 % 4);
	printf("\n%d", 17 % 3);

	return 0;
}

//exercise 3.4 q4
#include <stdio.h>

int main()
{
	printf("%d", 5);
	printf("\n%4d", 5);
	printf("\n%4d", 56829);
	printf("\n%5.2f", 5.26);
	printf("\n%5.2f", 5.267);
	printf("\n%5.2f", 53.264);
	printf("\n%5.2f", 534.264);
	printf("\n%5.2f", 534.);

	return 0;
}

//exercise 3.4 q5
#include <stdio.h>

int main()
{
	printf("%6.2f", 26.27);
	printf("\n%6.2f", 682.3);
	printf("\n%6.2f", 1.968);

	printf("\n$%6.2f", 26.27);
	printf("\n %6.2f", 682.3);
	printf("\n %6.2f", 1.968);
	printf("\n--------");

	printf("\n$%6.2f", 26.27 + 682.3 + 1.968);
	printf("\n$%5.2f", 26.27);
	printf("\n %5.2f", 682.3);
	printf("\n %5.2f", 1.968);
	printf("\n--------");

	printf("\n$%5.2f", 26.27 + 682.3 + 1.968);
	printf("\n%5.2f", 34.164);
	printf("\n%5.2f", 10.003);
    printf("\n--------");
	printf("\n%5.2f", 34.164 + 10.003);
}

//chapter 3 programming exercise 1
#include <stdio.h>

int main()
{
	printf("%f", 3.0 * 5.0);
	printf("\n%f", 7.1 * 8.3 - 2.2);
	printf("\n%f", 3.2 / (6.1 * 5));

	return 0;
}

//chapter 3 programming exercise 2
#include <stdio.h>

int main()
{
	printf("%d", 15 / 4);
	printf("\n%d", 15 % 4);
	printf("\n%d", 5 * 3 - (6 * 4));
}

//chapter 3 programming exercise 3
#include <stdio.h>

int main()
{
	printf("$%.2f", .05 * 36.f);
	printf("\n$%.2f", 37.80);
}

//chapter 3 programming exercise 4
#include <stdio.h>

int main()
{
	double a = 1.674, b = 1.322, c;
	printf("%4.2f", a);
	printf("\n%4.2f", b);
	printf("\n----");
	c = a + b;
	c = c - .006;
	printf("\n%4.2f", c);

	return 0;
}

//program 3.18
#include <stdio.h>
#define salestax 0.05

int main()
{
	float amount, tax, bill;
	printf("enter the amount purchased: ");
	scanf("%f", &amount);
	tax = salestax * amount;
	printf("the sales tax is $%.2f", tax);
	bill = amount + tax;
	printf("\nthe total bill is $%.2f", bill);
}

//program 3.19
#include <stdio.h>
#include <math.h>
#define pi 3.1416
#define quart 200.0

int main()
{
	float outerradius, innerradius, totalarea, innerarea, outerrimarea, redpaint, bluepaint, width;
	printf("enter the width of the diplay in feet: ");
	scanf("%f", &width);
	outerradius = width / 2.0;
	innerradius = .25 * outerradius;
	totalarea = pi * pow(outerradius, 2);
	innerarea = pi * pow(innerradius, 2);
	outerrimarea = totalarea - innerarea;
	redpaint = innerarea / quart;
	bluepaint = outerrimarea / quart;
	printf("the inner area is %.2f sq.feet",innerarea);
	printf("\nthe outer rim area is %.2f sq feet", outerrimarea);
	printf("\nred paint required is %.3f quarts", redpaint);
	printf("\nblue paint required is %.3f quarts", bluepaint);

	return 0;
}

//exercise 3.6 q2.1
#include <stdio.h>

int main()
{
	int x1 = 3, x2 = 10, y1 = 4, y2 = 12;
	#define midpointx (x1+x2)/2
	#define midpointy (y1+y2)/2
	printf("the x midpoint coordinate is %d", midpointx);
	printf("\nthe y midpoint coordinate is %d", midpointy);
}

//exercise 3.6 q2.2
#include <stdio.h>

int main()
{
	int x1 = 2, x2 = 12, y1 = 10, y2 = 6;
	#define midpointx (x1+x2)/2
	#define midpointy (y1+y2)/2
	printf("the x midpoint coordinate is %d", midpointx);
	printf("\nthe y midpoint coordinate is %d", midpointy);
}

//exercise 3,6 q3
#include <stdio.h>

int main()
{
	float x1 = 3.f, x2 = 10.f, y1 = 4.f, y2 = 12.f;
	#define midpointx (x1+x2)/2
	#define midpointy (y1+y2)/2
	printf("the x midpoint coordinate is %3.2f", midpointx);
	printf("\nthe y midpoint coordinate is %3.2f", midpointy);
}


//exercise 3.6 q4
#include <stdio.h>

int main()
{
	int x1, x2, y1, y2;
	printf("두점의 좌표를 입력하시오: ");
	scanf("%d%d", &x1, &y1);
	scanf("%d%d", &x2, &y2);
	#define midpointx (x1+x2)/2
	#define midpointy (y1+y2)/2
	printf("두 점의 중심점의 좌표는 (%d,%d)입니다", midpointx, midpointy);

}

//exercise 3.6 q5
#include <stdio.h>
#include <math.h>

int main()
{
	float num,fjegob;
	printf("enter a number: ");
	scanf("%f", &num);
	fjegob = pow(num, .25);
	printf("%f", fjegob);
}

//exercise 3.6 q6
#include <stdio.h>
#include <math.h>

int main()
{
	int dollar, taxrate, year, deposit;
	printf("enter the amount of the initial deposit: ");
	scanf("%d", &dollar);
	printf("enter the year: ");
	scanf("%d", &year);
	printf("enter the tax rate: ");
	scanf("%d", &taxrate);
	deposit = dollar * (pow((1 + taxrate * .01),year));
	printf("$%d invested for %d years at %d%% interest is $%d", dollar, year, taxrate, deposit);
}

//exercise 3.6 q7
#include <stdio.h>
#include <math.h>
#define taxrate 0.06

int main()
{
	int cost, totalcost, item, cpi, discountcost, taxdue, amountdue;
	float discountrate;
	printf("제품가격: ");
	scanf("%d", &cost);
	printf("제품 개수: ");
	scanf("%d", &item);
	printf("할인율: ");
	scanf("%f", &discountrate);
	totalcost = item * cost;
	discountcost = totalcost - (discountrate * .01 * totalcost);
	taxdue = totalcost * taxrate;
	amountdue = discountcost + taxdue;

	printf("총 가격:%d원, 할인된 총 가격:%d원, 세금:%d원, 세금 포함 총 가격:%d원", totalcost, discountcost, taxdue, amountdue);
}

//exercise 3.6 q8
#include <stdio.h>
#include <math.h>

int main()
{
	int x, y, distance;
	printf("enter x,y: ");
	scanf("%d%d", &x, &y);
	distance = sqrt(pow(x, 2)+ pow(y, 2));
	printf("distance is %d", distance);
}

//exercise 3.6 q9.1
#include <stdio.h>
#include <math.h>
#define gravity 9.81

int main()
{
	float speed1, speed2, speed3, height, height1, height2, height3;
	printf("enter a height: ");
	scanf("%f", &height);
	height1 = height * (2.0 / 3.0);
	height2 = height1 * (2.0 / 3.0);
	height3 = height2 * (2.0 / 3.0);
	speed1 = sqrt(2 * gravity * height);
	speed2 = sqrt(2 * gravity * height2);
	speed3 = sqrt(2 * gravity * height3);

	printf("1st speed is %fm/s and height is %.2fm", speed1, height1);
	printf("\n2nd speed is %fm/s and height is %.2fm", speed2, height2);
	printf("\n3rd speed is %fm/s and height is %.2fm", speed3, height3);
}

//exercise 3.6 q9.2
#include <stdio.h>
#include <math.h>
#define gravity 1.67

int main()
{
	float speed1, speed2, speed3, height, height1, height2, height3;
	printf("enter a height: ");
	scanf("%f", &height);
	height1 = height * (2.0 / 3.0);
	height2 = height1 * (2.0 / 3.0);
	height3 = height2 * (2.0 / 3.0);
	speed1 = sqrt(2 * gravity * height);
	speed2 = sqrt(2 * gravity * height2);
	speed3 = sqrt(2 * gravity * height3);

	printf("1st speed is %fm/s and height is %.2fm", speed1, height1);
	printf("\n2nd speed is %fm/s and height is %.2fm", speed2, height2);
	printf("\n3rd speed is %fm/s and height is %.2fm", speed3, height3);
}