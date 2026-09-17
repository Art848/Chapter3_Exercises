#include <iostream>
using namespace std;

int getRandomOneDigitNumber() 
{
	int number = 1 + rand() % 9;

	return number;
}

int main()
{
	int n1 = getRandomOneDigitNumber();
	int n2 = getRandomOneDigitNumber();

	cout << "How much is " << n1 << " times " << n2 << "?" << endl;

	cout << "Enter the answer (0 to end): ";

	int answer;
	cin >> answer;

	while (answer != 0) 
	{
		if (n1 * n2 == answer) 
		{
			cout << "Very good!" << endl;

			n1 = getRandomOneDigitNumber();
			n2 = getRandomOneDigitNumber();

			cout << "How much is " << n1 << " times " << n2 << "?" << endl;

			cout << "Enter the answer: ";
			cin >> answer;
		}
		else 
		{
			cout << "No. Please try again." << endl;

			cout << "How much is " << n1 << " times " << n2 << "?" << endl;

			cout << "Enter the answer: ";
			cin >> answer;
		}
	}
}