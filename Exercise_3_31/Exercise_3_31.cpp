#include <iostream>
using namespace std;

void reverse(int number) {
	while (number > 0) {
		int last = number % 10;
		if (last > 0) {
			cout << last;
		}
		number = number / 10;
	}
}

int main()
{
	int number;
	cout << "Enter the number equal or higher 1: ";
	cin >> number;

	reverse(number);
}