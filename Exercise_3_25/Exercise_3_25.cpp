#include <iostream>
using namespace std;

int main()
{
	//int a;
	//cout << "Enter the integer number a: ";
	//cin >> a;

	//int b;
	//cout << "Enter the integer number b: ";
	//cin >> b;


	//// a)
	//int quotientPart = a / b;

	//cout << "Part of quotient when integer " << a << " divided by integer " << b << " is " << quotientPart << endl;


	//// b)
	//int remainder = a % b;

	//cout << "Remainder when integer " << a << " divided by integer " << b << " is " << remainder;

	
	// c)
	int number;
	cout << "Enter an integer number between 1 and 32767: ";
	cin >> number;

	int divisor = 10000;
	
	while (number / divisor == 0)
	{
		divisor = divisor / 10;
	}

	while (divisor > 0)
	{
		if (number / divisor == 0) 
		{
			divisor = divisor / 10;
		}

		cout << number / divisor;

		number = number % divisor;

		divisor = divisor / 10;

		if (divisor > 0)
		{
			cout << "  ";
		}
	}
}