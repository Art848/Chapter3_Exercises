#include <iostream>
using namespace std;

int gcd(int x, int y)
{
    if (y == 0)
    {
        return x;
    }

    return gcd(y, x % y);
}

int main()
{
    int x, y;

    cout << "Enter two integers: ";
    cin >> x >> y;

    cout << "Greatest common divisor is: " << gcd(x, y) << endl;
}