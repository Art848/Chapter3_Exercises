#include <iostream>
using namespace std;

int getRandomOneDigitNumber()
{
	int number = 1 + rand() % 9;

	return number;
}

int getRandomTwoDigitNumber()
{
	int min = 10;
	int max = 99;

	int number = min + rand() % (max - min + 1);

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

int calculateAnswer(int n1, int n2, int operation)
{
	switch (operation)
	{
	case 1:
		return n1 + n2;

	case 2:
		return n1 - n2;

	case 3:
		return n1 * n2;

	case 4:
		return n1 / n2;
	}

	return 0;
}

int main()
{
	int gradeLevel;

	cout << "Enter a grade level (1 or 2): ";
	cin >> gradeLevel;

	int n1;
	int n2;

	if (gradeLevel == 1) 
	{
		n1 = getRandomOneDigitNumber();
		n2 = getRandomOneDigitNumber();
	}
	else if (gradeLevel == 2) 
	{
		n1 = getRandomTwoDigitNumber();
		n2 = getRandomTwoDigitNumber();
	}

	int problemType;

	cout << "Choose problem type:" << endl;
	cout << "1 - Addition" << endl;
	cout << "2 - Subtraction" << endl;
	cout << "3 - Multiplication" << endl;
	cout << "4 - Division" << endl;
	cout << "5 - Random" << endl;

	cin >> problemType;

	int operation = problemType;

	if (problemType == 5)
	{
		operation = 1 + rand() % 4;
	}

	if (operation == 1) 
	{
		cout << "How much is " << n1 << " + " << n2 << "?" << endl;
	}
	else if (operation == 2) 
	{
		cout << "How much is " << n1 << " - " << n2 << "?" << endl;
	}
	else if (operation == 3) 
	{
		cout << "How much is " << n1 << " * " << n2 << "?" << endl;
	}
	else if (operation == 4) 
	{
		cout << "How much is " << n1 << " / " << n2 << "?" << endl;
	}

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
			if (calculateAnswer(n1, n2, operation) == answer) {
				reaction = getRandomReactionsToAnswers(true);

				cout << reaction << endl;
				correctAnswersCount++;

				if (gradeLevel == 1)
				{
					n1 = getRandomOneDigitNumber();
					n2 = getRandomOneDigitNumber();
				}
				else if (gradeLevel == 2)
				{
					n1 = getRandomTwoDigitNumber();
					n2 = getRandomTwoDigitNumber();
				}

				if (problemType == 5)
				{
					operation = 1 + rand() % 4;
				}

				if (operation == 1)
				{
					cout << "How much is " << n1 << " + " << n2 << "?" << endl;
				}
				else if (operation == 2)
				{
					cout << "How much is " << n1 << " - " << n2 << "?" << endl;
				}
				else if (operation == 3)
				{
					cout << "How much is " << n1 << " * " << n2 << "?" << endl;
				}
				else if (operation == 4)
				{
					cout << "How much is " << n1 << " / " << n2 << "?" << endl;
				}

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