#include <iostream>
using namespace std;

int integerPower(int base, int exponent)
{
	if (base == 0) {
		cout << "Base cannot be zero." << endl;
	}
	else if (exponent <= 0) {
		cout << "Exponent cannot be negative or zero." << endl;
	}

	if ((exponent > 0) && (base != 0)) {
		int result = 1;
		for (int i = 1; i <= exponent; i++)
		{
			result *= base;
		}
		return result;
	}
}

int main()
{
	int base;
	cout << "Enter a base number: ";
	cin >> base;

	int exponent;
	cout << "Enter an exponent number: ";
	cin >> exponent;

	int intPower = integerPower(base, exponent);

	cout << "Integer Power: " << intPower << endl;
}
