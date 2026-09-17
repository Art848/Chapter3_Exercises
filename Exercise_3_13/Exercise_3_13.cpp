#include <iostream>
using namespace std;

int roundToNearestInteger(double number, double const roundingValue = 0.5)
{
	int roundedToNearestInteger = floor(number + roundingValue);

	return roundedToNearestInteger;
}

int main()
{
	double number;
	cout << "Enter a number to round to the nearest integer: (-1 to end): ";
	cin >> number;

	double roundedToNearestInteger;

	while(number != -1)
	{
		roundedToNearestInteger = roundToNearestInteger(number);

		cout << "Original Number: " << number << endl; 
		
		cout << "Rounded to the nearest integer: " << roundedToNearestInteger << endl;
		
		cout << "Enter a number: (-1 to end): ";
		cin >> number;
	}
}