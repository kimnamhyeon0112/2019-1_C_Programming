//program 2.1
#include <stdio.h>

int main()
{
	float c, pi = 3.1416, r = 2.0;		//pi가 실수이므로 변수를 모두 실수로 지정
	c = 2.0 * pi * r;					//원의 둘레=2 * pi * r
	printf("원의 둘레는 %f 입니다", c);

	return 0;
}

//program 2.2
#include <stdio.h>

int main()
{
	printf("hello there world!");

	return 0;
}

//program 2.3
#include <stdio.h>

int main()
{
	printf("computers, computers everywhere\n");
	printf("as far as i can c");

	return 0;
}

//program 2.5
#include<stdio.h>

int main()
{
	float a = 15.0, b = 2.0;

	printf("%f plus %f equals %f\n", a, b, a + b);
	printf("%f minus %f equals %f\n",a, b, a - b);
	printf("%f times %f equals %f\n",a, b, a * b);
	printf("%f divided by %f equals %f",a, b, a / b);
	return 0;
}

//program 2.6
#include <stdio.h>

int main()
{
	printf("the first letter of the alphabet is %c\n", 'a');
	printf("the ascii decimal code for this letter is %d\n", 'a');
	printf("the code for an uppercase %c is %d", 'a', 'a');

	return 0;
}

// Chapter 2 Programming exercise 6
#include <stdio.h>
#include <limits>

int main()
{
	printf("largest is %d, smallest is %d", INT_MAX, INT_MIN);
}	// 내 pc의 컴파일러가 지원하는 최대 최소 정수값

//program 2.7
#include <stdio.h>

int main()
{
	float g1 = 85.5f, g2 = 97.0f, tot, avg;	//f는 부동소수점으로 f가 없어도 결과 값은 변화가 없음, 즉 n.000000 = n.f
	tot = g1 + g2;
	avg = tot / 2.0;
	printf("average is %f", avg);
}

//program 2.8
#include <stdio.h>

int main()
{
	char ch;												//변수 이름 ch로 지정

	ch = 'a';												//변수 값 a로 지정, 변수는 한번에 한개의 값만 가질수 있음
	printf("the character stored in ch is %c", ch);
	ch = 'm';												//변수 값 a -> m
	printf("\nthe charcter now stored in ch is %c", ch);

	return 0;
}

//chapter 2 programing exercise 1
#include <stdio.h>

int main()
{
	float radius = 2.57, pi = 3.1416, circumference;
	circumference = 2 * pi * radius;
	printf("circumference is %f", circumference);

	return 0;
}

//chapter 2 programing exercise 2
#include <stdio.h>

int main()
{
	float radius = 2.57, pi = 3.1416, circumference;
	circumference = pi * radius * radius;
	printf("circumference is %f", circumference);

	return 0;
}

//chapter 2 programming exercise 3.1
#include <stdio.h>

int main()
{
	float length = 5.48, width = 3.5, area;
	area = length * width;
	printf("area is %f", area);

	return 0;
}

// chapter 2 programming exercise 3.b
#include <stdio.h>

int main()
{
	float length = 5.48, width = 3.5, area;
	area = 2 * (length + width);
	printf("area is %f", area);

	return 0;
}

// chapter 2 programming exercise 4
#include <stdio.h>

int main()
{
	int year, day, hour, minute, second;
	second = 1;
	minute = second * 60;	//1*60=60
	hour = minute * 60;		//60*60=3600
	day = hour * 24;		//3600*24=86400
	year = day *365;		//1년은 365일이고 달마다 일수 차이가 있어서 day*365로 계산
	printf("1 year to second is %d", year);
}

// chapter 2 programming exercise 5
#include <stdio.h>

int main()
{
	float buy = 889.0, tax = 1.06;	//판매세율이 8%면 buy금액*1.06%
	float cost = buy * tax;
	printf("세금 6%%를 포함한 총 구입 가격은 $%f입니다", cost);
}

// chapter 2 programming exercise 6
#include <stdio.h>

int main()
{
	float change, paid = 10.0, check = 6.07, cent;
	change = paid - check;
	int dollar = change;
	cent = change - dollar;
	printf("총 거스름돈: $%.2f", change);
	printf("\n달러의 갯수: %d개", dollar);
	printf("\n센트의 갯수: %.2f개", cent);
}

//chapter 2 programming exercise 7
#include <stdio.h>

int main()
{
	int num1 = 15, num2 = 18, total, average;
	total = num1 + num2;
	average = total / 2.0;
	printf("total: %d", total);
	printf("\naverage: %d", average);
}

//program 2.9
#include < stdio.h>

int main()
{
	float celcius, fahrenheit = 75;
	celcius = 5.0 / 9.0 * (fahrenheit - 32.0);

	printf("%.2f℉ to celcius is %.2f℃",fahrenheit, celcius);
}

//exercise 2.6 q1
#include <stdio.h>

int main()
{
	float celcius, fahrenheit = 86.5;
	celcius = 5.0 / 9.0 * (fahrenheit - 32.0);

	printf("%.2f℉ to celcius is %.2f℃", fahrenheit, celcius);

	return 0;
}

//exercise 2.6 q2
#include <stdio.h>

int main()
{
	float tot = 98, win = 43, percent;	//승률계산법= (우승/총게임횟수)*100
	percent = (win / tot) * 100;
	printf("brooklyn dodgers의 1955년의 승률은 %f%%입니다", percent);

	return 0;
}

//exercise 2.6 q3.1
#include <stdio.h>

int main()
{
	float c50 = 12, c25 = 20, c10 = 32, c5 = 45, c1 = 27, tot, dollar;
	tot = c50 + c25 + c10 + c5 + c1;
	dollar = tot / 100;
	printf("은행의 총 잔고는 $%.2f입니다", dollar);
}

// exercise 2.6 q3.2
#include <stdio.h>

int main()
{
	float c50 = 0, c25 = 17, c10 = 10, c5 = 0, c1 = 42, tot, dollar;
	tot = c50 + c25 + c10 + c5 + c1;
	dollar = tot / 100;
	printf("은행의 총 잔고는 $%.2f입니다", dollar);
}

//exercise 2.6 q4
#include <stdio.h>

int main()
{
	int ly, spd = 3 * 108, sec, min, hour, day, year;
	sec = 1;
	min = sec * 60;
	hour = min * 60;
	day = hour * 24;
	year = day * 365;
	ly = spd * year;
	printf("1광년은 %d m입니다", ly);
}

//exercise 2.6 q5.1
#include <stdio.h>

int main()
{
	float time, distance = 150, averagespeed = 60;	//150mile, 60mi/h
	time = distance / averagespeed;					//시간= 거리/속력
	printf("걸린 시간= %.1f시간", time);
}

//exercise 2.6 q5,2
#include <stdio.h>

int main()
{
	float time, distance = 204, averagespeed = 68;	//204mile, 68mi/h
	time = distance / averagespeed;					//시간= 거리/속력
	printf("걸린 시간= %.0f시간", time);
}

//exercise 2.6 q6.1
#include <stdio.h>

int main()
{
	int hap, n = 100, a = 1, d = 1;
	hap = (n / 2) * (2 * a + (n - 1) * d);
	printf("result is %d", hap);
}

//exercise 2.6 q6.2
#include <stdio.h>

int main()
{
	int hap, n = 900, a = 100, d = 1;
	hap = (n / 2) * (2 * a + (n - 1) * d);
	printf("result is %d", hap);
}

//exercise 2.6 q7.1
#include <stdio.h>

int main()
{
	int x1 = 3, x2 = 8, y1 = 7, y2 = 12, kiwoolki;
	kiwoolki = (y2 - y1) / (x2 - x1);

	printf("두 점을 잇는 선의 기울기는 %d입니다", kiwoolki);

	return 0;
}

//exercise 2.6 q7.3
#include <stdio.h>

int main()
{
	float x1 = 2, x2 = 12, y1 = 10, y2 = 6, kiwoolki;
	kiwoolki = (y2 - y1) / (x2 - x1);		//-4/10

	printf("두 점을 잇는 선의 기울기는 %.1f입니다", kiwoolki);

	return 0;
}

//exercise 2.6 q8, 9
#include <stdio.h>

int main()
{
	float length, weight, sec = 2, fti, pi = 3.1416, inch = 1, feet;
	feet = inch * 12;	//1feet=12inch
	fti = feet * 32.2;	//중력상수 g=32.2ft/sec^2 -> 32.2ft=386.4inch
	weight = fti / (sec*sec);		//96.6
	length = weight * ((sec / (2 * pi))*(sec / (2 * pi)));
	printf("the length to complete one swing in one second is: %.1finch", length);
}

//exercise 2.6 q10, 11
#include <stdio.h>

int main()
{
	int line, telephone = 1000;
	line = telephone*(telephone - 1) / 2;
	printf("%d개의 전화기를 연결하기 위한 회선 수는 %d입니다", telephone, line);
}

//program 2.10
#include <stdio.h>
#include <limits.h>

int main()
{
	printf("the smallest character code that can be ssotred is %d\n", SCHAR_MIN);
	printf("the largest character code that can be ssotred is %d\n", SCHAR_MAX);
	printf("the smallest integer value that can be ssotred is %d\n", INT_MIN);
	printf("the largest integer value that can be ssotred is %d\n", INT_MAX);
	printf("the smallest short integer value that can be ssotred is %d\n", SHRT_MIN);
	printf("the largest short integer value that can be ssotred is %d\n", SHRT_MAX);
	printf("the smallest long integer value that can be ssotred is %d\n", LONG_MIN);
	printf("the largest long integer value code that can be ssotred is %d", LONG_MAX);

	return 0;
}

//program 2.11
#include <stdio.h>

int main()
{
	printf("data type\tbytes");
	printf("\n---------\t-----");
	printf("\nchar\t\t%3d", sizeof(char));			//sizeof()연산자는 데이터형과 변수의 크기를 알려주는 명령어
	printf("\nshort int\t%3d", sizeof(short int));
	printf("\nint\t\t%3d", sizeof(int));
	printf("\nlong int\t%3d", sizeof(long int));
	printf("\nfloat\t\t%3d", sizeof(float));
	printf("\ndouble\t\t%3d", sizeof(double));
	printf("\nlong double\t%3d", sizeof(long double));
}

//program 2.12
#include <stdio.h>

int main()
{
	int num = 22;
	printf("the value stored in num is %d", num);
	printf("\nthe computer uses %d bytes to store this value", sizeof(int));

	return 0;
}

//program 2.13
#include <stdio.h>

int main()
{
	int num = 22;
	printf("num = %d the address of num is %d", num, &num);
	return 0;
}

//exercise 2.9 q4
#include <stdio.h>

int main()
{
	char key, choice;
	int num, count;
	long date;
	float yield;
	double price;
	printf("char's address num is: %d, %d", &key, &choice);
	printf("\nint's address num is: %d, %d", &num,&count);
	printf("\nlong's address num is: %d", &date);
	printf("\nfloat's address num is: %d", &yield);
	printf("\ndouble's address num is: %d", &price);

	return 0;
}

//exercise 2.9 q5
#include <stdio.h>

int main()
{
	printf("char's size is: %d", sizeof(char));
	printf("\nint's size is: %d", sizeof(int));
	printf("\nlong's size is: %d", sizeof(long));
	printf("\nfloat's size is: %d", sizeof(float));
	printf("\ndouble's size is: %d", sizeof(double));

	return 0;
} 