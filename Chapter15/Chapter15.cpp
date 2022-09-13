//program 15.2
#include <iostream>
#include <iomanip>		//setw()선언시 필요
using namespace std;

int main()
{
	double price, total;
	int units;
	cout << "enter the price: ";			//c: printf
	cin >> price;							//c: scanf
	cout << "enter the number sold: ";		//c: printf
	cin >> units;							//c: scanf
	total = price * units;
	cout << "the total for the " << units << " units is $" << fixed << setw(4) << setprecision(2) << total << endl;
	//fixed=? setw(4)<<setprecision(2)== %4.2f endl=\n
	return 0;
}

//c program 15.1
#include <stdio.h>

int main()
{
	double price, total;
	int units;
	printf("enter the price: ");
	scanf("%lf", &price);
	printf("enter the number sold: ");
	scanf("%d", &units);
	total = price * units;
}

//c++ program 15.2
#include <iostream>
using namespace std;

int main()
{
	double price, total;
	int units;
	cout << "enter the price: ";
	cin >> price;
	cout << "enter the number sold: ";
	cin >> units;
	total = price * units;
}

//chapter 15.1 exercise 1
#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
	cout << "hello world" << endl;												//a
	cout << "enter an integer value" << endl;									//b
	cout << "the sum of " << 5 << " and " << 6 << " is " << 5 + 6 << endl;		//c
	cout << num1 << " plus " << num2 << " is " << num1 + num2 << endl;			//d
	return 0;
}

//chapter 15.1 exercise 2
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int result, num1, num2;
	cout << setw(4) << 5 << endl;																							//a
	cout << setw(3) << result << endl;																						//b
	cout << "the sum of " << setw(3) << num1 << " and " << setw(3) << num2 << " is " << setw(3) << num1 + num2 << endl;		//c
	cout << fixed << setw(5) << setprecision(2) << 2.756 << endl;															//d
}

//chapter 15.1 exercise 3
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int units, price;
	cin >> units;
	cin >> price;
	cin >> units >> price;
}

//chapter 15.1 programming exercise 1.a
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int cent50 = 12, cent25 = 20, cent10 = 32, cent5 = 45, cent1 = 27, dollar, cent, total = 0;
	cent50 = cent50 * 50;
	cent25 = cent25 * 25;
	cent10 = cent10 * 10;
	cent5 = cent5 * 5;
	cent1 = cent1 * 1;
	total = cent50 + cent25 + cent10 + cent5 + cent1;
	dollar = total / 100;
	cent = total % 100;
	cout << "$" << dollar << "." << cent << endl;
	return 0;
}

//chapter 15.1 programming exercise 1.b
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int cent5 = 27, cent10 = 19, cent1 = 42, dollar, cent, total = 0;
	cent10 = cent10 * 10;
	cent5 = cent5 * 5;
	cent1 = cent1 * 1;
	total = cent10 + cent5 + cent1;
	dollar = total / 100;
	cent = total % 100;
	cout << "$" << dollar << "." << cent << endl;
	return 0;
}

//chapter 15.1 programming exercise 2.a
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float mile = 183.67, hr;
	int speed = 58;
	hr = mile / speed;
	cout << fixed << setw(4) << setprecision(2) << hr << "h" << endl;
	return 0;
}

//chapter 15.1 programming exercise 2.b
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float mile = 372, speed = 67;
	float hr;
	hr = mile / speed;
	cout << hr;
	return 0;
}

//chapter 15.1 programming exercise 3.a
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int i, n = 50, a = 1, d = 5, sum = 0;
	sum = (n / 2) * (2 * a + (n - 1) * d);
	cout << sum;
}

//chapter 15.1 programming exercise 3.b
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int i, n = 450, a = 100, d = 4, sum = 0;
	sum = (n / 2) * (2 * a + (n - 1) * d);
	cout << sum;
}

//chapter 15.1 programming exercise 4
#include <iostream>
#include <iomanip>
#define pi 3.1416
using namespace std;

int main()
{
	float r, c;
	cout << "enter the radius of a circle: ";
	cin >> r;
	c = 2 * pi * r;
	cout << "circumference is " << c;
}

//chapter 15.1 programming exercise 5
#include <iostream>
using namespace std;
int main()
{
	float kilo, gas, avg;
	cout << "enter the kilometers driven: ";
	cin >> kilo;
	cout << "enter the liters of gas used: ";
	cin >> gas;
	avg = kilo / gas;
	cout << "average is " << avg << "km/l";
}

//chapter 15.1 programming exercise 6.a, 6.b
#include <iostream>
using namespace std;

int main()
{
	int n1, n2, n3, n4;
	float avg;
	cout << "enter a number: ";
	cin >> n1;
	cout << "enter a second number: ";
	cin >> n2;
	cout << "enter a third number: ";
	cin >> n3;
	cout << "enter a foruth number: ";
	cin >> n4;
	avg = (n1 + n2 + n3 + n4) / 4;
	cout << "average is " << avg;
	return 0;
}