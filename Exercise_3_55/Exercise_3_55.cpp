#include <iostream>
using namespace std;

inline double circleArea(double radius)
{
    double PI = 3.14159;

    return PI * radius * radius;
}

int main()
{
    double radius;

    cout << "Enter the radius: ";
    cin >> radius;

    cout << "Area: " << circleArea(radius) << endl;
}