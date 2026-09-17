#include <iostream>
using namespace std;

bool isEven(int number) {
	if (number % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}

int main()
{
    int number;
    cout << "Enter the integer (0 to end): ";
    cin >> number;

    bool even;

    while (number != 0) {
        
		even = isEven(number);

        if (even) {
            cout << number << " is even" << endl;
        }
        else {
            cout << number << " is not even" << endl;
        }

        cout << "Enter the integer (0 to end): ";
        cin >> number;
    }
}