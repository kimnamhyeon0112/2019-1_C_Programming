#include <stdio.h>

int main()
{
	int num=1;
	while (num <= 10)
	{
		printf("%d ", num);
		num++;
	}
	return 0;
}	//program 5.1

#include <stdio.h>

int main()
{
	int num = 10;
	while (num >= 1)
	{
		printf("%d ", num);
		num--;
	}
	return 0;
}	//program 5.2

#include <stdio.h>

int main()
{
	int num=1;
	#define tablesize 10
	printf("number		square		cube\n");
	printf("------		------		----");
	while (num <= tablesize)
	{
		printf("\n%3d		%4d		%4d", num, num*num, num*num*num);
		num++;
	}
	return 0;
}	//program 5.3

#include <stdio.h>

int main()
{
	int cel = 5;
	float fah;
	#define end 50
	printf("degrees degrees");
	printf("\ncelsius fahrenheit");
	printf("\n------- ----------");
	while (cel <= end)
	{
		fah = (9.0 / 5.0) * cel + 32.0;
		printf("\n%5d %10.2f", cel, fah);
		cel += 5;
	}
	return 0;
}	//program 5.4

#include <stdio.h>

int main()
{
	int num = 10;
	while (num <= 20)
	{
		printf("%d ", num);
		num++;
	}
	return 0;
}	//exercise 5.2 q2

#include <stdio.h>

int main()
{
	int num = 10;
	while (num <= 20)
	{
		printf("%d ", num);
		num += 2;
	}
	return 0;
}   //exercise 5.2 q3

#include <stdio.h>

int main()
{
	int num = 20;
	while (num >= 10)
	{
		printf("%d ", num);
		num--;
	}
	return 0;
}	//exercise 5.2 q4

#include <stdio.h>

int main()
{
	int num = 20;
	while (num >= 10)
	{
		printf("%d ", num);
		num -= 2;
	}
	return 0;
}	//exercise 5.2 q5

#include <stdio.h>

int main()
{
	int num = 0;
	while (num <= 20)
	{
		num++;
		printf("%d ", num);
	}
	return 0;
}	//exercise 5.2 q6

#include <stdio.h>

int main()
{
	int num = 2;
	while (num <= 10)
	{
		printf("%d ", num);
		num += 2;
	}
	return 0;
}	//chapter 5 programming exercise 1

#include <stdio.h>

int main()
{
	int cel = -10;
	float fah;
#define end 60
	printf("degrees degrees");
	printf("\ncelsius fahrenheit");
	printf("\n------- ----------");
	while (cel <= end)
	{
		fah = (9.0 / 5.0) * cel + 32.0;
		printf("\n%5d %10.2f", cel, fah);
		cel += 10;
	}
	return 0;
}	//chapter 5 programming exercise 2

#include <stdio.h>

int main()
{
	float liter = 37.85;
	int gallon = 10;
	while (gallon <= 20)
	{
		printf("%d gallon is %.2f liter \n", gallon, liter);
		liter = liter + 3.785;
		gallon++;
	}
}	//chapter 5 programming exercise 3

#include <stdio.h>

int main()
{
	int feet = 3;
	float meter = 0.914;
	while(feet <= 30)
	{
		printf("%d feet is %.3f meter\n", feet, meter);
		meter = meter + 0.914;
		feet+=3;
	}
	return 0;
}	//chapter 5 programming exercise 4

#include <stdio.h>

int main()
{
	int value = 28000, year = 1, depre = 4000, accu = 4000;
	printf("			end-of-year	accumulated\n");
	printf("year	depreciation	  value		depreciation\n");
	printf("----	------------	-----------	------------\n");
	value = value - depre;
	while (year <= 7)
	{
		printf("%d	%7d	%16d	%8d\n", year, depre, value, accu);
		value = value - depre;
		accu = accu + depre;
		year++;
	}
	return 0;
}	//chapter 5 programming exercise 5

#include <stdio.h>

int main()
{
	float distance, mile = 55.0, time = 40.0;
	float mpm;
	mpm = mile / 60;		//1분당 간 거리 0.916mile/min
	distance = mpm * time;	//40분당 간 거리
	while(time <= 240)
	{
		distance = mpm * time;
		printf("%.0f min / mile is %f\n", time, distance);
		time += 40;
	}
	return 0;
}	//chatper 5 programming exercise 6

#include <stdio.h>
#define maxcount 4

int main()
{
	int count=1;
	float num;
	printf("this program will ask you to enter %d numbers.\n", maxcount);
	while (count <= maxcount)
	{
		printf("enter a number: ");
		scanf("%f", &num);
		printf("the number entered is %f\n", num);
		count++;
	}
	return 0;
}	//program 5.5

#include <stdio.h>
#define maxcount 4

int main()
{
	int count = 1;
	float num, total = 0.0;
	printf("this program will ask you to enter %d numbers.\n", maxcount);
	while (count <= maxcount)
	{
		printf("enter a number: ");
		scanf("%f", &num);
		total = total + num;
		printf("the total is now %f\n", total);
		count++;
	}
	printf("the final total of the %d numbers is %f", maxcount, total);
	return 0;
}	//program 5.6

#include <stdio.h>
#define maxcount 4

int main()
{
	int count = 1;
	float num, total = 0.0, avg;
	printf("this program will ask you to enter %d numbers.\n", maxcount);
	while (count <= maxcount)
	{
		printf("enter a number: ");
		scanf("%f", &num);
		total = total + num;
		avg = total / maxcount;
		count++;
	}
	printf("the average of the %d numbers %.4f\n", maxcount, avg);
	return 0;
}	//program 5.7

#include <stdio.h>
#define negativenum -1

int main()
{
	float grade = 0.0, tot = 0.0;
	printf("to stop entering grades, type in any negative number.\n");
	while (grade > negativenum)
	{
		printf("enter a grade: ");
		scanf("%f", &grade);
		tot = tot + grade;
	}
	printf("the total of the grades is %f", tot-grade);
	return 0;
}	//program 5.8

#include <stdio.h>

int main()
{
	float grade, total = 0.0;
	printf("to stop entering grades, press either the f6 key\n");
	printf("or the ctrl and z keys simultaneously on ibm compatible computers\n");
	printf("or the ctrl and d keys for unix operating systems.\n");
	printf("enter a grade: ");

	while (scanf("%f", &grade) != EOF)		//ctrl + z는 일반 pc에서 eof를 의미함
	{
		total += grade;
		printf("enter a grade: ");
	}
	printf("the total of the grade is %f", total);
	return 0;
}	//program 5.9

#include <stdio.h>
#define maxcount 4

int main()
{
	int count = 1;
	float num, total = 0.0, avg;
	printf("this program will ask you to enter %d numbers.\n", maxcount);
	while (count <= maxcount)
	{
		printf("enter a number: ");
		scanf("%f", &num);
		total = total + num;
		avg = total / count;
		count++;
	}
	avg = total / count;
	printf("the average of the %d numbers %.4f\n", maxcount, avg);
	return 0;
}	//exercise 5.3 q4

#include <stdio.h>
#define maxcount 8

int main()
{
	int count = 1;
	float num, total = 0.0;
	printf("this program will ask you to enter %d numbers.\n", maxcount);
	while (count <= maxcount)
	{
		printf("enter a number: ");
		scanf("%f", &num);
		total = total + num;
		printf("the total is now %f\n", total);
		count++;
	}
	printf("the final total of the %d numbers is %f", maxcount, total);
	return 0;
}	//chapter 5 programming exercise 1

#include <stdio.h>

int main()
{
	int count = 1, getnum;
	float num, total = 0.0;
	printf("please type in the total number of data values to be added: ");
	scanf("%d", &getnum);
	while (count <= getnum)
	{
		printf("enter a number: ");
		scanf("%f", &num);
		total = total + num;
		printf("the total is now %f\n", total);
		count++;
	}
	printf("the final total of the %d numbers is %f", getnum, total);
	return 0;
}	//chapter 5 programming exercise 2

#include <stdio.h>

int main()
{
	int cel, count = 1, change, gongbe;
	float fah;
	printf("섭씨온도와 변환 시킬 횟수와 증가폭을 입력하세요: ");
	scanf("%d%d%d", &cel, &change, &gongbe);
	fah = (9.0 / 5.0) * cel + 32.0;
	while (count <= change)
	{
		fah = (9.0 / 5.0) * cel + 32.0;
		printf("%d℃ is %f℉\n", cel, fah);
		cel = cel + gongbe;
		count++;
	}
	return 0;
}	//chapter 5 programming exercise 3

#include <stdio.h>

int main()
{
	int cel1, cel2, gongbe;
	float fah;
	printf("시작온도와 끝온도를 섭씨로 기록하고 증가폭을 입력하세요: ");
	scanf("%d%d%d", &cel1, &cel2, &gongbe);
	fah = (9.0 / 5.0) * cel1 + 32.0;
	while (cel1 <= cel2)
	{
		fah = (9.0 / 5.0) * cel1 + 32.0;
		printf("%d℃ is %f℉\n", cel1, fah);
		cel1 = cel1 + gongbe;
	}
	return 0;
}	//chapter 5 programming exercise 4

#include <stdio.h>
#define maxcount 10

int main()
{
	int count = 1;
	float num, total = 0.0, avg;
	printf("this program will ask you to enter %d numbers.\n", maxcount);
	while (count <= maxcount)
	{
		printf("enter a number: ");
		scanf("%f", &num);
		total = total + num;
		avg = total / maxcount;
		count++;
	}
	printf("the average of the %d numbers %.2f\n", maxcount, avg);
	return 0;
}	//chapter 5 programming exercise 5

#include <stdio.h>

int main()
{
	int count = 1, getnum;
	float num, total = 0.0, avg;
	printf("please type in the total number of data value to be averaged: ");
	scanf("%d", &getnum);
	while (count <= getnum)
	{
		printf("enter a number: ");
		scanf("%f", &num);
		total = total + num;
		avg = total / getnum;
		count++;
	}
	printf("the average of the %d numbers %.4f\n", getnum, avg);
	return 0;
}	//chapter 5 programming exercise 6

#include <stdio.h>
#define negativenum -1

int main()
{
	float grade = 0.0, tot = 0.0, count = 0, avg;
	printf("to stop entering grades, type in any negative number.\n");
	while (grade > negativenum)
	{
		printf("enter a grade: ");
		scanf("%f", &grade);
		tot = tot + grade;
		count++;
		if (grade < 0)
			count = count - 1;
	}
	avg = (tot - grade) / count;
	printf("\nthe average of the grades is %f", avg);
	return 0;
}	//chapter 5 programming exercise 7

#include <stdio.h>
#define max 3

int main()
{
	int codenum, newinven, nowinven, buy, sell, book = 1;
	while (book <= max)
	{
		printf("enter book's information: ");
		scanf("%d%d%d", &nowinven, &buy, &sell);
		newinven = nowinven + buy - sell;
		printf("this book's new inventory is %d\n", newinven);
		book++;
	}
	return 0;
}	//chapter 5 programming exercise 8

#include <stdio.h>
#define max 999

int main()
{
	int codenum, newinven, nowinven, buy, sell, book = 1;
	while (book <= max)
	{
		printf("enter book's information: ");
		scanf("%d%d%d", &nowinven, &buy, &sell);
		newinven = nowinven + buy - sell;
		printf("this book's new inventory is %d\n", newinven);
		book++;
	}
	return 0;
}	//chapter 5 programming exercise 9

#include <stdio.h>

int main()
{
	int add, mileage, usefuel;
    float gpm, gallon;
	printf("enter your mileage and fuel usage: ");
	scanf("%d%d", &mileage, &usefuel);
	gpm = mileage/gallon;
}	//chapter 5 programming exercise 10

#include <stdio.h>
#define max 20

int main()
{
	int num;
	for (num = 4; num <= max; num += 2)
		printf("%d ", num);
	return 0;
}	//program 5.10

#include <stdio.h>
#define max 20

int main()
{
	int num = 4;
	for (; num <= max; num += 2)
		printf("%d ", num);
	return 0;
}	//program 5.10a

#include <stdio.h>
#define max 20

int main()
{
	int num = 4;
	for (; num <= max;)
	{
		printf("%d ", num);
		num += 2;
	}
	return 0;
}	//program 5.10b

#include <stdio.h>
#define max 20

int main()
{
	int num;
	for (num = 4; num <= max; printf("%d ", num), num += 2);
	return 0;
}	//program 5.10c

#include <stdio.h>
#define maxnum 10

int main()
{
	int num;
	printf("numer\tsquare\tcube\n");
	printf("------\t------\t----\n");
	for (num = 1; num <= maxnum; num++)
		printf("%3d%9d%8d\n", num, num*num, num*num*num);
	return 0;
}	//program 5.11

#include <stdio.h>
#define max 5

int main()
{
	int count, num, sum = 0, avg;
	for (count = 1; count <= max; count++)
	{
		printf("enter a number: ");
		scanf("%d", &num);
		sum += num;
	}
	avg = sum / max;
	printf("sum is %d, average is %d", sum, avg);
	return 0;
}	//program 5.12

#include <stdio.h>

int main()
{
	for (int i = 1; i <= 20; i++);							//a
	for (int icount = 1; icount <= 21; icount += 21);		//b
	for (int j = 1; j <= 100; j += 5);						//c
	for (int icount = 20; icount >= 1; icount--);			//d
	for (int icount = 21; icount >= 1; icount -= 2);		//e
	for (float count = 1.0; count <= 16.2; count += 0.2);	//f
	for (float xcnt = 20.0; xcnt >= 10.0; xcnt -= 0.5);		//g
}	//exercise 5.4 q1

#include <stdio.h>

int main()
{
	int total = 0;
	for (int i = 1; i <= 10; i++)
		total += 1;
	printf("%d",total);
}	//exercise 5.4 q3.a

#include <stdio.h>

int main()
{
	int total = 1;
	for (int i = 1; i <= 10; i++)
		total *= 2;
	printf("%d", total);
}	//exercise 5.4 q3.b

#include <stdio.h>

int main()
{
	int total = 0;
	for (int i = 10; i <= 15; i++)
		total += i;
	printf("%d", total);
}	//exercise 5.4 q3.c

#include <stdio.h>

int main()
{
	int total = 50;
	for (int i = 1; i <= 10; i++)
		total -= i;
	printf("%d", total);
}	//exercise 5.4 q3.d

#include <stdio.h>

int main()
{
	int total = 1;
	for (int i = 1; i <= 8; i++)
		total *= i;
	printf("%d", total);
}	//exercise 5.4 q3.e

#include <stdio.h>

int main()
{
	float total = 1.0;
	for (int i = 1; i <= 5; i++)
		total /= 2.0;
	printf("%d", total);
}	//exercise 5.4 q3.f

#include <stdio.h>

int main()
{
	int i;
	for (i = 20; i >= 0; i = i - 4)
		printf("%d ", i);
}	//exercise 5.4 q4

#include <stdio.h>
#define maxnum 20

int main()
{
	int num;
	printf("numer\tsquare\tcube\n");
	printf("------\t------\t----\n");
	for (num = 0; num <= maxnum; num += 2)
		printf("%3d%9d%8d\n", num, num*num, num*num*num);
	return 0;
}	//chapter 5 programming exercise 1

#include <stdio.h>
#define minnum 1

int main()
{
	int num;
	printf("numer\tsquare\tcube\n");
	printf("------\t------\t----\n");
	for (num = 10; num >= minnum; num--)
		printf("%3d%9d%8d\n", num, num*num, num*num*num);
	return 0;
}	//chapter 5 programming exercise 2

#include <stdio.h>
#define max 100

int main()
{
	float cel, fah = 20;
	for (fah = 20; fah <= max; fah += 4)
	{
		cel = (5.0 / 9.0) * (fah - 32.0);
		printf("%.2f℉ -> %.2f℃\n", fah, cel);
	}
	return 0;
}	//chapter 5 programming exercise 3

#include <stdio.h>
#define max 6

int main()
{
	int count;
	float cel, fah;

	for (count = 1; count <= 6; count++)
	{
		printf("enter a degree to fahrenheit: ");
		scanf("%f", &fah);
		cel = (5.0 / 9.0) * (fah - 32.0);
		printf("%.2f℉ -> %.2f℃\n", fah, cel);
	}
	return 0;
}	//chapter 5 programming exercise 4

#include <stdio.h>
#define max 10

int main()
{
	int count;
	float gallon = 1, liter;
	for (count = 1; count <= max; count++)
	{
		liter = gallon * 3.785;
		printf("%.0f gallon is %.3f liter \n", gallon, liter);
		gallon++;
	}
	return 0;
}	//chapter 5 programming exercise 5

#include <stdio.h>
#define maxyear 10

int main()
{
	int year;
	float money = 1000.0, rate = .08;
	for (year = 1; year <= maxyear; year++)
	{
		money = money + money * rate;
		printf("%d year after, your money is %.2f\n", year, money);
	}
	return 0;
}	//chapter 5 programming exercise 6

#include <stdio.h>
#define max 7

int main()
{
	int dep = 4000, value = 28000, accu = 4000;
	printf("\t    depreciation schedule\n");
	printf("\t    ---------------------\n\n");
	printf("\t\t  end-of-year accumulated\n");
	printf("year depreciation    value    depreciation\n");
	printf("---- ------------ ----------- ------------\n");
	value = value - dep;
	for (int year = 1; year <= max; year++)
	{
		printf("%d %10d %13d %10d\n", year, dep, value, accu);
		accu += dep;
		value = value - dep;
	}
	return 0;
}	//chapter 5 programming exercise 7

#include <stdio.h>
#define maxyear 10

int main()
{
	float sales = 10000000., sonhae = .04f, profit = .1f, total;
	int year = 1;
	printf("\tsales and profit projection\n");
	printf("\t---------------------------\n\n");
	printf("year\texpected sales\tprojected profit\n");
	printf("----\t--------------\t----------------\n");
	printf("%d       $%10.2f    $%10.2f\n", year, sales, sales*profit);
	for (int year = 2; year <= maxyear; year++)
	{
		sales = sales - (sales * sonhae);
		total = sales * profit;
		printf("%d       $ %10.2f    $%10.2f\n", year, sales, total);
	}
	printf("\n\t--------------\t----------------");
	printf("\ntotals: $%.2f\t$%.2f",sales,total);
	return 0;
}	//chapter 5 programming exercise 8

#include <stdio.h>
#define maxnum 5

int main()
{
	int num, postotal = 0, negtotal = 0;
	for (int i = 0; i < maxnum; i++)
	{
		printf("enter a number (positive or negative): ");
		scanf("%d", &num);
		if (num >= 0)
			postotal = postotal + num;
		else
			negtotal = negtotal + num;
	}
	printf("\nthe positive total is %d", postotal);
	printf("\nthe negative total is %d", negtotal);
	return 0;
}	//program 5.13

#include <stdio.h>

int  main()
{
	int month;
	printf("enter a month between 1 and 12: ");
	scanf("%d", &month);
	while (month < 1 || month>12)
	{
		printf("error - the month you entered is not valid.");
		printf("\nenter a month between 1 and 12: ");
		scanf("%d", &month);
	}
	printf("the month accepted is %d", month);
	return 0;
}	//program 5.14

#include <stdio.h>

int main()
{
	int month;
	while (1)
	{
		printf("enter a month between 1 and 12: ");
		scanf("%d", &month);
		if (month >= 1 && month <= 12)
			break;

		printf("error - the month you entered is not valid.\n");
	}
	printf("\nthe month accepted is %d", month);
	return 0;
}	//program 5.15

#include <stdio.h>

int main()
{
	int num, final;
	printf("enter the final number for the table: ");
	scanf("%d", &final);
	printf("number square cube\n");
	printf("------ ------ ----\n");
	for (num = 1; num <= final; num++)
		printf("%d %7d %6d\n", num, num*num, num*num*num);
	return 0;
}	//program 5.16

#include <stdio.h>
#include <math.h>

int main()
{
	int x, y;
	printf("x value   y value\n");
	printf("-------   -------\n");
	for (x = 2; x <= 6; x++)
	{
		y = 10 * pow(x, 2) + 3 * x - 2;
		printf("%4d\t%7d\n", x, y);
	}
	return 0;
}	//program 5.17

#include <stdio.h>
#include <math.h>

int main()
{
	float x, y;
	printf("x value    y value\n");
	printf("--------  ----------\n");
	for (x = 2.f; x <= 6.f; x += .5f)
	{
		y = 10 * pow(x, 2) + 3 * x - 2;
		printf("%4f  %10f\n", x, y);
	}
	return 0;
}	//program 5.18

#include <stdio.h>

int main()
{
	int num, loop, postotal = 0, negtotal = 0;
	printf("enter the loop: ");
	scanf("%d", &loop);
	for (int i = 0; i < loop; i++)
	{
		printf("enter a number (positive or negative): ");
		scanf("%d", &num);
		if (num >= 0)
			postotal = postotal + num;
		else
			negtotal = negtotal + num;
	}
	printf("\nthe positive total is %d", postotal);
	printf("\nthe negative total is %d", negtotal);
	return 0;
}	//exercise 5.5 q1

#include <stdio.h>
#define maxnum 5

int main()
{
	int i, postotal = 0, negtotal = 0, poscount = 0, negcount = 0;
	float num, posavg, negavg;
	for (i = 0; i < maxnum; i++)
	{
		printf("enter a number (positive or negative): ");
		scanf("%f", &num);
		if (num >= 1)
		{
			postotal = postotal + num;
			poscount++;
		}
		else if (num < 0)
		{
			negtotal = negtotal + num;
			negcount++;
		}
	}
	posavg = postotal / poscount;
	negavg = negtotal / negcount;
	printf("\nthe positive average is %f", posavg);
	printf("\nthe negative average is %.0f", negavg);
	return 0;
}	//exercise 5.5 q2

#include <stdio.h>

int  main()
{
	int month;
	printf("enter a month between 1 and 12: ");
	scanf("%d", &month);
	while (month < 1 || month>12)
	{
		printf("error - the month you entered is not valid.");
		printf("\nenter a month between 1 and 12: ");
		scanf("%d", &month);
	}
	printf("the month accepted is %d", month);
	return 0;
}	//exercise 5.5 q3

#include <stdio.h>

int main()
{
	int day;
	printf("enter a day between 1 and 31: ");
	scanf("%d", &day);
	while (day < 1 || day > 31)
	{
		printf("error - the day you entered is not valid.");
		printf("\nenter a day between 1 and 31: ");
		scanf("%d", &day);
	}
	printf("the day accepted is %d", day);
	return 0;
}	//exercise 5.5 q4

#include <stdio.h>

int main()
{
	int month, day;
	printf("enter a month and a day: ");
	scanf("%d %d", &month, &day);
	switch (month)
	{
	case 1:
		if (day >= 1 && day <= 31)
			printf("%d/%d", month, day);
		else
			printf("error");
		break;
	case 2:
		if (day >= 1 && day <= 28)
			printf("%d/%d", month, day);
		else
			printf("error");
		break;
	case 3:
		if (day >= 1 && day <= 31)
			printf("%d/%d", month, day);
		else
			printf("error");
		break;
	case 4:
		if (day >= 1 && day <= 30)
			printf("%d/%d", month, day);
		else
			printf("error");
		break;
	case 5:
		if (day >= 1 && day <= 31)
			printf("%d/%d", month, day);
		else
			printf("error");
		break;
	case 6:
		if (day >= 1 && day <= 30)
			printf("%d/%d", month, day);
		else
			printf("error");
		break;
	case 7:
		if (day >= 1 && day <= 31)
			printf("%d/%d", month, day);
		else
			printf("error");
		break;
	case 8:
		if (day >= 1 && day <= 31)
			printf("%d/%d", month, day);
		else
			printf("error");
		break;
	case 9:
		if (day >= 1 && day <= 30)
			printf("%d/%d", month, day);
		else
			printf("error");
		break;
	case 10:
		if (day >= 1 && day <= 31)
			printf("%d/%d", month, day);
		else
			printf("error");
		break;
	case 11:
		if (day >= 1 && day <= 30)
			printf("%d/%d", month, day);
		else
			printf("error");
		break;
	case 12:
		if (day >= 1 && day <= 31)
			printf("%d/%d", month, day);
		else
			printf("error");
		break;
	}
	return 0;
}	//exercise 5.5 q5

#include <stdio.h>
#define maxcount 5

int main()
{
	int i, num, max_num = 0;
	for (i = 1; i <= maxcount; i++)
	{
		printf("enter a number: ");
		scanf("%d", &num);
		if (max_num < num)
			max_num = num;
	}
	printf("%d", max_num);
	return 0;
}	//exercise 5.5 q6

#include <stdio.h>

int main()
{
	int num;
	for (num = 1; num <= 60; num++)
	{
		if (num % 3 == 0)
			printf("%d\n", num);
	}
	return 0;
}	//exercise 5.5 q7

#include <stdio.h>

int main()
{
	int old = 12, money, total = 0;
	for (money = 10; money <= 1000; money *= 2)
	{
		printf("%d years old -> $%d\n", old, money);
		old++;
		total = total + money;
	}
	printf("total money is $%d", total);
	return 0;
}	//exercise 5.5 q8

#include <stdio.h>
#include <math.h>

int main()
{
	float x, y;
	printf("x value    y value\n");
	printf("--------  ------------\n");
	for (x = 5.0; x <= 10.0; x += .2)
	{
		y = 3 * pow(x, 5) - 2 * pow(x, 3) + x;
		printf("%.1f %18f\n", x,y);
	}
	return 0;
}	//exercise 5.5 q9.a

#include <stdio.h>
#include <math.h>

int main()
{
	float x, y;
	printf("x value    y value\n");
	printf("--------  ---------\n");
	for (x = 1.0; x <= 3.0; x += .1)
	{
		y = 1 + x + (pow(x, 2) / 2) + (pow(x, 3) / 6) + (pow(x, 4) / 24);
		printf("%.1f %15f\n", x, y);
	}
	return 0;
}	//exercise 5.5 q9.b

#include <stdio.h>
#include <math.h>

int main()
{
	float t, y;
	printf("t value    y value\n");
	printf("--------  ------------\n");
	for (t = 4.0; t <= 10.0; t += .2)
	{
		y = 2*exp(.8*t);
		printf("%.1f %18f\n", t, y);
	}
	return 0;
}	//exercise 5.5 q9.c

#include <stdio.h>
#include <math.h>

int main()
{
	int t, month = 1;
	float pop;
	t = month * 12;
	for (t = 84; t <= 96; t++)
	{
		pop = 6.0 * (exp(.02 * (t/12)));
		printf("%d month %f\n", t, pop);
	}return 0;
}	//exercise 5.5 q 10

#include <stdio.h>

int main()
{
	float x, y, t, v = 500, sin = -.723494, cos = -.690329;
	printf("     x\t\t     y\n");
	printf("------------\t------------\n");
	for (t = 0; t <= 10; t += .5)
	{
		x = v * t*cos;
		y = v * t*sin;
		printf("%f\t%f\n", x, y);
	}
	return 0;
}	//exercise 5.5 q 11

#include <stdio.h>

int main()
{
	int num, final,add;
	printf("enter the final number for the table: ");
	scanf("%d%d", &final, &add);
	printf("number square cube\n");
	printf("------ ------ ----\n");
	for (num = 1; num <= final; num+=add)
		printf("%d %7d %6d\n", num, num*num, num*num*num);
	return 0;
}	//exercise 5.5 q12

#include <stdio.h>

int main()
{
	int count, Max;
	float fah;
	printf("enter a fahrenheit temperature and change count: ");
	scanf("%f%d", &fah, &Max);
	printf("fahrenheit  celcius\n");
	printf("----------  -------\n");
	for (count = 0; count <= Max; count++)
	{
		float cel = (5.0 / 9.0)*(fah - 32.0);
		printf("%f  %f\n", fah, cel);
		fah += 5;
	}
	return 0;
}	//exercise 5.5 q13

#include <stdio.h>

int main()
{
	int i, j;
	for (i = 1; i <= 5; i++)
	{
		printf("\ni is now %d\n", i);
		for (j = 1; j <= 4; j++)
			printf("j = %d ", j);
	}
	return 0;
}	//program 5.19

#include <stdio.h>
#define people 20
#define test 4

int main()
{
	int i, j;
	float grade, total, avg;
	for (i = 1; i <= people; i++)
	{
		total = 0;
		for (j = 1; j <= test; j++)
		{
			printf("enter a grade: ");
			scanf("%f", &grade);
			total += grade;
		}
		avg = total / test;
		printf("the average for student %d is %f\n", i, avg);
	}
	return 0;
}	//program 5.20

#include <stdio.h>
#define result 6
#define test 4

int main()
{
	int i, j;
	float Result, sum;
	for (i = 1; i <= test; i++)
	{
		sum = 0;
		printf("%d experiment results: ", i);
		for (j = 1; j <= Result; j++)
		{
			scanf("%f", &Result);
			sum = sum + Result;
		}
		printf("sum is %f\n\n", sum);
	}
	return 0;
}	//exercise 5.6 q1

#include <stdio.h>
#define result 6
#define test 4

int main()
{
	int i, j;
	float Result, sum;
	for (i = 1; i <= test; i++)
	{
		sum = 0;
		printf("%d experiment results: ", i);
		for (j = 1; j <= Result; j++)
		{
			scanf("%f", &Result);
		}
		printf("enter a sum: ");
		scanf("%f", &sum);
		printf("sum is %f\n\n", sum);
	}
	return 0;
}	//exercise 5.6 q2

#include <stdio.h>
#define people 5
#define game 3

int main()
{
	int i, j;
	int score, total;
	float avg;
	for (i = 1; i <= people; i++)
	{
		total = 0;
		printf("%d bowler: ", i);
		for (j = 1; j <= game; j++)
		{
			scanf("%d", &score);
			total = total + score;
		}
		avg = total / game;
		printf("average is %f\n\n", avg);
	}
	return 0;
}	//exercise 5.6 q3.a

#include <stdio.h>
#define people 5
#define game 3

int main()
{
	int i, j;
	int score, total = 0;
	float avg;
	for (i = 1; i <= people; i++)
	{
		printf("%d bowler: ", i);
		for (j = 1; j <= game; j++)
		{
			scanf("%d", &score);
			total = total + score;
		}
		avg = total / (people * game);
	}
	printf("average is %f\n\n", avg);
	return 0;
}	//exercise 5.6 q3.b

#include <stdio.h>
#define people 5
#define game 3

int main()
{
	int i, j;
	int score1, score2, score3, total;
	float avg;
	for (i = 1; i <= people; i++)
	{
		total = 0;
		printf("%d bowler: ", i);
		scanf("%d%d%d", &score1, &score2, &score3);
		total = total + score1 + score2 + score3;
		avg = total / game;
		printf("average is %f\n\n", avg);
	}
	return 0;
}	//exercise 5.6 q4

#include <stdio.h>
#define year 10

int main()
{
	int Year;
	float usablemoney = 1000, rate;
	for (rate = .06; rate <= .12; rate += .01)
	{
		for (Year = 1; Year <= Year; Year++)
		{
			usablemoney = usablemoney + (usablemoney * rate);
			printf("%d years -> $%f\n", Year, usablemoney);
		}
	}
	return 0;
}	//exercise 5.6 q5

#include <stdio.h>

int main()
{
	int score;
	do
	{
		printf("enter a score: ");
		scanf("%d", &score);
		if (score < 0 || score>100)
			break;
		else
			printf("your score is %d\n", score);
	} while (1);
	return 0;
}	//exercise 5.7 q1.a

#include <stdio.h>

int main()
{
	int score;
	do
	{
		printf("enter a score: ");
		scanf("%d", &score);
		if (score < 0 || score>100)
		{
			printf("%d is invalid score!", score);
			break;
		}
		else
			printf("your score is %d\n", score);
	} while (1);
	return 0;
}	//exercise 5.7 q1.b

#include <stdio.h>

int main()
{
	int score;
	do
	{
		printf("enter a score: ");
		scanf("%d", &score);
		if (score <999)
			printf("your score is %d\n", score);
		else
			break;
	} while (1);
	return 0;
}	//exercise 5.7 q1.c

#include <stdio.h>

int main()
{
	int score, count = 4;
	do
	{
		printf("enter a score: ");
		scanf("%d", &score);
		if (score < 0 || score > 100)
		{
			printf("%d is invalid score!\n", score);
			printf("if you enter more %d invalid score, program will be shutted down!\n", count);
			count--;
		}
		else
			printf("your score is %d\n", score);
		if (count < 0)
			break;
	} while (1);
	return 0;
}	//exercise 5.7 q1.d

#include <stdio.h>

int main()
{
	float sum = 0, count = 0, score, avg;
	do
	{
		printf("enter your score: ");
		scanf("%f", &score);
		if (score < 0 || score > 100)
			printf("%.0f is invalid score! enter a valid score!\n", score);
		else
		{
			sum = sum + score;
			count++;
		}
	} while (score < 999);
	avg = sum / count;
	printf("the average is %f", avg);
	return 0;
}	//exercise 5.7 q2

#include <stdio.h>

int main()
{
	int num;
	printf("enter a num: ");
	scanf("%d", &num);
	do
	{
		printf("%d", num % 10);
		num = num / 10;
	} while (num != 0);
	return 0;
}	//exercise 5.7 q3

#include <stdio.h>

int main()
{
	int count;
	char ch1, ch2;
	printf("enter an alphabet: ");
	scanf("%c%c", &ch1, &ch2);
	printf("enter an another alphabet: ");
	scanf("%c", &ch2);
	printf("\n");
	ch1++;
	while (1)
	{
		if (ch1 < ch2)
		{
			printf("%c\n", ch1);
			printf("decimal value: %d\n", ch1);
			printf("octal value: %o\n", ch1);
			printf("hexadecimal value: %#x\n\n", ch1);
			ch1++;
		}
		else
			break;
	}
}	//exercise 5.7 q4

#include <stdio.h>
#define maxnum 20

int main()
{
	int num;
	printf("numer\tsquare\tcube\n");
	printf("------\t------\t----\n");
	do
	{
		for (num = 0; num <= maxnum; num += 2)
			printf("%3d%9d%8d\n", num, num*num, num*num*num);
	}
	while (num == 20);
	return 0;
}	//exercise 5.7 q5.a

#include <stdio.h>
#define minnum 1

int main()
{
	int num;
	printf("numer\tsquare\tcube\n");
	printf("------\t------\t----\n");
	do
	{
		for (num = 10; num >= minnum; num--)
			printf("%3d%9d%8d\n", num, num*num, num*num*num);
	}
	while (num == 1);
	return 0;
}	//exercise 5.7 q5.b

#include <stdio.h>
#define max 100

int main()
{
	float cel, fah = 20;
	do
	{
		for (fah = 20; fah <= max; fah += 4)
		{
			cel = (5.0 / 9.0) * (fah - 32.0);
			printf("%.2f℉ -> %.2f℃\n", fah, cel);
		}
	}
	while (fah == 100);
	return 0;
}   //exercise 5.7 q5.c

#include <stdio.h>
#define max 6

int main()
{
	int count;
	float cel, fah;
	do
	{
		for (count = 1; count <= 6; count++)
		{
			printf("enter a degree to fahrenheit: ");
			scanf("%f", &fah);
			cel = (5.0 / 9.0) * (fah - 32.0);
			printf("%.2f℉ -> %.2f℃\n", fah, cel);
		}
	}
	while (count == 6);
	return 0;
}	//exercise 5.7 q5.d

#include <stdio.h>
#define max 10

int main()
{
	int count;
	float gallon = 1, liter;
	do
	{
		for (count = 1; count <= max; count++)
		{
			liter = gallon * 3.785;
			printf("%.0f gallon is %.3f liter \n", gallon, liter);
			gallon++;
		}
	} while (count == 10);
	return 0;
}	//exercise 5.7 q5.e

#include <stdio.h>
#define maxyear 10

int main()
{
	int Year;
	float money = 1000.0, rate = .08;
	do
	{
		for (Year = 1; year <= maxyear; Year++)
		{
			money = money + money * rate;
			printf("%d year after, your money is %.2f\n", Year, money);
		}
	}
	while (Year == 10);
	return 0;
}	//exercise 5.7 q5.f

#include <stdio.h>
#define max 7

int main()
{
	int Year, dep = 4000, value = 28000, accu = 4000;
	printf("\t    depreciation schedule\n");
	printf("\t    ---------------------\n\n");
	printf("\t\t  end-of-year accumulated\n");
	printf("year depreciation    value    depreciation\n");
	printf("---- ------------ ----------- ------------\n");
	value = value - dep;
	do
	{
		for (Year = 1; Year <= max; Year++)
		{
			printf("%d %10d %13d %10d\n", Year, dep, value, accu);
			accu += dep;
			value = value - dep;
		}
	}
	while (Year <= 7);
	return 0;
}	//exercise 5.7 q5.g