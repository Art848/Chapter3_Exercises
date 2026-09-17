#include <iostream>
using namespace std;

int getRandomOneDigitNumber()
{
	int number = 1 + rand() % 9;

	return number;
}

string getRandomReactionsToAnswers(bool correctAnswer) {
	int number = 1 + rand() % 4;

	if (correctAnswer) {
		switch (number)
		{
		case 1:
			return "Very good!";

		case 2:
			return "Excellent!";

		case 3:
			return "Nice work!";

		case 4:
			return "Keep up the good work!";
		}
	}
	else
	{
		switch (number)
		{
		case 1:
			return "No. Please try again.";

		case 2:
			return "Wrong. Try once more.";

		case 3:
			return "Don't give up!";

		case 4:
			return "No. Keep trying.";
		}
	}
}

int main()
{
	int n1 = getRandomOneDigitNumber();
	int n2 = getRandomOneDigitNumber();

	cout << "How much is " << n1 << " times " << n2 << "?" << endl;

	cout << "Enter the answer (0 to end): ";

	int answer;
	cin >> answer;

	string reaction;

	while (answer != 0) 
	{
		if (n1 * n2 == answer) 
		{
			reaction = getRandomReactionsToAnswers(true);

			cout << reaction << endl;

			n1 = getRandomOneDigitNumber();
			n2 = getRandomOneDigitNumber();

			cout << "How much is " << n1 << " times " << n2 << "?" << endl;

			cout << "Enter the answer: ";
			cin >> answer;
		}
		else
		{
			reaction = getRandomReactionsToAnswers(false);

			cout << reaction << endl;

			cout << "How much is " << n1 << " times " << n2 << "?" << endl;

			cout << "Enter the answer: ";
			cin >> answer;
		}
	}
}