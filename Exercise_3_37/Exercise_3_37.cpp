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

	cout << "Enter the answer: ";

	int answer;
	cin >> answer;

	string reaction;

	int correctAnswersCount = 0;
	int incorrectAnswersCount = 0;

	int const answersCountForChecking = 10;
	
	int const checkingPercentPoint = 75;
	int const totalPercent = 100;

	while (answer != 0) 
	{
		if (correctAnswersCount + incorrectAnswersCount == answersCountForChecking) 
		{
			int percentageOfCorrectAnswers = (correctAnswersCount / answersCountForChecking) * totalPercent;

			if (percentageOfCorrectAnswers < checkingPercentPoint)
			{
				cout << "Please ask your instructor for extra help";

				break;
			}
			else 
			{
				correctAnswersCount = 0;
				incorrectAnswersCount = 0;
			}
		}
		else 
		{
			if (n1 * n2 == answer) {
				reaction = getRandomReactionsToAnswers(true);

				cout << reaction << endl;
				correctAnswersCount++;

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
				incorrectAnswersCount++;

				cout << "How much is " << n1 << " times " << n2 << "?" << endl;

				cout << "Enter the answer: ";
				cin >> answer;
			}
		}
	}
}