#include <iostream>
using namespace std;

int gcd(int a, int b) 
{
    int greatestCommonDivisor;

    if (a < b) 
    {
        for (int i = 1; i <= a; i++) 
        {
            if (a % i == 0 && b % i == 0) 
            {
                greatestCommonDivisor = i;
            }
        }
    }
    else 
    {
        for (int i = 1; i <= b; i++) 
        {
            if (a % i == 0 && b % i == 0) 
            {
                greatestCommonDivisor = i;
            }
        }
    }

    return greatestCommonDivisor;
}

int main()
{
    int a, b;
    cout << "Enter two integer numbers: ";
    cin >> a >> b;

    int greatestCommonDivisor = gcd(a, b);

    cout << greatestCommonDivisor;
}