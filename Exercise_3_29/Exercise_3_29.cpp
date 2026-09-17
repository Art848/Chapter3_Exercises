#include <iostream>
using namespace std;

void getFactorsOfNumber(int number)
{
    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            cout << i << "  ";
        }
    }
    cout << "are the factors";
}

bool isPerfect(int number) 
{
    int sumOfFactors = 0;

    for (int i = 1; i < number; i++) 
    {
        if (number % i == 0) 
        {
            sumOfFactors += i;
        }
    }

    if (sumOfFactors == number) 
    {
        cout << "The number " << number << " is a perfect number" << endl;
        return true;
    }
    else 
    {
        return false;
    }
}


int main()
{
    bool perfect = false;

    for (int i = 1; i < 1000; i++) 
    {
        perfect = isPerfect(i);

        if (perfect) 
        {
            getFactorsOfNumber(i);
            cout << endl;
        }
    }
}