#include <iostream>
using namespace std;

double distance(double x1, double y1, double x2, double y2) {
    double distance = sqrt(
        (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)
    );

    return distance;
}

int main()
{
    double x1, y1, x2, y2;

    cout << "Enter number for points (x1, y1) then (x2, y2): ";
    cin >> x1 >> y1 >> x2 >> y2;

    double distanceBetweenTwoPoints = distance(x1, y1, x2, y2);
    
    cout << "Distance between two points are: " << distanceBetweenTwoPoints;
}