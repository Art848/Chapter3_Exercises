#include <iostream>
using namespace std;

double fibonacci(int n)
{
    double first = 0;
    double second = 1;
    double next;

    if (n == 0) 
    {
        return 0;
    }

    if (n == 1) 
    {
        return 1;
    }

    for (int i = 2; i <= n; i++)
    {
        next = first + second;

        first = second;
        second = next;
    }

    return second;
}

int main()
{
    int n;

    cout << "Enter number: ";
    cin >> n;

    double fib = fibonacci(n);

    cout << "Fibonacci number: " << fib;
}

