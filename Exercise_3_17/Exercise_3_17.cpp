#include <iostream>
using namespace std;

int main()
{
	//// a)
	//int min = 2;
	//int max = 10;
	//
	//int n = min + rand() % (max - min + 1);

	//if (n % 2 == 0) {
	//	cout << n << endl;
	//}
	//else {
	//	cout << n + 1 << endl;
	//}


	//// b)
	//int min = 3;
	//int max = 11;

	//int n = min + rand() % (max - min + 1);
	// 
	//if(n % 2 == 0) {
	//	cout << n + 1 << endl;
	//}
	//else {
	//	cout << n << endl;
	//}


	// c)
	int min = 6;
	int max = 22;

	int n = min + rand() % (max - min + 1);

	if ((n - 2) % 4 == 0) {
		cout << n << endl;
	}
	else if(n % 2 == 2)
	{
		cout << n + 2 << endl;
	}
	else {
		cout << n + 1 << endl;
	}

}