#include <iostream>
using namespace std;

int power(int base, int exponent)
{
    if (exponent == 1) 
    {
        cout << base << endl;
        return base;
    }

    cout << base * power(base, exponent - 1) << endl;

    return base * power(base, exponent - 1);
}

int main()
{
    int base, exponent;

    cout << "Enter base and exponent integer numbers: ";
    cin >> base >> exponent;

    power(base, exponent);
}