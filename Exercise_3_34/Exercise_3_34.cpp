#include <iostream>
using namespace std;

int flip()
{
    int randNum = rand() % 2;

    return randNum;
}

int main()
{
    int headsCount = 0;
    int tailsCount = 0;
    int flipResult;

    for (int i = 1; i <= 100; i++)
    {
        flipResult = flip();

        if (flipResult == 1)
        {
            cout << "Heads" << endl;
            headsCount++;
        }
        else
        {
            cout << "Tails" << endl;
            tailsCount++;
        }
    }

    cout << "Heads count: " << headsCount << endl;
    cout << "Tails count: " << tailsCount << endl;
}