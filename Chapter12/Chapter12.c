#include <stdio.h>

int main()
{
	struct
	{
		int month, day, year;
	}birth;	//birth구조체에 포함된 month,day,year자료

	birth.month = 12;
	birth.day = 28;
	birth.year = 1987;
	printf("my birth date is %d/%d/%d\n", birth.month, birth.day, birth.year%100);
}	//program 12.1

#include <stdio.h>

int main()
{
	struct
	{
		int month, day, year;
	}birth, current;

	birth.month = 12;
	birth.day = 28;
	birth.year = 2000;
	current.month = 2;
	current.day = 4;
	current.year = 2022;
	if (birth.year % 100 <= 9)
		printf("my birth date is %d/%d/%d%d\n", birth.month, birth.day, 0, birth.year % 100);
	else
		printf("my birth date is %d/%d/%d\n", birth.month, birth.day, birth.year % 100);
	printf("today is %d/%d/%d\n", current.month, current.day, current.year % 100);
	printf("my age is %d\n", current.year - birth.year);
}	//program 12.1변형문제

#include <stdio.h>

struct date
{
	int month, day, year;
};

int main()
{
	struct date birth { 12, 28, 1987 };
	printf("my birth date is %d/%d/%d", birth.month, birth.day, birth.year % 100);
	return 0;
}	//program 12.2

#include <stdio.h>

struct
{
	char type[100], num[100], name[100],idnum[100], address[100], gangsin[100], jogeon[100], getdate[100], police[100];
}license;
int main()
{
	//struct license info={}
	printf("면허 종별을 입력하세요: ");
	scanf("%s", &license.type);
	printf("면허 번호를 입력하세요: ");
	scanf("%s", &license.num);
	printf("이름을 입력하세요: ");
	scanf("%s", &license.name);
	printf("주민등록번호를 입력하세요: ");
	scanf("%s", &license.idnum);
	printf("주소를 입력하세요: ");
	scanf("%s", &license.address);
	printf("갱신날짜(적성검사기간)를 입력하세요: ");
	scanf("%s", &license.gangsin);
	if (license.type == "2종보통")
	{
		printf("조건을 입력하세요(2종보통자만 입력하세요. 2종보통이 아닌경우 넘어가세요): ");
		scanf("%s", &license.jogeon);
	}
	printf("면허 취득날짜를 입력하세요: ");
	scanf("%s", &license.getdate);
	printf("관할 경찰청을 입력하세요: ");
	scanf("%s", &license.police);

	printf("\n%s님의 면허정보입니다\n", license.name);
	printf("면허종별: %s\n", license.type);
	printf("면허번호: %s\n", license.num);
	printf("이름: %s\n", license.name);
	printf("주민등록번호: %s\n", license.idnum);
	printf("주소: %s\n", license.address);
	printf("갱신날짜(적성검사기간): %s\n", license.gangsin);
	printf("조건: %s\n", license.jogeon);
	printf("면허취득날짜: %s\n", license.getdate);
	printf("관할경찰청: %s", license.police);
}	//chapter 12.1 exercise 1

#include <stdio.h>

struct stemp
{
	int hakbeon;
	int hakjeom;
	float hakjeomavg;
};
struct stemp
{
	char name[100];
	char birth[100];
	int hakjeom;
	float hakjeomavg;
};
struct stemp
{
	char name[100];
	char type[100];
	char location[100];
	int strength;
	int intelligence;
	char typeofdef[100];
};
struct stemp
{
	char stockname[100];
	float stockprice;
	char buydate[100];
};
struct stemp
{
	int part;
	char partinfo[100];
	char partnum[100];
	int ordernum;
}; //chapter 12.1 exercise 2

#include <stdio.h>

struct stemp
{
	int hakbeon;
	int hakjeom;
	float hakjeomavg;
};
struct stemp
{
	char name[100];
	char birth[100];
	int hakjeom;
	float hakjeomavg;
};
struct stemp
{
	char name[100];
	char street[100];
	char city[100];
	char nationality[100];
	char zipcode[100];
};
struct stemp
{
	char stockname[100];
	float stockprice;
	char buydate[100];
};
struct stemp
{
	int part;
	char partinfo[100];
	int partnum;
	int ordernum;
};
int main()
{
	struct stemp fir = { 4672,68,3.01 };
	struct stemp sec = { "홍길동","10/12/73",96,3.89 };
	struct stemp thi = { "홍길동","개신동 산 48","청주","대한민국","360-181" };
	struct stemp fou = { "ibm",134.5,"10/1/86" };
	struct stemp fif = { 16879,"battery",10,3 };
}	//chapter 12.1 exercise 3

#include <stdio.h>

struct
{
	int year;
	int month;
	int day;
}getdate;

int main()
{
	printf("enter a year: ");
	scanf("%d", &getdate.year);
	printf("enter a month: ");
	scanf("%d", &getdate.month);
	printf("enter a day: ");
	scanf("%d", &getdate.day);
	printf("%d/%d/%d", getdate.year, getdate.month, getdate.day);
}	//chapter 12.1 programming exercise 1.a

#include <stdio.h>

struct
{
	int hour;
	int min;
	int sec;
}getime;

int main()
{
	printf("enter a hour: ");
	scanf("%d", &getime.hour);
	printf("enter a minute: ");
	scanf("%d", &getime.min);
	printf("enter a second: ");
	scanf("%d", &getime.sec);
	printf("%d/%d/%d", getime.hour, getime.min, getime.sec);
}	//chapter 12.1 programming exercise 1.b

#include <stdio.h>

struct stock
{
	char name[100];
	int expincome;
	float rate;
}n1, n2, n3, n4, n5;
int main()
{
	int option;
	struct stock n1;
	printf("enter a stock name: ");
	scanf("%s", &n1.name);
	printf("enter a expectation income: ");
	scanf("%d", &n1.expincome);
	printf("enter a rate: ");
	scanf("%f", &n1.rate);

	struct stock n2;
	printf("\nenter a stock name: ");
	scanf("%s", &n2.name);
	printf("enter a expectation income: ");
	scanf("%d", &n2.expincome);
	printf("enter a rate: ");
	scanf("%f", &n2.rate);

	struct stock n3;
	printf("\nenter a stock name: ");
	scanf("%s", &n3.name);
	printf("enter a expectation income: ");
	scanf("%d", &n3.expincome);
	printf("enter a rate: ");
	scanf("%f", &n3.rate);

	struct stock n4;
	printf("\nenter a stock name: ");
	scanf("%s", &n4.name);
	printf("enter a expectation income: ");
	scanf("%d", &n4.expincome);
	printf("enter a rate: ");
	scanf("%f", &n4.rate);

	struct stock n5;
	printf("\nenter a stock name: ");
	scanf("%s", &n5.name);
	printf("enter a expectation income: ");
	scanf("%d", &n5.expincome);
	printf("enter a rate: ");
	scanf("%f", &n5.rate);

	printf("which stock do you want to see?: ");
	scanf("%d", &option);
	switch (option)
	{
	case 1:
		printf("%s: %f\n", n1.name, n1.expincome*n1.rate);
		break;
	case 2:
		printf("%s: %f\n", n2.name, n2.expincome*n2.rate);
		break;
	case 3:
		printf("%s: %f\n", n3.name, n3.expincome*n3.rate);
		break;
	case 4:
		printf("%s: %f\n", n4.name, n4.expincome*n4.rate);
		break;
	case 5:
		printf("%s: %f\n", n5.name, n5.expincome*n5.rate);
		break;
	}
	return 0;
}	//chapter 12.1 programming exercise 2

#include <stdio.h>

struct
{
	int hour;
	int min;
}time;
int main()
{
	printf("enter a hour and minute: ");
	scanf("%d%d", &time.hour, &time.min);
	time.min = (time.hour * 60) + time.min;
	printf("total minute: %dminutes\n", time.min);
	return 0;
}	//chapter 12.1 programming exercise 3.a

#include <stdio.h>

struct
{
	int hour;
	int min;
}time;
int main()
{
	printf("enter a hour and minute: ");
	scanf("%d%d", &time.hour, &time.min);
	time.min++;
	if (time.min == 60)
	{
		time.min = 0;
		time.hour++;
	}
	printf("%d:%d\n", time.hour, time.min);
	return 0;
}	//chapter 12.1 programming exercise 3.b

#include <stdio.h>
#include <stdlib.h>
#define numrecs 12
struct get
{
	char month[20];
};
int main()
{
	struct get month[numrecs]= { "jan", "feb", "mar","apr", "may", "jun", "jul", "aug", "sep", "oct", "nov", "dec" };
	int mon, day, num = 0;
	printf("enter a month and day: ");
	scanf("%d%d", &mon, &day);
	while (1)
	{
		if (mon > 12 || day > 30)
		{
			printf("the month is between 1 to 12 and the day is between 1 to 30, rewrite: ");
			scanf("%d%d", &mon, &day);
		}
		break;
	}
	if (day == 30)
	{
		mon++;
		day = 0;
	}
	day++;
	while (num <= 12)
	{
		if (mon == num)
		{
			printf("tomorrow is %d, %s", day, month[num - 1].month);
			exit(1);
		}
		else
			num++;
	}
	return 0;
}	//chapter 12.1 programming exercise 4.a

#include <stdio.h>
#define numrecs 5
struct payrecords
{
	int id;
	char name[20];
	float rate;
};

int main()
{
	int i;
	struct payrecords employee[numrecs] = { {32479,"abrams, b.",6.72},{33623,"bohm, p.",7.54},
											{34145,"donaldson, s.",5.56},{35987,"ernst, t.",5.43},{36203, "gwodz, k.",8.72} };
	for (i = 0; i < numrecs; i++)
		printf("%d %-13s %4.2f\n", employee[i].id, employee[i].name, employee[i].rate);
	return 0;
}	//program 12.3

#include <stdio.h>
#define numel 500
struct record
{
	char name[20];
	int license_num;
	float boat_len;
	char parklot_num[20];
};
int main()
{
	struct record boat[numel];
}	//chapter 12.2 exercise 1

#include <stdio.h>
#define numel 100

struct stu1
{
	int hakbeon;
	int hakjeom;
	float hakjeomavg;
};
struct stu2
{
	char name[100];
	char birth[100];
	int hakjeom;
	float hakjeomavg;
};
struct mail
{
	char name[100];
	char type[100];
	char location[100];
	int strength;
	int intelligence;
	char typeofdef[100];
};
struct stock
{
	char stockname[100];
	float stockprice;
	char buydate[100];
};
struct inven
{
	int part;
	char partinfo[100];
	char partnum[100];
	int ordernum;
};
int main()
{
	struct stu1 info[numel];
	struct stu2 info[numel];
	struct mail info[numel];
	struct stock info[numel];
	struct inven info[numel];
}	//chapter 12.2 exercise 2

#include <stdio.h>
#define numel 12
struct monthdays
{
	char name[10];
	int days;
};
int main()
{
	struct monthdays convert[numel] = { {"jan",31}, {"feb",28}, {"mar",31},{"apr",30}, {"may",31}, {"jun",30},
										{"jul",31},	{"aug",31}, {"sep",30}, {"oct",31}, {"nov",30}, {"dec",31} };
}	//chapter 12.2 exercise 3

#include <stdio.h>
#define numel 12
struct monthdays
{
	char name[10];
	int days;
};
int main()
{
	struct monthdays convert[numel] = { {"january",31}, {"feburay",28}, {"march",31},{"april",30}, {"may",31}, {"june",30},
										{"july",31}, {"august",31}, {"september",30}, {"october",31}, {"november",30}, {"december",31} };
	int i;
	for (i = 0; i < numel; i++)
		printf("%ddays in %s\n", convert[i].days, convert[i].name);
}	//chapter 12.2 programming exercise 1

#include <stdio.h>
#define numel 12
struct monthdays
{
	char name[20];
	int days;
};
int main()
{
	struct monthdays convert[numel] = { {"일",31}, {"이",28}, {"삼",31}, {"사",30}, {"오",31}, {"육",30},
										{"칠",31}, {"팔",31}, {"구",30}, {"십",31}, {"십일",30}, {"십이",31} };
	int i = 0, month, num = 1;
	printf("월을 입력하세요: ");
	scanf("%d", &month);
	while (i < 12)
	{
to:		if (month != num)
		{
			i++;
			num++;
			goto to;
		}
		else
		{
			printf("%s월은 %d일로 구성된다.", convert[i].name, convert[i].days);
			break;
		}
	}
	return 0;
}	//chapter 12.2 programming exercise 2

#include <stdio.h>
#define numel 6
struct company
{
	int idnum;
	char name[20];
	float rate;
	float worktime;
};
int main()
{
	struct company info[numel] = { {3462,"jones",4.62,40.0},{6793,"robbins",5.83,38.5},{6985,"smith",5.22,45.5},
								{7834,"swain",6.89,40.0},{8867,"timmins",6.43,35.5},{9002,"williams",4.75,42.0} };
	int i;
	float total = 0;
	printf("name\t  idnum\tsalary\n");
	for (i = 0; i < numel; i++)
	{
		printf("%-10s %d %4.2f\n", info[i].name, info[i].idnum, (info[i].rate*info[i].worktime));
		total = total + (info[i].rate*info[i].worktime);
	}
	printf("\ntotal salary: %4.2f\n", total);
	return 0;
}	//chapter 12.2 programming exercise 3

#include <stdio.h>
#define numel 5

struct car
{
	int rate;
	int km;
	int fuel;
};

int main()
{
	struct car fuel_economy[numel] = { {25,1450,62},{34,3240,136},{44,1792,76},{52,2360,105},{68,2114,67} };
	int i, total = 0;
	printf("\tvehicle management report\n");
	printf("-----------------------------------------\n");
	printf("car num \t\t\t     km/l\n");
	for (i = 0; i < numel; i++)
	{
		printf("%d %38d\n", fuel_economy[i].rate, (fuel_economy[i].km / fuel_economy[i].fuel));
		total += (fuel_economy[i].km / fuel_economy[i].fuel);
	}
	printf("total fuel economy: %d\n", total);
	return 0;
}	//chapter 12.2 programming exercise 4

#include <stdio.h>
#define numel 10
int main()
{
	int idnum[numel];
	float rate[numel];
	int i, j;
	float max = 0, temp;
	for (i = 0; i < numel; i++)
	{
		printf("enter idnum: ");
		scanf("%d", &idnum[i]);
	}
	for (i = 0; i < numel; i++)
	{
		printf("enter rate: ");
		scanf("%f", &rate[i]);
	}
	for (i = 0; i < numel; i++)
	{
		if (max < rate[i])
			max = idnum[i - 1];
	}
	for (i = 1; i < numel; i++)
	{
		for (j = 0; j < numel - 1; j++)
		{
			if (rate[j] < rate[j + 1])
			{
				temp = rate[j];
				rate[j] = rate[j + 1];
				rate[j + 1] = temp;
			}
		}
	}
	printf("id num\trate(내림차순)\n");
	for (i = 0; i < numel; i++)
		printf("%d\t%4.2f\n",idnum[i], rate[i]);
	printf("idnum(max rate): %.0f", max);
	return 0;
}	//chapter 12.2 programming exercise 5

#include <stdio.h>

struct employee
{
	int idnum;
	double payrate;
	double hours;
};
double calcnet(struct employee);
int main()
{
	struct employee info = { 6787,8.93,40.5 };
	double netpay;
	netpay = calcnet(info);
	printf("the net pay of employee %d is $%.2f", info.idnum, netpay);
	return 0;
}
double calcnet(struct employee calc)
{
	return calc.payrate*calc.hours;
}	//program 12.4

#include <stdio.h>

struct employee
{
	int idnum;
	double payrate;
	double hours;
};
double calcnet(struct employee *);
int main()
{
	struct employee info = { 6787,8.93,40.5 };
	double netpay;
	netpay = calcnet(&info);
	printf("the net pay of employee %d is $%.2f", info.idnum, netpay);
	return 0;
}
double calcnet(struct employee *calc)
{
	return calc->hours*calc->payrate;
}	//program 12.5

#include <stdio.h>

struct employee
{
	int idnum;
	double payrate;
	double hours;
};
struct employee getvalues();
int main()
{
	struct employee info;
	info = getvalues();
	printf("the employee id number is %d\n",info.idnum);
	printf("the employee pay rate is $%.2f\n",info.payrate);
	printf("the employee hours are %.2f\n",info.hours);
}
struct employee getvalues()
{
	struct employee newemp;
	newemp.idnum = 6789;
	newemp.payrate = 16.25;
	newemp.hours = 38.00;
	return newemp;
}	//program 12.6

#include <stdio.h>

struct holidays
{
	int year;
	int month;
	int day;
};
int main()
{
	struct holidays chart[15];
}	//chapter 12.3 exercise 1

#include <stdio.h>

struct date
{
	int month;
	int day;
	int year;
};
int days(struct date, int);
int main()
{
	struct date get = { 12,29,1989 };
	int enteryear, result;
	printf("enter the year in centuries, the month and the day are fixed as 1\n");
	scanf("%d", &enteryear);
	printf("entered date: 1/1/%d is %d century\n", enteryear, enteryear / 100 + 1);
	printf("comparison day: %d/%d/%d is %d century\n", get.month, get.day, get.year, get.year / 100 + 1);
	result = days(get, enteryear);
	return 0;
}
int days(struct date get, int enteryear)
{
	int calcday = 0, calcmon = 0, calcyear = 0;
	if (get.year < enteryear)
	{
		if (enteryear - get.year <= 1)
		{
			if (get.day > 30)
			{
				get.day = 1;
				get.month++;
				if (get.month > 12)
					get.month = 1;
			}
			else
				while (get.day < 31)
				{
					get.day++;
					calcday++;
				}
		}
		else
		{
			if (get.day > 30)
			{
				get.day = 1;
				get.month++;
				if (get.month > 12)
				{
					get.month = 1;
					get.year++;
				}
			}
			else
				while (get.day < 31)
				{
					get.day++;
					calcday++;
				}
			calcyear = enteryear - get.year - 1;
		}
	}
	else
	{
		calcyear = get.year - enteryear;
		calcmon = get.month - 1;
		calcday = get.day - 1;
	}
	printf("%d years, %d months, %d days later\n", calcyear, calcmon, calcday);
	return 0;
}	//chapter 12.3 programming eexerecise 1, 2

#include <stdio.h>

struct date
{
	int month;
	int day;
	int year;
};
int days(struct date *, int);
int main()
{
	struct date get = { 12,29,1989 };
	int enteryear, result;
	printf("enter the year in centuries, the month and the day are fixed as 1\n");
	scanf("%d", &enteryear);
	printf("entered date: 1/1/%d is %d century\n", enteryear, enteryear / 100 + 1);
	printf("comparison day: %d/%d/%d is %d century\n", get.month, get.day, get.year, get.year / 100 + 1);
	result = days(&get, enteryear);
	return 0;
}
int days(struct date *get, int enteryear)
{
	int calcday = 0, calcmon = 0, calcyear = 0;
	if (get->year < enteryear)
	{
		if (enteryear - get->year <= 1)
		{
			if (get->day > 30)
			{
				get->day = 1;
				get->month++;
				if (get->month > 12)
					get->month = 1;
			}
			else
				while (get->day < 31)
				{
					get->day++;
					calcday++;
				}
		}
		else
		{
			if (get->day > 30)
			{
				get->day = 1;
				get->month++;
				if (get->month > 12)
				{
					get->month = 1;
					get->year++;
				}
			}
			else
				while (get->day < 31)
				{
					get->day++;
					calcday++;
				}
			calcyear = enteryear - get->year- 1;
		}
	}
	else
	{
		calcyear = get->year- enteryear;
		calcmon = get->month - 1;
		calcday = get->day - 1;
	}
	printf("%d years, %d months, %d days later\n", calcyear, calcmon, calcday);
	return 0;
}	//chapter 12.3 programming exercise 3

#include <stdio.h>

struct date
{
	int month;
	int day;
	int year;
};
struct date larger(struct date, struct date);
int main()
{
	struct date fir;
	struct date sec;
	struct date result;
	printf("enter first date(month/day/year): ");
	scanf("%d/%d/%d", &fir.month, &fir.day, &fir.year);
	printf("enter second date(month/day/year): ");
	scanf("%d/%d/%d", &sec.month, &sec.day, &sec.year);
	result = larger(fir, sec);
	printf("%d/%d/%d", result.month, result.day, result.year);
}
struct date larger(struct date first,struct date second)
{
	if (first.year > second.year)
		return first;
	else
		return second;
}	//chapter 12.3 programming exercise 4

#include <stdio.h>
#include <stdlib.h>

struct holidays
{
	int month;
	int day;
	int year;
};

int main()
{
	struct holidays input;
	FILE *fp;
	fp = fopen("holidays.txt", "r");
	int i;
	if (fp == NULL)
	{
		printf("holidays.txt file is not exists.");
		exit(1);
	}
	while (fscanf(fp, "%d/%d/%d", &input.month, &input.day, &input.year) != EOF)
		printf("%d/%d/%d\n", input.month, input.day, input.year);
	fclose(fp);
	return 0;
}	//chpater 12.3 programming exercise 6

#include <stdio.h>

union
{
	double rate;
	double taxes;
	int num;
}flag;
int main()
{
	flag.rate = 3.5;
	printf("the rate is %f", flag.rate);
	flag.taxes = 7.6;
	printf("\nthe taxes are %f", flag.taxes);
	flag.num = 5;
	printf("\nthe number is %d", flag.num);
	return 0;
}	//chapter 12.4 exercise 1

#include <stdio.h>

union
{
	int year;
	char name[10];
	char model[10];
}car;	//2

union
{
	float interest;
	float rate;
}lang;	//3

union
{
	int intamt;
	double dblname;
	char *ptkey;
}amt;	//4
//chapter 12.4 exercise 2,3,4