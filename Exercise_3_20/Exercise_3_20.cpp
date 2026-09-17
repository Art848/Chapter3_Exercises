#include <iostream>
using namespace std;

bool isMultiple(int number1, int number2)
{
    if (number2 % number1 == 0) {
        return true;
    }
    else {
        return false;
    }
}

int main()
{
    int number1;
	cout << "Enter the first integer (0 to end): ";
    cin >> number1;

	int number2;
	cout << "Enter the second integer (0 to end): ";
    cin >> number2;

    bool multiple;

	while (number1 != 0 || number2 != 0) {
		multiple = isMultiple(number1, number2);

        if (multiple) {
            cout << number2 << " is a multiple of " << number1 << endl;
        }
        else {
            cout << number2 << " is not a multiple of " << number1 << endl;
        }

        cout << "Enter the first integer (0 to end): ";
        cin >> number1;
        cout << "Enter the second integer (0 to end): ";
        cin >> number2;
    }
}