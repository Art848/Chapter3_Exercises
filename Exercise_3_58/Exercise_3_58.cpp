#include <iostream>
using namespace std; 

template <typename T>
T minValue(T a, T b)
{
    if (a < b) 
    {
        return a;
    }
    else 
    {
        return b;
    }
}

int main()
{
    int a = 10, b = 20;

    char c = 'A', d = 'Z';

    double e = 5.5, f = 3.2;

    cout << "Smaller integer: " << minValue(a, b) << endl;

    cout << "Smaller character: " << minValue(c, d) << endl;

    cout << "Smaller floating-point number: " << minValue(e, f) << endl;
}