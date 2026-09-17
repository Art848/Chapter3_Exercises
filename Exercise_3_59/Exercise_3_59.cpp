#include <iostream>
using namespace std;

template <class T>
T maxValue(T a, T b, T c)
{
    T largest = a;

    if (b > largest) 
    {
        largest = b;
    }

    if (c > largest) 
    {
        largest = c;
    }

    return largest;
}

int main()
{
    int a = 10, b = 25, c = 15;

    char d = 'A', e = 'Z', f = 'M';

    double g = 5.5, h = 9.2, i = 3.7;

    cout << "Largest integer: " << maxValue(a, b, c) << endl;

    cout << "Largest character: " << maxValue(d, e, f) << endl;

    cout << "Largest floating-point number: " << maxValue(g, h, i) << endl;
}