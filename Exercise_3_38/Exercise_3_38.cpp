#include <iostream>
using namespace std;

int getRandomNumber1To1000()
{
	int number = 1 + rand() % 1000;

	return number;
}

int main()
{
	int randomNumber = getRandomNumber1To1000();

	cout << "I have a number between 1 and 1000." << endl 
		<< "Can you guess my number?" << endl
		<< "Please type your first guess. ";

	int guessedNumber;
	cin >> guessedNumber;

	int numberOfGuesses = 0;

	while (guessedNumber) 
	{
		numberOfGuesses++;

		cout << numberOfGuesses << endl;

		if (guessedNumber == randomNumber) 
		{
			if (numberOfGuesses < 10)
			{
				cout << "Either you know the secret or you got lucky!" << endl;
			}
			else if (numberOfGuesses == 10)
			{
				cout << "Ahah! You know the secret!" << endl;
			}
			else 
			{
				cout << "You should be able to do better!" << endl;
			}

			cout << "Excellent I You guessed the number!" << endl
				<< "Would you like to play again(y or n) ? ";
			
			char answer;
			cin >> answer;

			if (answer == 'y') 
			{
				randomNumber = getRandomNumber1To1000();
				
				numberOfGuesses = 0;
				
				cout << "I have a number between 1 and 1000." << endl
					<< "Can you guess my number?" << endl
					<< "Please type your first guess. ";

				cin >> guessedNumber;
			}
			else if(answer == 'n')
			{
				break;
			}
		}
		else if (guessedNumber < randomNumber) 
		{
			cout << "Too low. Try again." << endl;

			cin >> guessedNumber;
		}
		else if (guessedNumber > randomNumber)
		{
			cout << "Too high. Try again." << endl;

			cin >> guessedNumber;
		}
	}
}