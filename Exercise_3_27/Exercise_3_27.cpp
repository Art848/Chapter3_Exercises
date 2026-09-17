#include <iostream>
using namespace std;

// a)
double celsius(double fahrenheit) {
    double celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}

// b)
double fahrenheit(double celsius) {
    double fahrenheit = (celsius * 9 / 5) + 32;
    return fahrenheit;
}

int main()
{
    cout << "Celsius\tFahrenheit" << endl;

    for (int cel = 0; cel <= 100; cel++)
    {
        cout << cel << "\t" << fahrenheit(cel) << endl;
    }

    cout << endl;

    cout << "Fahrenheit\tCelsius" << endl;

    for (int f = 32; f <= 212; f++)
    {
        cout << f << "\t" << celsius(f) << endl;
    }

}

