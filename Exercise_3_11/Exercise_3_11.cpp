#include <iostream>
using namespace std;

int main()
{
    // a)
    double x = fabs(7.5);
    
    cout << x << endl;

    // b)
    double b = floor(7.5);

	cout << b << endl;

    // c)
    double c = fabs(0.0);

	cout << c << endl;

    // d)
    double d = ceil(0.0);

	cout << d << endl;

    // e)
	double e = fabs(-6.4);

	cout << e << endl;

    // f)
	double f = ceil(-6.4);

	cout << f << endl;

    // g)
	double g = ceil( -fabs( - 8 + floor( -5.5 ) ) );

    cout << g << endl;
}