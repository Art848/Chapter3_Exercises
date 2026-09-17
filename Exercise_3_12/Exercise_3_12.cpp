#include <iostream>
using namespace std;

double calculateCharges(double hours);

int main()
{
	cout << "Car" << "\t" << "Hours" << "\t" << "Charge" << "\t" << endl;

	int carNumber;

	cout << "Enter car number (-1 to end): ";
	
	cin >> carNumber;

	double hours;

	double totalHours = 0;
	
	double totalCharges = 0;


	while (carNumber != -1) {
		cout << "Enter hours parked: ";

		cin >> hours;
		
		totalHours += hours;

		double calculatedCharge = calculateCharges(hours);
		
		totalCharges += calculatedCharge;

		cout << carNumber << "\t" << hours << "\t" << calculatedCharge << "\t" << endl;
	
		cout << "Enter car number (-1 to end): ";

		cin >> carNumber;
	}

	cout << "TOTAL" << "\t" << totalHours << "\t" << totalCharges << endl;
}

double calculateCharges(double hours)
{

	double const minimumFee = 2.00;

	int const minimumFeeHours = 3;

	int const maximumHours = 24;

	double const additionalFee = 0.50;

	double const maximumFee = 10.00;


	if (hours <= minimumFeeHours) {

		return minimumFee;
	}
	else if (hours > minimumFeeHours && hours < maximumHours) {

		double totalFee = minimumFee + (additionalFee * (hours - minimumFeeHours));

		return (totalFee > maximumFee) ? maximumFee : totalFee;
	}
	else {

		return maximumFee;
	}
}