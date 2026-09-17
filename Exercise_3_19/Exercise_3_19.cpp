#include <iostream>
using namespace std;

double hypotenuse(double side1, double side2)
{
	double side1Pow2 = pow(side1, 2);
	double side2Pow2 = pow(side2, 2);

    double hypotenuse = sqrt(side1Pow2 + side2Pow2);

    return hypotenuse;
}

int main()
{
	cout << "Triangle" << "\t" << "Side 1" << "\t" << "Side 2" << "\t" << "Hypotenuse" << endl;

	int triangleNumber;
	cout << "Enter the triangle number (-1 to end): ";
	cin >> triangleNumber;

    double side1;
	cout << "Enter the length of side 1:";
    cin >> side1;

	double side2;
	cout << "Enter the length of side 2:";
	cin >> side2;

	while (triangleNumber != -1)
	{
		double hypotenuseLength = hypotenuse(side1, side2);
		cout << "The length of the hypotenuse is: " << hypotenuseLength << endl;

		cout << "Enter the triangle number (-1 to end): ";
		cin >> triangleNumber;

		cout << "Enter the length of side 1:";
		cin >> side1;
		
		cout << "Enter the length of side 2:";
		cin >> side2;
	}
}