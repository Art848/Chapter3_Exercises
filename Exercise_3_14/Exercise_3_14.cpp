#include <iostream>
using namespace std;

int roundToInteger(double number, double const roundingValue = 0.5)
{
	int roundedToNearestInteger = floor(number + roundingValue);

	return roundedToNearestInteger;
}

int roundToTenths(double number, double const roundingValue = 0.5, double const tenth = 10)
{
	int roundedToNearestInteger = floor((number * tenth) + roundingValue) / tenth;

	return roundedToNearestInteger;
}

int roundToHundredths(double number, double const roundingValue = 0.5, double const hundredth = 100)
{
	int roundedToNearestInteger = floor((number * hundredth) + roundingValue) / hundredth;

	return roundedToNearestInteger;
}

int roundToThousandths(double number, double const roundingValue = 0.5, double const thousandth = 1000)
{
	int roundedToNearestInteger = floor((number * thousandth) + roundingValue) / thousandth;

	return roundedToNearestInteger;
}

int main()
{
	double number;
	cout << "Enter a number to round to the nearest integer: (-1 to end): ";
	cin >> number;

	double roundedToInteger;
	double roundedToTenths;
	double roundedToHundreths;
	double roundedToThousandths;

	while (number != -1)
	{
		roundedToInteger = roundToInteger(number);
		roundedToTenths = roundToTenths(number);
		roundedToHundreths = roundToHundredths(number);
		roundedToThousandths = roundToThousandths(number);

		cout << "Original Number: " << number << endl;

		cout << "Rounded to the nearest integer: " << roundedToInteger << endl;
		cout << "Rounded to the nearest tenth: " << roundedToTenths << endl;
		cout << "Rounded to the nearest hundredth: " << roundedToHundreths << endl;
		cout << "Rounded to the nearest thousandth: " << roundedToThousandths << endl;

		cout << "Enter a number: (-1 to end): ";
		cin >> number;
	}
}