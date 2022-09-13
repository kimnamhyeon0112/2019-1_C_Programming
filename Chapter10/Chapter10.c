#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *infile;
	infile = fopen("prices.dat", "r");	//prices.dat라는 파일을 읽기모드로 여는 명령문장
	if (infile == NULL)					//만약 해당 파일이 존재하지 않으면 null이 반환된다
	{
		printf("the file was not successfully opened.\n");			//file이 생성되지 않았으므로 이 멘트가 출력된다
		printf("please check that the file currently exists.\n");
		exit(1);
	}
	printf("the file has been successfully opened for reading.");	//file을 w모드로 바꾸면 file이 생성되고 이 멘트가 출력된다
																	//또한 file이 생성되었으므로 r모드로 바꿔도 이 멘트가 출력된다.
											//이 컴퓨터 기준 prices.dat의 위치는 c:\users\knh30\source\repos\project20\project20 이다
	return 0;
}	//program 10.1

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char responses;
	FILE *outfile;
	outfile = fopen("prices.dat", "r");
	if (outfile != NULL)
	{
		printf("a file by the name prices.dat exists.\n");
		printf("do you want to continue and overwrite it\n");
		printf("with the new data (y or n): ");
		scanf("%c", &responses);
		if (responses == 'n')
		{
			printf("the existing file will not be overwritten.");
			exit(1);
		}
	}
	outfile = fopen("prices.dat", "w");
	if (outfile == NULL)
	{
		printf("the file was not successfully opened.\n");
		printf("please check that the file currently exists.");
		exit(1);
	}
	printf("the file has been successfully opened for output.");
}	//program 10.2

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char filename[] = "prices.dat";
	if ((fp = fopen(filename, "r")) == NULL)
	{
		printf("the file \"%s\" was not successfully opened", filename);
		printf("\nplease check that the file currently exists.");
		exit(1);
	}
	printf("the file has been successfully opened for reading");
	return 0;
}	//program 10.3a

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char filename[100];
	printf("enter the file name: ");
	gets(filename);
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		printf("%s file is not exist", filename);
		exit(1);
	}
	else
		printf("%s file is successfully opened", filename);
	return 0;
}	//program 10.3b

#include <stdio.h>

int main()
{
	FILE *memo;
	memo = fopen("book.mem", "w");
	FILE *letter;
	letter = fopen("book.let", "w");
	FILE *coups;
	coups = fopen("coupons.bnd", "a");
	FILE *yield;
	yield = fopen("yield.bnd", "a");
	FILE *prifile;
	prifile = fopen("prices.dat", "r");
	FILE *rates;
	rates = fopen("rates.dat", "r");
}	//exercise 10.1 q1

#include <stdio.h>

int main()
{
	FILE *data;
	data = fopen("data.txt", "r");
	FILE *prices;
	prices = fopen("prices.txt", "r");
	FILE *coupons;
	coupons = fopen("coupons.dat", "r");
	FILE *exper;
	exper = fopen("exper.dat", "r");
}	//exercise 10.1 q2a

#include <stdio.h>

int main()
{
	FILE *data = fopen("data.txt", "r");
	FILE *prices = fopen("prices.txt", "r");
	FILE *coupons = fopen("coupons.dat", "r");
	FILE *exper= fopen("exper.dat", "r");
}	//exercise 10.1 q2.b

#include <stdio.h>

int main()
{
	FILE *data;
	data = fopen("data.txt", "w");
	FILE *prices;
	prices = fopen("prices.txt", "w");
	FILE *coupons;
	coupons = fopen("coupons.dat", "w");
	FILE *exper;
	exper = fopen("exper.dat", "w");
}	//exercise 10.1 q3.a

#include <stdio.h>

int main()
{
	FILE *data = fopen("data.txt", "w");
	FILE *prices = fopen("prices.txt", "w");
	FILE *coupons = fopen("coupons.dat", "w");
	FILE *exper = fopen("exper.dat", "w");
}	//exercise 10.1 q3.b

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *infile;
	infile = fopen("prices.dat", "r");
	if (infile == NULL)
	{
		printf("the file was not successfully opened.\n");
		printf("please check that the file currently exists.\n");
		exit(1);
	}
	printf("the file has been successfully opened for reading.");
	return 0;
}	//chapter 10.1 programming exercise 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char responses;
	FILE *outfile;
	outfile = fopen("prices.dat", "r");
	if (outfile != NULL)
	{
		printf("a file by the name prices.dat exists.\n");
		printf("do you want to continue and overwrite it\n");
		printf("with the new data (y or n): ");
		scanf("%c", &responses);
		if (responses == 'n')
		{
			printf("the existing file will not be overwritten.");
			exit(1);
		}
	}
	outfile = fopen("prices.dat", "w");
	if (outfile == NULL)
	{
		printf("the file was not successfully opened.\n");
		printf("please check that the file currently exists.");
		exit(1);
	}
	printf("the file has been successfully opened for output.");
}	//chapter 10.1 programming exercise 2

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char filename[] = "prices.dat";
	if ((fp = fopen(filename, "r")) == NULL)
	{
		printf("the file \"%s\" was not successfully opened", filename);
		printf("\nplease check that the file currently exists.");
		exit(1);
	}
	printf("the file has been successfully opened for reading");
	return 0;
}	//chapter 10.1 programming exercise 3.a

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char filename[] = "prices.dat";
	if ((fp = fopen(filename, "r")) == NULL)
	{
		printf("the file \"%s\" was not successfully opened", filename);
		printf("\nplease check that the file currently exists.");
		exit(1);
	}
	printf("the file has been successfully opened for reading");
	fclose(fp);
	return 0;
}	//chapter 10.1 programming exercise 3.b

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char filename[100];
	printf("enter the file name: ");
	gets(filename);
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		printf("%s file is not exist", filename);
		exit(1);
	}
	else
		printf("%s file is successfully opened", filename);
	return 0;
}	//chapter 10.1 programming exercise 4.a

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char filename[100];
	printf("enter the file name: ");
	gets(filename);
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		printf("%s file is not exist", filename);
		exit(1);
	}
	else
		printf("%s file is successfully opened", filename);
	fclose(fp);
	return 0;
}	//chapter 10.1 programming exercise 4.b

#include <stdio.h>

int main()
{
	FILE *memo;
	memo = fopen("coba.mem", "w+");
	FILE *coups;
	coups = fopen("coupons.bnd", "a+");
	FILE *prifile;
	prifile = fopen("prices.dat", "r+");
	return 0;
}	//chapter 10.1 programming exercise 5

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	int i;
	double price[] = { 39.25,3.22,1.03 };
	char *descrip[] = { "batteries","bulbs","fuses" };
	fp = fopen("prices.dat", "w");
	if (fp == NULL)
	{
		printf("\nfailed to open the file.\n");
		exit(1);
	}
	for (i = 0; i < 3; i++)
		fprintf(fp, "%-9s %.2f\n", descrip[i], price[i]);
	fclose(fp);
	return 0;
}	//program 10.4

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	int i;
	double price[] = { 39.25,3.22,1.03 };
	char *descrip[] = { "batteries","bulbs","fuses" };
	fp = fopen("prices.dat", "w");
	if (fp == NULL)
	{
		printf("\nfailed to open the file.\n");
		exit(1);
	}
	for (i = 0; i < 3; i++)
	{
		fprintf(fp, "%s %.2f\n", descrip[i], price[i]);
	}
	fputc('e', fp);
	fputs("nd", fp);
	fclose(fp);
	return 0;
}	//program 10.4 변형문제

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *infile;
	char descrip[10];
	float price;
	infile = fopen("text.dat", "r");
	if (infile == NULL)
	{
		printf("\nfailed to open the file.\n");
		exit(1);
	}
	while (fscanf(infile, "%s %f", &descrip, &price) != EOF)
		printf("%s %.2f\n", descrip, price);
	fclose(infile);
	return 0;
}	//program 10.5

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *infile;
	float price;
	char line[2], descrip[10];
	infile = fopen("prices.dat", "r");
	if (infile == NULL)
	{
		printf("\nfailed to open the file.\n");
		exit(1);
	}
	while (fgets(line, 2, infile) != NULL)
		printf("%s", line);
	fclose(infile);
	printf("\nthe file has been successfully written.\n");
	return 0;
}	//program 10.6

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char str[100];
	int i = 0;
	printf("enter some string: ");
	fp = fopen("text.dat", "w");
	gets(str);
	fputs(str, fp);
	if (fp == NULL)
	{
		printf("failed to open the file");
		exit(1);
	}
	fclose(fp);
	return 0;
}	//chapter 10.2 programming exercise 1.a

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char str[100];
	char line[100];
	int i = 0;
	fp = fopen("text.dat", "r");
	while (fgets(line, 100, fp) != NULL)
		printf("%s", line);
	if (fp == NULL)
	{
		printf("failed to open the file");
		exit(1);
	}
	fclose(fp);
	return 0;
}	//chapter 10.2 programming exercise 1.b

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *infile;
	float price;
	char line[2], descrip[10];
	infile = fopen("text.dat", "r");
	if (infile == NULL)
	{
		printf("\nfailed to open the file.\n");
		exit(1);
	}
	while (fgets(line, 2, infile) != NULL)
		printf("%s", line);
	fclose(infile);
	printf("\nthe file has been successfully written.\n");
	return 0;
}	//chapter 10.2 programming exercise 1.c

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	int i;
	char *name[] = { "anthony","burrows","fain","janney","smith" };
	char *nickname[] = { "a.j.","w.k." ,"b.d." ,"p." ,"g.j." };
	int clientnum[] = { 10031,10067 ,10083 ,10095 ,10105 };
	float rate[] = { 7.82,9.14, 8.79, 10.57, 8.50 };
	char *birthday[] = { "12/18/62","6/9/63", "5/18/59", "9/28/62", "12/20/61" };
	fp = fopen("employee.dat", "w");
	if (fp == NULL)
	{
		printf("failed to open the file.\n");
		exit(1);
	}
	for (i = 0; i < 5; i++)
		fprintf(fp, "%-7s %3s %5d %-4.2f %8s\n", name[i], nickname[i], clientnum[i], rate[i], birthday[i]);
	printf("text is successfully recorded");
	fclose(fp);
	return 0;
}	//chapter 10.2 programming exercise 3.a

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp, *fcopy;
	int i;
	char str[100];
	char line[100];
	fp = fopen("employee.dat", "r");
	if (fp == NULL)
	{
		printf("failed to open the file.\n");
		exit(1);
	}
	fcopy = fopen("employee.bak", "w");
	while (fgets(line, 100, fp) != NULL)
		fputs(line, fcopy);
	fclose(fp);
	fclose(fcopy);
	return 0;
}	//chapter 10.2 programming exercise 3.b

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp1, *fp2;
	char fname[100], sname[100];
	char line[100];
	printf("enter file name to copy: ");
	scanf("%s", fname);
	fp1 = fopen(fname, "r");
	if (fp1 == NULL)
	{
		printf("failed to open the file.\n");
		exit(1);
	}
	printf("enter file name to paste: ");
	scanf("%s", sname);
	fp2 = fopen(sname, "w");
	if (fp2 == NULL)
	{
		printf("failed to open the file.\n");
		exit(1);
	}
	while (fgets(line, 100, fp1) != NULL)
		fputs(line, fp2);
	fclose(fp1);
	fclose(fp2);
	printf("succeed!");
	return 0;
}	//chapter 10.2 programming exercise 3.c

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char str[100];
	int line = 1;
	fp = fopen("test.dat", "r");
	if (fp == NULL)
	{
		printf("failed to open the file.\n");
		exit(1);
	}
	while (fgets(str, 100, fp) != NULL)
	{
		printf("%d. %s", line, str);
		line++;
	}
	fclose(fp);
}	//chapter 10.2 programming exercise 4

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char *name[] = { "h.baker", "d.rosso", "k.tims", "b.williams" };
	char *address[] = { "614 freeman st.", "83 chambers st.", "891 ridgewood rd.", "24 tremont ave." };
	char *city[] = { "orange", "madison", "millburn", "brooklyn" };
	char *state[] = { "nj", "nj" ,"nj" ,"ny" };
	int i;
	fp= fopen("address.dat", "w");
	for (i = 0; i < 4; i++)
		fprintf(fp, "%s %s %s %s\n", name[i], address[i], city[i], state[i]);
	fclose(fp);
	return 0;
}	//chapter 10.2 programming exercise 5.a

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char *name[] = { "h.baker", "d.rosso", "k.tims", "b.williams" };
	char *address[] = { "614 freeman st.", "83 chambers st.", "891 ridgewood rd.", "24 tremont ave." };
	char *city[] = { "orange", "madison", "millburn", "brooklyn" };
	char *state[] = { "nj", "nj" ,"nj" ,"ny" };
	int i;
	fp= fopen("address.dat", "w");
	fprintf(fp,"name: ");
	for (i = 0; i < 4; i++)
		fprintf(fp, "%s, ", name[i]);
	fprintf(fp,"\naddress: ");
	for (i = 0; i < 4; i++)
		fprintf(fp, "%s, ", address[i]);
	fprintf(fp,"\ncity, state: ");
	for (i = 0; i < 4; i++)
		fprintf(fp, "%s %s, ", city[i], state[i]);
	fclose(fp);
	return 0;
}	//chapter 10.2 programming exercise 5.b

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char *name[] = { "b.caldwell","d.memcheck" ,"r.potter" ,"w.rosen" };
	char *idnum[] = { "555-98-4182","555-53-2147" ,"555-32-9826" ,"555-09-4263" };
	float workrate[] = { 7.32,8.32,6.54,9.80 };
	int worktime[] = { 37,40,40,35 };
	int i;
	fp = fopen("workreport.dat", "w");
	if (fp == NULL)
	{
		printf("failed to open the file.\n");
		exit(1);
	}
	for (i = 0; i < 4; i++)
		fprintf(fp, "%s %s %.2f %d\n", name[i], idnum[i], workrate[i], worktime[i]);
	fclose(fp);
}	//chapter 10.2 programming exercise 6.a

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char line[100];
	char name[100], idnum[100];
	float rate;
	int time;
	fp = fopen("workreport.dat", "r");
	while (fgets(line, 100, fp) != NULL)
	{
		sscanf(line, "%s %s %f %d", name, idnum, &rate, &time);
		printf("%s %s $%.2f\n", idnum, name, rate * time);
	}
	fclose(fp);
}	//chapter 10.2 programming exercise 6,b

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	int carnum[] = { 54,62,71,85,97 };
	int distance[] = { 250,525,123,1322,235 };
	int usedfuel[] = { 19,38,6,86,14 };
	fp = fopen("car.dat", "w");
	if (fp == NULL)
	{
		printf("can't open this file");
		exit(1);
	}
	for (int i = 0; i < 5; i++)
		fprintf(fp, "%d %d %d\n", carnum[i], distance[i], usedfuel[i]);
	fclose(fp);
	return 0;
}	//chapter 10.2 programming exercise 6,b

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char line[100];
	int carnum;
	float distance, usedfuel, avg, totfuel = 0, totdis = 0, totavg = 0;
	fp = fopen("car.dat", "r");
	while (fgets(line, 100, fp) != NULL)
	{
		sscanf(line, "%d %f %f", &carnum, &distance, &usedfuel);
		avg = distance / usedfuel;
		printf("%d %.0f %.0f\t-> %.2f\n", carnum, distance, usedfuel, avg);
		totdis += distance;
		totfuel += usedfuel;
		totavg += avg;
	}
	printf("total distance: %.0fkm\ntotal used fuel: %.0fl\n", totdis, totfuel);
	printf("average liter per distance: %.2fkm/l", totavg / 5);
	fclose(fp);
}	//chapter 10.2 programming exercise 7.b

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char *ordernum[] = { "qa310","cm145","ms514","en212" };
	int origin[] = { 95,320,34,163 };
	int sold[] = { 47,162,20,150 };
	int stock[] = { 50,200,25,160 };
	int i;
	fp = fopen("market.dat", "w");
	if (fp == NULL)
	{
		printf("can't open this file.");
		exit(1);
	}
	for (i = 0; i < 4; i++)
		fprintf(fp, "%s %d %d %d\n", ordernum[i], origin[i], sold[i], stock[i]);
	fclose(fp);
}	//chapter 10.2 programming exercise 8.a

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char line[100];
	char name[100];
	int origin, sold, stock, now;
	fp = fopen("market.dat", "r");
	while (fgets(line, 100, fp) != NULL)
	{
		sscanf(line, "%s %d %d %d", name, &origin, &sold, &stock);
		now = origin - sold;
		printf("%s %d %d\n", name, now, stock - now);
	}
	fclose(fp);
}	//chapter 10.2 programming exercise 8.b

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char *name[] = { "callaway,g.","hanson.p." ,"lasard,d." ,"stillman,w." };
	float rate[] = { 6.00,5.50,6.50,8.00 };
	int time[] = { 40,48,35,50 };
	int i;
	fp = fopen("salary.dat", "w");
	if (fp == NULL)
	{
		printf("can't open this file");
		exit(1);
	}
	for (i = 0; i < 4; i++)
		fprintf(fp, "%s %.2f %d\n", name[i], rate[i], time[i]);
	fclose(fp);
}	//chapter 10.2 programming exercise 9.a

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char line[100];
	char name[100];
	float rate, time, normalfee = 0, overtime = 0, total = 0;
	fp = fopen("salary.dat", "r");
	printf("이름\t    비율\t시간\t일반수당\t시간외수당\t총임금\n");
	while (fgets(line, 100, fp) != NULL)
	{
		sscanf(line, "%s %f %f", name, &rate, &time);
		if (time <= 40)
			normalfee = rate * time;
		else
		{
			normalfee = (rate * 40);
			overtime = (rate * 1.5) * (time - 40);
		}
		total = normalfee + overtime;
		printf("%-11s %4.2f %9.0f %8.0f %15.0f %15.0f\n", name, rate, time, normalfee, overtime, total);
	}
	fclose(fp);
}	//chapter 10.2 programming exercise 9.b

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp = fopen("numbers.dat", "w");
	int num[] = { 5,96,87,78,93,21,4,92,82,85,87,6,72,69,85,75,81,73 };
	int i;
	for (i = 0; i < 18; i++)
		fprintf(fp, "%d ", num[i]);
	fclose(fp);
}	//chapter 10.2 programming exercise 10.a

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	int ch, n;
	long int offset, last;
	fp = fopen("text.dat", "r");
	if (fp== NULL)
	{
		printf("failed to open the text.dat file");
		exit(1);
	}
	fseek(fp, 0l, SEEK_END);	//포인터의 위치를 text.dat의 끝으로 이동후 이동을 하지 않으므로 파일 끝에 위치함
	last = ftell(fp);			//포인터가 끝에 있으므로 last는 text.dat의 파일크기와 동일함
	for (offset = 0; offset <= last; offset++)	//오프셋을 파일끝까지 반복
	{
		fseek(fp, -offset, SEEK_END);	//포인터를 파일의 끝에서 앞으로 한칸씩 전진
		ch = getc(fp);					//파일에 저장된 글자를 한글자씩 출력(파일 끝에서부터 출력하므로 역순으로 출력됨)
		switch (ch)
		{
		case '\n':printf("lf: ");
			break;
		case EOF:printf("eof: ");
			break;
		default:printf("%c: ", ch);
			break;
		}
	}
}	//program 10.7

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	int ch, n;
	long int offset, last;
	fp = fopen("text.dat", "r");
	if (fp == NULL)
	{
		printf("failed to open the text.dat file");
		exit(1);
	}
	fseek(fp, 5l, SEEK_SET);
	last = ftell(fp);
	for (offset = 0; offset <= last; offset++)
	{
		fseek(fp, -offset, SEEK_END);
		ch = getc(fp);
		switch (ch)
		{
		case '\n':printf("lf: ");
			break;
		case EOF:printf("eof: ");
			break;
		default:printf("%c: ", ch);
			break;
		}
	}
}	//chapter 10.3 programming exercise 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	int ch, n;
	long int offset, last;
	fp = fopen("text.dat", "r");
	if (fp == NULL)
	{
		printf("failed to open the text.dat file");
		exit(1);
	}
	fseek(fp, 0l, SEEK_END);
	last = ftell(fp);
	for (offset = 0; offset <= last; offset++)
	{
		fseek(fp, -offset, SEEK_END);
		ch = getc(fp);
		switch (ch)
		{
		case '\n':printf("lf: ");
			break;
		case EOF:printf("eof: ");
			break;
		default:printf("%c: ", ch);
			break;
		}
	}
	if (offset = SEEK_END)
		printf("\n0");
	else
		printf("\n1\nerror");
}	//chapter 10.3 programming exercise 2

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	int i;
	long int last;
	int ch;
	fp = fopen("test.dat", "r");
	fseek(fp, 0l, SEEK_END);
	last = ftell(fp);
	for (i = last; i >= 1; i--)
	{
		fseek(fp, -i, SEEK_END);
		ch = getc(fp);
		switch (ch)
		{
		case '\n':printf("\n ");
			break;
		case ' ':printf("space: ");
			break;
		case EOF:printf("eof: ");
			break;
		default:printf("%c: ", ch);
			break;
		}
	}
}	//chapter 10.3 programming exercise 3

#include <stdio.h>
#include <stdlib.h>
void totchars(FILE *);
int main()
{
	FILE *fp;
	fp = fopen("text.dat", "r");
	totchars(fp);
}
void totchars(FILE *fp)
{
	long int last;
	fseek(fp, 0l, SEEK_END);
	last = ftell(fp);
	printf("%d", last);
}	//chapter 10.3 programming exercise 4

#include <stdio.h>
#include <stdlib.h>
void readbytes(FILE *, int, int);
int main()
{
	FILE *fp = fopen("hello.dat", "r");
	int byte, cursor;
	printf("cursor location set: ");
	scanf("%d", &cursor);
	printf("how many bytes you read: ");
	scanf("%d", &byte);
	readbytes(fp, cursor, byte);
	return 0;
}
void readbytes(FILE *fp, int offset, int num)
{
	char line[10] = { 0, };	//배열을 0으로 초기활 할땐 {0,}로 표기한다 문자열에서 쓰레기값이 나올때 배열을 0으로 초기화해주면 된다.
	fseek(fp, offset, SEEK_SET);
	fread(line, num, 1, fp);
	printf("result: %s\n", line);
}	//chapter 10.3 programming exercise 5

#include <stdio.h>
#include <stdlib.h>

void printline(FILE *, int);
int main()
{
	FILE *fp;
	int line;
	char filename[100];
	printf("enter the filename: ");
	scanf("%s", filename);
	fp = fopen(filename, "r");
	printf("enter the line you want to print: ");
	scanf("%d", &line);
	printline(fp, line);
}
void printline(FILE *fp, int n)
{
	char buffer[100];
	int count = 0;
	while (fgets(buffer, 100, fp) != NULL)
	{
		count++;
		if (count == n)
			printf("%s", buffer);
	}
}	//chapter 10.3 programming exercise 6

#include <stdio.h>
#include <stdlib.h>
void inout(FILE *);
int main()
{
	FILE *outfile = fopen("prices.dat", "w");
	if (outfile == NULL)
	{
		printf("failed to open the file.");
		exit(1);
	}
	inout(outfile);
	fclose(outfile);
	printf("\nthe file has been successfully written.");
}
void inout(FILE *fname)
{
	int count;
	char line[81];
	printf("please enter five lines of text: \n");
	for (count = 0; count < 5; count++)
	{
		gets(line);
		fprintf(fname, "%s\n", line);
	}
}	//program 10.8

#include <stdio.h>
#include <stdlib.h>
FILE *getopen();
void inout(FILE *);
int main()
{
	FILE *outfile;
	outfile = getopen();
	inout(outfile);
	if (outfile == NULL)
	{
		printf("failed to open the file.");
		exit(1);
	}
	fclose(outfile);
	printf("the file has been successfully written.");
	return 0;
}
FILE *getopen()
{
	FILE *fname;
	char name[13];
	printf("enter the file name: ");
	gets(name);
	fname = fopen(name, "w");
	if (fname == NULL)
	{
		printf("failed to open the file.");
		exit(1);
	}
	return fname;
}
void inout(FILE *fname)
{
	int count;
	char line[81];
	printf("please enter five ines of text: ");
	for (count = 0; count < 5; count++)
	{
		gets(line);
		fprintf(fname, "%s\n", line);
	}
}	//program 10.9

#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0
int fcheck();
int main()
{
	FILE *fp;
	char name[100];
	if (fcheck() == true)
		printf("this file is exist.");
	else
		printf("this file is not exist.");
}
int fcheck()
{
	FILE *fp;
	char fname[100];
	printf("enter a filename: ");
	gets(fname);
	fp = fopen(fname, "r");
	if (fp == NULL)
		return false;
	else
		return true;
}	//chapter 10.4 programming exercise 1

#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0
int fcheck();
int main()
{
	FILE *fp;
	char name[100];
	if (fcheck() == true)
	{
		printf("this file is exist, ");
		while (fcheck() != true)
		{
			gets(name);
		}
	}
	else
		printf("this file is not exist.");
}
int fcheck()
{
	FILE *fp;
	char fname[100];
	printf("enter a filename: ");
	gets(fname);
	fp = fopen(fname, "r");
	if (fp == NULL)
		return false;
	else
		return true;
}	//chapter 10.4 programming exercise 2

#include <stdio.h>
#include <stdlib.h>
#define holidays 20
int htable[holidays];

int main()
{
	int getholidays();
	int i, numholidays;
	numholidays = getholidays();
	printf("the holiday array contains 15 holidays\n");
	printf("and contains the elements: ");
	for (i = 0; i < numholidays; i++)
		printf("%d\n", htable[i]);
	return 0;
}
int getholidays()
{
	FILE *fp;
	//char holidayfile[] = "c:\\users\\knh30\\source\\repos\\project20\\project20\\holidays.txt";
	int i = 0;
	int mo, day, yr;
	char slash1, slash2;
	fp = fopen("holidays.txt", "r");
	if (fp == NULL)
	{
		printf("failed to open the file.");
		exit(1);
	}
	while (fscanf(fp, "%d%c%d%c%d", &mo, &slash1, &day, &slash2, &yr) != EOF)
		htable[i++] = yr * 10000 + mo * 100 + day;
	fclose(fp);
	return i;
}	//program 10.10

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char response;
	char filename[20] = "prices.bin";
	int num1 = 125, num2 = -125;
	double num3 = 1.08;
	char line[100];
	fp = fopen(filename, "r");
	if (fp != NULL)
	{
		printf("a file by the name %s exists.", filename);
		printf("\ndo you want to continue and overwrite it");
		printf("\n with the new data (y or n): ");
		scanf("%c", &response);
		if (response == 'n')
		{
			printf("the existing file %s will not be overwritten.", filename);
			fclose(fp);
			exit(1);
		}
	}
	fp = fopen(filename, "wb");	//이진파일을 읽거나 쓰려면 모드에 b를 추가해야한다 ex) r->rb, w->wb
	if (fp == NULL)
	{
		printf("failed to open %s file", filename);
		exit(1);
	}
	fwrite(&num1, sizeof(num1), 1, fp);		//텍스트파일은 파일에 입력하려면 fprintf함수를 사용하지만
	fwrite(&num2, sizeof(num2), 1, fp);		//이진파일은 fwrite함수를 사용한다.
	fwrite(&num3, sizeof(num3), 1, fp);		//ex) fprintf(fp, "%d %d", num1, num2) -> fwrite(&num1, sizeof(num1), 1, fp)
	fclose(fp);								//fwrite함수에서 ()안의 각각 매개변수는(변수이름, 변수의 자료형의 크기, 입력횟수, 파일포인터명)이다
	printf("the file %s has successfully been written as a binary file", filename);
	return 0;
}	//program 10.12

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char filename[20] = "prices.bin";
	int num1, num2;
	double num3;
	fp = fopen(filename, "rb");
	if (fp == NULL)
	{
		printf("the file %s was not successfully opened.", filename);
		printf("\nplease check that the file currently exists.");
		exit(1);
	}
	fread(&num1, sizeof(num1), 1, fp);		//텍스트파일은 파일에서 읽어올때 fscanf함수를 사용하지만
	fread(&num2, sizeof(num2), 1, fp);		//이진파일은 fread함수를 사용한다
	fread(&num3, sizeof(num3), 1, fp);		//ex)fscanf(fp,"%d %d", &num1, &num2) -> fread(&num1, sizeof(num1), 1, fp)
	fclose(fp);								//()안의 매개변수는 각각(변수, 변수의 자료형의 크기, 읽을횟수, 파일포인터명)이다
	printf("the data input from the %s file is: ",filename);
	printf("%d %d %lf", num1, num2, num3);
	return 0;
}	//program 10.13

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char response;
	char filename[20] = "prices.bin";
	int num1 = 125, num2 = -125;
	double num3 = 1.08;
	char line[100];
	fp = fopen(filename, "r");
	if (fp != NULL)
	{
		printf("a file by the name %s exists.", filename);
		printf("\ndo you want to continue and overwrite it");
		printf("\n with the new data (y or n): ");
		scanf("%c", &response);
		if (response == 'n')
		{
			printf("the existing file %s will not be overwritten.", filename);
			fclose(fp);
			exit(1);
		}
	}
	fp = fopen(filename, "wb");
	if (fp == NULL)
	{
		printf("failed to open %s file", filename);
		exit(1);
	}
	fwrite(&num1, sizeof(num1), 1, fp);
	fwrite(&num2, sizeof(num2), 1, fp);
	fwrite(&num3, sizeof(num3), 1, fp);
	fclose(fp);
	printf("the file %s has successfully been written as a binary file", filename);
	return 0;
}	//chapter 10.6 programming exercise 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char filename[20] = "prices.bin";
	int num1, num2;
	double num3;
	fp = fopen(filename, "rb");
	if (fp == NULL)
	{
		printf("the file %s was not successfully opened.", filename);
		printf("\nplease check that the file currently exists.");
		exit(1);
	}
	fread(&num1, sizeof(num1), 1, fp);
	fread(&num2, sizeof(num2), 1, fp);
	fread(&num3, sizeof(num3), 1, fp);
	fclose(fp);
	printf("the data input from the %s file is: ", filename);
	printf("%d %d %lf", num1, num2, num3);
	return 0;
}   //chapter 10.6 programming exercise 2

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	double n1 = 92.65, n2 = 88.72, n3 = 77.46, n4 = 82.93, avg;
	char filename[20] = "results.bin";
	fp = fopen(filename, "wb");
	if (fp == NULL)
	{
		printf("failed to open %s file");
		exit(1);
	}
	fwrite(&n1, sizeof(n1), 1, fp);
	fwrite(&n2, sizeof(n2), 1, fp);
	fwrite(&n3, sizeof(n3), 1, fp);
	fwrite(&n4, sizeof(n4), 1, fp);
	printf("write success");
	fp = fopen(filename, "rb");
	fread(&n1, sizeof(n1), 1, fp);
	fread(&n2, sizeof(n2), 1, fp);
	fread(&n3, sizeof(n3), 1, fp);
	fread(&n4, sizeof(n4), 1, fp);
	avg = (n1 + n2 + n3 + n4) / 4;
	printf("\naverage: %lf", avg);
	fclose(fp);
	return 0;
}	//chapter 10.6 programming exercise 3

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char filename[20] = "points.bin";
	double n1 = 6.3, n2 = 8.2, n3 = 18.25, n4 = 24.32;
	double n5 = 4.0, n6 = 4.0, n7 = 10.0, n8 = -5.0;
	double n9 = -2.0, n10 = 5.0, n11 = 4.0, n12 = 5.0;
	fp = fopen(filename, "wb");
	if (fp == NULL)
	{
		printf("failed to open file");
		exit(1);
	}
	fwrite(&n1, sizeof(n1), 1, fp);
	fwrite(&n2, sizeof(n2), 1, fp);
	fwrite(&n3, sizeof(n3), 1, fp);
	fwrite(&n4, sizeof(n4), 1, fp);
	fwrite(&n5, sizeof(n5), 1, fp);
	fwrite(&n6, sizeof(n6), 1, fp);
	fwrite(&n7, sizeof(n7), 1, fp);
	fwrite(&n8, sizeof(n8), 1, fp);
	fwrite(&n9, sizeof(n9), 1, fp);
	fwrite(&n10, sizeof(n10), 1, fp);
	fwrite(&n11, sizeof(n11), 1, fp);
	fwrite(&n12, sizeof(n12), 1, fp);
	printf("success");
	fclose(fp);
	return 0;
}	//chapter 10.6 programming exercise 4.a

#include <stdio.h>
#include <stdlib.h>
#define loop 12
int main()
{
	FILE *fp;
	char filename[20] = "points.bin";
	double num[loop];
	double x1, x2, y1, y2, m, cntrx, cntry;
	int i, j = 0;
	fp = fopen(filename, "rb");
	if (fp == NULL)
	{
		printf("failed to open file");
		exit(1);
	}
	for (i = 0; i < 12; i++)
		fread(&num, sizeof(num), 12, fp);
	for (i = 0; i < 3; i++)
	{
		x1 = (num[j]);
		j++;
		y1 = (num[j]);
		j++;
		x2 = (num[j]);
		j++;
		y2 = (num[j]);
		j++;
		m = (y2 - y1) / (x2 - x1);
		cntrx = x2 - x1;
		cntry = y2 - y1;
		printf("m: %lf\ncenter: (%lf, %lf)\n\n", m, cntrx, cntry);
	}
	fclose(fp);
	return 0;
}	//chapter 10.6 programming exercise 4.b

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char filename[20] = "grades.bin";
	double n1 = 90.3, n2 = 92.7, n3 = 90.3, n4 = 99.8;
	double n5 = 85.3, n6 = 90.5, n7 = 87.3, n8 = 90.8;
	double n9 = 93.2, n10 = 88.4, n11 = 93.8, n12 = 75.6;
	double n13 = 82.4, n14 = 95.6, n15 = 78.2, n16 = 90.0;
	double n17 = 93.5, n18 = 80.2, n19 = 92.9, n20 = 94.4;
	fp = fopen(filename, "wb");
	if (fp == NULL)
	{
		printf("failed to open file");
		exit(1);
	}
	fwrite(&n1, sizeof(n1), 1, fp);
	fwrite(&n2, sizeof(n2), 1, fp);
	fwrite(&n3, sizeof(n3), 1, fp);
	fwrite(&n4, sizeof(n4), 1, fp);
	fwrite(&n5, sizeof(n5), 1, fp);
	fwrite(&n6, sizeof(n6), 1, fp);
	fwrite(&n7, sizeof(n7), 1, fp);
	fwrite(&n8, sizeof(n8), 1, fp);
	fwrite(&n9, sizeof(n9), 1, fp);
	fwrite(&n10, sizeof(n10), 1, fp);
	fwrite(&n11, sizeof(n11), 1, fp);
	fwrite(&n12, sizeof(n12), 1, fp);
	fwrite(&n13, sizeof(n13), 1, fp);
	fwrite(&n14, sizeof(n14), 1, fp);
	fwrite(&n15, sizeof(n15), 1, fp);
	fwrite(&n16, sizeof(n16), 1, fp);
	fwrite(&n17, sizeof(n17), 1, fp);
	fwrite(&n18, sizeof(n18), 1, fp);
	fwrite(&n19, sizeof(n19), 1, fp);
	fwrite(&n20, sizeof(n20), 1, fp);
	printf("success");
	fclose(fp);
	return 0;
}	//chapter 10.6 programming exercise 5.a

#include <stdio.h>
#include <stdlib.h>
#define loop 20
int main()
{
	FILE *fp;
	char filename[20] = "grades.bin";
	double num[loop], n1, n2, n3, n4, avg;
	int i, j = 0;
	fp = fopen(filename, "rb");
	if (fp == NULL)
	{
		printf("failed to open file");
		exit(1);
	}
	for (i = 0; i < 20; i++)
		fread(&num, sizeof(num), 20, fp);
	for (i = 0; i < 5; i++)
	{
		n1 = (num[j]);
		j++;
		n2 = (num[j]);
		j++;
		n3 = (num[j]);
		j++;
		n4 = (num[j]);
		j++;
		avg = (n1 + n2 + n3 + n4) / 4;
		printf("average: %lf\n", avg);
	}
	fclose(fp);
	return 0;
}	//chapter 10.6 programming exercise 5.b

#include <stdio.h>
#include <stdlib.h>
#define bell '\07'	//bell코드
#define top_of_page '\014'	//페이지 배출코드
void check(FILE *);
int main()
{
	FILE *printer = fopen("prn", "w");
	check(printer);
	return 0;
}
void check(FILE *printer)
{
	if (printer == 0)
	{
		fputc(bell, stdout);
		printf("the printer cannot be opened for output.");
		printf("\nplease check thte printer is on and ready for use.");
		exit(1);
	}
	else
		fputc(top_of_page, printer);
}	//program 10.14