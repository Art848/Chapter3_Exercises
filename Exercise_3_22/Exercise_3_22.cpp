#include <iostream>
using namespace std;

void squareOfAsterisks(int side) {

	for (int i = 0; i < side; i++) {

		for (int j = 0; j < side; j++) {

			cout << "*";
		}

		cout << endl;
	}
}

int main()
{
    int side;
    cout << "Enter the side length of the square: ";
    cin >> side;

    squareOfAsterisks(side);
}