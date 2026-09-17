#include <iostream>
using namespace std;

int qualityPoints(double average)
{
    if (average >= 90)
    {
        return 4;
    }
    else if (average >= 80) 
    {
        return 3;
    }
    else if (average >= 70)
    {
        return 2;
    }
    else if (average >= 60)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    double average;
    cout << "Enter students average: ";
    cin >> average;

    int points = qualityPoints(average);

    cout << "Quality points: " << points << endl;
}