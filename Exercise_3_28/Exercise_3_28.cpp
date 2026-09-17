#include <iostream>
using namespace std;

double smallest(double a, double b, double c)
{
    double min = a;

    if (b < min) 
    {
        min = b;
    }

    if (c < min) 
    {
        min = c;
    }

    return min;
}

int main()
{
    double a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    
    double smallestNumber = smallest(a, b, c);
    cout << "Smallest number: " << smallestNumber << endl;
}