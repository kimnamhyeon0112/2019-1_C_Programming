//exercise 4.1 q1
#include <stdio.h>

int main()
{
	int a = 5, b = 2, c = 4, d = 6, e = 3;
	printf("%d", a > b);
	printf("\n%d", a != b);
	printf("\n%d", d%b == c % b);
	printf("\n%d", a * b != d * b);
	printf("\n%d", d * b == c * e);
	printf("\n%d", a * b);
	printf("\n%d", a % b * c);
	printf("\n%d", c % b * a);
	printf("\n%d", b % c * a);
	if (a % b * c && c % b * a)
	printf("1");
}

//exercise 4.1 q2
#include <stdio.h>

int main()
{
	int a = 5, b = 2, c = 4;
	printf("%d", a % b * c && c % b * a);
	printf("\n%d", a % b * c || c % b * a);
	printf("\n%d", b % c * a && a % c * b);
	printf("\n%d", b % c * a || a % c * b);

	return 0;
}

//exercise 4.1 q4
#include <stdio.h>

int main()
{
	int a = 5, b = 2, c = 4, d = 5;
	printf("%d", a == 5);
	printf("\n%d", b * d == c * c);
	printf("\n%d", d % b * c > 5 || c % b * d) < 7;

	return 0;
}

//program 4.1
#include <stdio.h>
#define limit 3000.0

int main()
{
	int num;
	float mileage;
	printf("please type in acar number and mileage:");
	scanf("%d%f", &num, &mileage);
	if (mileage > limit)
		printf("car %d is over the lmit\n", num);
	printf("end of program output");

	return 0;
}

//program 4.2
#include <stdio.h>
#define hitaxrate 0.025
#define lowtaxrate 0.02
#define money 20000.0
#define taxmoney 400.0

int main()
{
	float tax, income;
	printf("please type in the taxable income: ");
	scanf("%f", &income);
	if (income <= money)
		tax = lowtaxrate * income;
	else
		tax = hitaxrate * (income - money) + taxmoney;
	printf("taxes are $%.2f", tax);
}

//program 4.3
#include <stdio.h>

int main()
{
	float cel, fah, temp;
	char getchar;
	printf("enter the temperature to be converted: ");
	scanf("%f", &temp);
	printf("enter an f if the temperature is in fahrenheit or a c if the temperature is in celsius: ");
	scanf("\n%c", &getchar);

	if (getchar == 'f')
	{
		cel = (5.0 / 9.0) * (temp - 32.0);
		printf("the equivalent celsius temperature is %.2f℃", cel);
	}
	else
	{
		fah = (9.0 / 5.0) * temp + 32.0;
		printf("the equivalent fahrenheit temperature is %.2f℉", fah);
	}
	return 0;
}

//exercise 4.2 q1
#include <stdio.h>

int main()
{
    int angle, temperature, positivesum, negativesum, gradient;
    int flag, num1, num2, approx, temp1, temp2, error, fac, tor;
    int x, y, z, p, i, distance, time;
	if(angle == 90)	printf("the angle is a right angle");
	else	printf("the angle is not a right angle");					//a
	if(temperature >= 100)	printf("above the boiling point of water");
	else	printf("below the boiling point of water");					//b
	if(i > 0)	positivesum = positivesum + i;
	else	negativesum = negativesum + i;								//c
	if(gradient < .5)	flag == 0;
	else	flag == 1;													//d
	if(num1 - num2 == .001)	approx = 0;
	else	approx = (num1 - num2) / 2.0;								//e
	if(temp1 - temp2 > 2.3)	error = (temp1 - temp2) * fac - tor;		//f
	if(x > y && z < 20)	scanf("%d", &p);								//g
	if(distance > 20 && distance < 35)	scanf("%d", &time);				//h
}

//exercise 4.2 q3
#include <stdio.h>

int main()
{
	char letter;
	printf("enter a letter: ");
	scanf("%c", &letter);
	if (letter == 'm')	printf("hello there!");
	return 0;
}

//chapter 4 programming exercise 1
#include <stdio.h>
#define overfiveyears 1.075
#define lessfiveyears 1.054

int main()
{
	int numyrs;
	int totalmoney;
	int cash;
	printf("enter the money and years you want to save your cash: ");
	scanf("%d%d", &cash, &numyrs);
	if (numyrs >= 5)
		totalmoney = money * overfiveyears;
	else
		totalmoney = money * lessfiveyears;
	printf("after %d years, your bank account is %d won", numyrs, totalmoney);
	return 0;
}

//chapter 4 programming exercise 2
#include <stdio.h>

int main()
{
	int score;
	printf("enter your score: ");
	scanf("%d", &score);
	if (score >= 70)
		printf("a passing grade");
	else
		printf("a failing grade");
}

//chapter 4 programming exercise 3
#include <stdio.h>

int main()
{
	int hour, salary;
	printf("enter your work time: ");
	scanf("%d", &hour);
	if (hour <= 40)
		salary = hour * 8;
	else
		salary = hour * 12;
	printf("because of you work %d hours, you can take $%d for week salary", hour, salary);
	return 0;
}

//chapter 4 programming exercise 4
#include <stdio.h>
#define high 800
#define low 375

int main()
{
	char status;
	printf("enter your grade: ");
	scanf("%c", &status);
	if (status == 's')
		printf("weeksalary is %d", high);
	else
		printf("weeksalary is %d", low);

	return 0;
}

//chapter 4 programming exercise 5
#include <stdio.h>

int main()
{
	int num1, num2;
	printf("enter two numbers: ");
	scanf("%d%d", &num1, &num2);
	if (num1 > num2)
		printf("the first number is greater than the second");
	else
		printf("the first number is not grater than the second");
}

//chapter 4 programming exercise 6
#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;
	float s, area;
	printf("enter a,b,c in integer: ");
	scanf("%f%f%f", &a, &b, &c);
	s = (a + b + c) / 2;
	area = sqrt(s*(s - a)*(s - b)*(s - c));
	if (s > .0)
		printf("%f", area);
	else
		printf("입력받은 세변이 삼각형을 구성할 수 없습니다");
}

//chapter 4 programming exercise 7.1
#include <stdio.h>

int main()
{
	char getchar;
	printf("enter a character: ");
	scanf("%c", &getchar);
	if (getchar >= 'a'&&getchar <= 'z')
		printf("the character just entered is a lowercase letter");
	else
		printf("the character just entered is not a lowercase letter");

	return 0;
}

//chapter 4 programming exercise 7.2
#include <stdio.h>

int main()
{
	char getchar;
	printf("enter a character: ");
	scanf("%c", &getchar);
	if (getchar >= 'a'&&getchar <= 'z')
		printf("the character just entered is not a lowercase letter");
	else
		printf("the character just entered is a lowercase letter");

	return 0;
}

//chapter 4 programming exercise 8.1
#include <stdio.h>

int main()
{
	char getchar;
	printf("enter a character: ");
	scanf("%c", &getchar);
	if (getchar >= 'a'&&getchar <= 'z')
	{
		printf("%d", getchar - 'a' + 1);
	}
	else
		printf("the character just entered is not a lowercase letter");

	return 0;
}

//chapter 4 programming exercise 8.2
#include <stdio.h>

int main()
{
	char getchar;
	printf("enter a character: ");
	scanf("%c", &getchar);
	if (getchar >= 'a' && getchar <= 'z')
	{
		printf("%d", getchar - 'a' + 1);
	}
	else
		printf("the character just entered is a lowercase letter");

	return 0;
}

//program 4.4
#include <stdio.h>

int main()
{
	char getchar;
	printf("enter your martial code: ");
	scanf("%c", &getchar);
	if (getchar == 'm')
		printf("married");
	else if (getchar == 's')
		printf("single");
	else if (getchar == 'd')
		printf("divorced");
	else if (getchar == 'w')
		printf("widowed");
	else
		printf("invalid code");

	return 0;
}

//progrram 4.5
#include <stdio.h>

int main()
{
	float monthlysales, salary;
	printf("enter the value of monthly sales: ");
	scanf("%f", &monthlysales);
	if (monthlysales >= 50000.)
		salary = 575. + monthlysales * .16;
	else if (monthlysales >= 40000. && monthlysales <= 50000.)
		salary = 550. + monthlysales * .14;
	else if (monthlysales >= 30000. && monthlysales <= 40000.)
		salary = 525. + monthlysales * .12;
	else if (monthlysales >= 20000. && monthlysales <= 30000.)
		salary = 500. + monthlysales * .9;
	else if (monthlysales >= 10000. && monthlysales <= 20000.)
		salary = 450. + monthlysales * .5;
	else
		salary = 400. + monthlysales * .3;
	printf("the income is $%.2f", salary);

	return 0;
}

//exercuse 4.3 q2
#include <stdio.h>

int main()
{
	int a = 2, b = 0;
	float factor;
	if (a < b)
		factor = .02;
	else if (a == b)
		factor = .04;
	else if (!a)
		factor = .06;
	else if (!b && !a)
		factor = .08;
	else if (!b || !a)
		factor = 1.02;
	else if (!b)
		factor = 1.04;
	else
		factor = 1.06;
	printf("%.2f", factor);
}

//exercise 4.3 q4
#include <stdio.h>

int main()
{
	float monthlysales, income;
	printf("enter the value of monthly sales: ");
	scanf("%f", &monthlysales);
	if (monthlysales >= 50000.00)
		income = 575.00 + .16 * monthlysales;
	if (monthlysales >= 40000.00 && monthlysales <= 50000.00)
		income = 550.00 + .14 * monthlysales;
	if (monthlysales >= 30000.00 && monthlysales <= 40000.00)
		income = 525.00 + .12 * monthlysales;
	if (monthlysales >= 20000.00 && monthlysales <= 30000.00)
		income = 500.00 + .09 * monthlysales;
	if (monthlysales >= 10000.00 && monthlysales <= 20000.00)
		income = 450.00 + .05 * monthlysales;
	if (monthlysales < 10000.00)
		income = 400.00 + .03 * monthlysales;

	printf("the income is $%7.2f", income);
	return 0;
}

//exercise 4.3 q5
#include <stdio.h>

int main()
{
	float monthlysales, income;
	printf("enter the value of monthly sales: ");
	scanf("%f", &monthlysales);
	if (monthlysales < 10000.00)
		income = 400.00 + .03 * monthlysales;
	else if (monthlysales >= 10000.00)
		income = 450.00 + .05 * monthlysales;
	else if (monthlysales >= 20000.00)
		income = 500.00 + .09 * monthlysales;
	else if (monthlysales >= 30000.00)
		income = 525.00 + .12 * monthlysales;
	else if (monthlysales >= 40000.00)
		income = 550.00 + .14 * monthlysales;
	else if (monthlysales >= 50000.00)
		income = 575.00 + .16 * monthlysales;
	printf("the income is $%7.2f", income);
	return 0;

}

//chapter 4 programming exercise 1
#include <stdio.h>

int main()
{
	int score;
	printf("enter your score: ");
	scanf("%d", &score);
	if (score >= 90)
		printf("a");
	else if (score >= 80 && score < 90)
		printf("b");
	else if (score >= 70 && score < 80)
		printf("c");
	else if (score >= 60 && score < 70)
		printf("d");
	else
		printf("f");
}

//chapter 4 programming exercise 2
#include< stdio.h>

int main()
{
	int year;
	printf("enter the year: ");
	scanf("%d", &year);
	if (year >= 5)
		printf("4.5%%");
	else if (year >= 4 && year < 5)
		printf("4%%");
	else if (year >= 3 && year < 4)
		printf("3.5%%");
	else if (year >= 2 && year < 3)
		printf("3%%");
	else if (year >= 1 && year < 2)
		printf("2.5%%");
	else
		printf("2%%");
}

//chapter 4 programming exercise 3
#include <stdio.h>

int main()
{
	float temp, cel, fah;
	char getchar;
	printf("enter a temperature: ");
	scanf("%f", &temp);
	printf("enter a temperature type: ");
	scanf("\n%c", &getchar);
	if (getchar == 'f')
	{
		cel = (5.0 / 9.0) * (temp - 32.0);
		printf("%.2f℉ to celcius is %.2f℃", temp, cel);
	}
	else if (getchar == 'c')
	{
		fah = (9.0 / 5.0) * temp + 32.0;
		printf("%.2f℃ to fahrenheit is %.2f℉", temp, fah);
	}
	else
		printf("this type is invalid");
}

//program 4.6
#include <stdio.h>

int main()
{
	int option;
	float num1, num2;
	printf("please type in two numbers: ");
	scanf("%f%f", &num1, &num2);
	printf("enter a select code: ");
	printf("\n1 for addition");
	printf("\n2 for multiplication");
	printf("\n3 for division: ");
	scanf("%d", &option);

	switch (option)
	{
	case 1:
		printf("the product of the numbers entered is %.3f", num1 + num2);
		break;
	case 2:
		printf("the product of the numbers entered is %.3f", num1 * num2);
		break;
	case 3:
		if (num2 != 0.0)
			printf("the product of the numbers entered is %.3f", num1 / num2);
		else
			printf("not allowed");
		break;
	}
	return 0;
}

//chapter 4 programming exercise 1
#include <stdio.h>

int main()
{
	int code;
	printf("code 1 is 3m corporation");
	printf("\ncode 2 is maxwell corporation");
	printf("\ncode 3 is sony corporation");
	printf("\ncode 4 is verbatim corporation");
	printf("\nenter a code: ");
	scanf("%d", &code);

	switch (code)
	{
	case 1:
		printf("3m corporation");
		break;
	case 2:
		printf("maxwell corporation");
		break;
	case 3:
		printf("sony corporation");
		break;
	case 4:
		printf("verbatim corporation");
		break;
	}
}

//chapter 4 programming exercise 2
#include <stdio.h>

int main()
{
	char getchar;
	printf("enter your martial code: ");
	scanf("%c", &getchar);
	switch (getchar)
	{
	case 'm':
		printf("married");
		break;
	case 's':
		printf("single");
			break;
	case 'd':
		printf("divorced");
		break;
	case 'w':
		printf("widowed");
		break;
	default:
		printf("invalid code");
		break;
	}
	return 0;
}

//chapter 4 programming exercise 4
#include <stdio.h>

int main()
{
	float temp, cel, fah;
	char getchar;
	printf("enter a temperature: ");
	scanf("%f", &temp);
	printf("enter a temperature type: ");
	scanf("\n%c", &getchar);
	switch (getchar)
	{
		case 'f':
		{
			cel = (5.0 / 9.0) * (temp - 32.0);
			printf("%.2f℉ to celcius is %.2f℃", temp, cel);
			break;
		}
		case 'c':
		{
			fah = (9.0 / 5.0) * temp + 32.0;
			printf("%.2f℃ to fahrenheit is %.2f℉", temp, fah);
			break;
		}
		default:
			printf("this type is invalid");
			break;
	}
	return 0;
}

//chapter 4 programming exercise 5
#include <stdio.h>

int main()
{
	char option;
	float num1, num2;
	printf("please type in two numbers: ");
	scanf("%f%f", &num1, &num2);
	printf("enter a select code: ");
	printf("\n+ for addition");
	printf("\n* for multiplication");
	printf("\n/ for division: ");
	scanf("\n%c", &option);

	switch (option)
	{
	case '+':
		printf("the product of the numbers entered is %.3f", num1 + num2);
		break;
	case '*':
		printf("the product of the numbers entered is %.3f", num1 * num2);
		break;
	case '/':
		if (num2 != 0.0)
			printf("the product of the numbers entered is %.3f", num1 / num2);
		else
			printf("not allowed");
		break;
	}
	return 0;
}

//program 4.7
#include <stdio.h>
#include <math.h>

int main()
{
	float num;
	printf("this program calculates the square root and reciprocal (1/number) of a number");
	printf("\nplease enter a number: ");
	scanf("%f", &num);

	if (num < 0.0)
	{
		printf("\nthe square root of a negative number dose not exist");
		printf("\nthe reciprocal of %f is %f", num, 1 / num);
	}
	else if (num == 0.0)
	{
		printf("\nthis square root of %f is %f", num, sqrt(num));
		printf("\nthe reciprocal of zero does not exist.");
	}
	else
	{
		printf("\nthis square root of %f is %f", num, sqrt(num));
		printf("\nthe reciprocal of %f is %f.", num, 1 / num);
	}
}

//exercise 4.5 q1.1
#include <stdio.h>

int main()
{
	int month, day;
	printf("enter a month (enter 1 between 12): ");
	scanf("%d", &month);
	printf("enter a day of the month (enter 1 between 31): ");
	scanf("%d", &day);
	if (month >= 1 && month <= 12 && day >= 1 && day <= 31)
		printf("%d/%d", month, day);
	else
		printf("error");
	return 0;
}

//exercise 4.5 q1.3
#include <stdio.h>

int main()
{
	int month, day;
	printf("enter a month (enter 1 between 12): ");
	scanf("%d", &month);
	printf("enter a day of the month (enter 1 between 31): ");
	scanf("%d", &day);

	if (month == 2 && day > 0 && day < 29)
		printf("%d/%d", month, day);
	else if (month == 1 && day >= 1 && day <= 31)
		printf("%d/%d", month, day);
	else if (month == 3 && day >= 1 && day <= 31)
		printf("%d/%d", month, day);
	else if (month == 5 && day >= 1 && day <= 31)
		printf("%d/%d", month, day);
	else if (month == 7 && day >= 1 && day <= 31)
		printf("%d/%d", month, day);
	else if (month == 8 && day >= 1 && day <= 31)
		printf("%d/%d", month, day);
	else if (month == 10 && day >= 1 && day <= 31)
		printf("%d/%d", month, day);
	else if (month == 12 && day >= 1 && day <= 31)
		printf("%d/%d", month, day);
	else if (month == 4 && day > 0 && day < 31)
		printf("%d/%d", month, day);
	else if (month == 6 && day > 0 && day < 31)
		printf("%d/%d", month, day);
	else if (month == 9 && day > 0 && day < 31)
		printf("%d/%d", month, day);
	else if (month == 11 && day > 0 && day < 31)
		printf("%d/%d", month, day);
	else
		printf("error");
	return 0;
}

//exercise 4.5 q2.1
#include <stdio.h>

int main()
{
	int angle;
	printf("enter an angle: ");
	scanf("%d", &angle);
	if (angle > 0 && angle < 90)
		printf("1사분면");
	else if (angle > 90 && angle < 180)
		printf("2사분면");
	else if (angle > 180 && angle < 270)
		printf("3사분면");
	else if (angle > 270 && angle < 360)
		printf("4사분면");
	return 0;
}

//exercise 4.5 q2
#include <stdio.h>

int main()
{
	int angle;
	printf("enter an angle: ");
	scanf("%d", &angle);
	if (angle == 0)
		printf("양의 x축");
	else if (angle == 90)
		printf("양의 y축");
	else if (angle == 180)
		printf("음의 x축");
	else if (angle == 270)
		printf("음의 y축");
	return 0;
}

//exercise 4.5 q3
#include <stdio.h>

int main()
{
	int year;
	printf("enter a year: ");
	scanf("%d", &year);		//400,4,100
	if (year % 400 == 0 || year % 4 == 0 || year % 100 == 0)
		printf("윤년");
	else
		printf("not 윤년");
}

//exercise 4.5 q4
#include <stdio.h>

int main()
{
	int year, pound;
	printf("enter a year: ");
	scanf("%d", &year);
	printf("enter your car's pound: ");
	scanf("%d", &pound);
	if (year <= 1970)
	{
		if (pound < 2700)
			printf("grade 1, fee $16.50");
		else if (pound >= 2700 && pound <= 3800)
			printf("grade 2, fee $25.50");
		else
			printf("grade 3, fee $46.50");
	}
	else if (year >= 1971 && year <= 1979)
	{
		if (pound < 2700)
			printf("grade 4, fee $27.00");
		else if (pound >= 2700 && pound <= 3800)
			printf("grade 5, fee $30.50");
		else
			printf("grade 6, fee $52.50");
	}
	else
	{
		if (pound < 3500)
			printf("grade 7, fee $35.50");
		else
			printf("grade 8, fee $65.50");
	}
}

//exercise 4.5 q5
#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c;
	float r1, r2;
	printf("enter three numbers: ");
	scanf("%f%f%f", &a, &b, &c);
	r1 = (-b + sqrt(pow(b, 2) - (4 * a * c))) / 2 * a;
	r2 = (-b - sqrt(pow(b, 2) - (4 * a * c))) / 2 * a;
	if (a == 0)
		printf("error");
	else
		printf("%f, %f", r1, r2);
}

//exercise 4.5 q6
#include <stdio.h>

int main()
{
	int game, num1, num2, num3, sum;
	printf("enter 3 card's number: ");
	scanf("%d%d%d", &num1, &num2, &num3);
	sum = num1 + num2 + num3;
	scanf("%d", &game);
	switch (game)
	{
	case 1:
		if (sum < 21)
			sum += 11;
		else
			sum++;
			break;
	case 2:
		if (sum < 21)
			sum += 2;
		else
			break;
	case 3:
		if (sum < 21)
			sum += 3;
		else
			break;
	case 4:
		if (sum < 21)
			sum += 4;
		else
			break;
	case 5:
		if (sum < 21)
			sum += 5;
		else
			break;
	case 6:
		if (sum < 21)
			sum += 6;
		else
			break;
	case 7:
		if (sum < 21)
			sum += 7;
		else
			break;
	case 8:
		if (sum < 21)
			sum += 8;
		else
			break;
	case 9:
		if (sum < 21)
			sum += 9;
		else
			break;
	case 10:
		if (sum < 21)
			sum += 10;
		else
			break;
	case 11:
		if (sum < 21)
			sum += 10;
		else
			break;
	case 12:
		if (sum < 21)
			sum += 10;
		else
			break;
	case 13:
		if (sum < 21)
			sum += 10;
		else
			break;
	}
	printf("card number is %d, %d, %d and sum is %d", num1, num2, num3, sum);

	return 0;
}

//program 4.8
#include <stdio.h>
#include <math.h>

int main()
{
	int nyears;
	float capital, amount, rate;

	printf("this program calculates the amount of money\n");
	printf("in a bank account for an initial deposit\n");
	printf("invested for n years at an interest rate r.\n\n");
	printf("enter the initial amount in the account: ");
	scanf("%f", &amount);
	printf("enter the interest rate: ");
	scanf("%f", &rate);
	capital = amount * pow((1 + rate / 100.), nyears);
	printf("\nthe final amount of money iss $%8.2f\n", capital);

	return 0;
}

//program 4.9
#include <stdio.h>

int main()
{
	int num;

	printf("enter a number: ");
	scanf("%d", &num);
	if (num == 5)
		printf("bingo!");
	else
		printf("bongo!");
}