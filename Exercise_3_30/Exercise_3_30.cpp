#include <iostream>
using namespace std;

bool isPrime(int number) {
	int count = 0;

	for (int i = 2; i <= number; i++) 
	{
		if (number % i == 0) {
			count++;
		}
	}

	if (count == 1) {
		return true;
	}
	else 
	{
		return false;
	}
}

int main()
{
	bool prime = false;

	for (int i = 2; i <= 10000; i++) 
	{
		prime = isPrime(i);
	
		if (prime) 
		{
			cout << i << endl;
		}
	}
}