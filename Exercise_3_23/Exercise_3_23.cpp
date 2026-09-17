#include <iostream>
using namespace std;

void createSquareWithCharacter(int side, char fillCharacter) {

	for (int i = 0; i < side; i++) {

		for (int j = 0; j < side; j++) {

			cout << fillCharacter;
		}

		cout << endl;
	}
}

int main()
{
	int side;
	cout << "Enter the side length of the square: ";
	cin >> side;

	char fillCharacter;
	cout << "Enter the character to fill the square: ";
	cin >> fillCharacter;

	createSquareWithCharacter(side, fillCharacter);
}