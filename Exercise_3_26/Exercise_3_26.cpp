#include <iostream>
using namespace std;

int secondsBetweenTwoTimes(int hours, int minutes, int seconds) 
{
	int const minHours = 12;
	int const maxHours = 24;

	int const minMin = 0;
	int const maxMin = 60;

	int const minSec = 0;
	int const maxSec = 60;

	int lastTimeStruck = 12;

	if (
		(hours >= minHours && hours <= maxHours) &&
		(minutes >= minMin && minutes <= maxMin) && 
		(seconds >= minSec && seconds <= maxSec)
		) 
	{
		hours = hours - lastTimeStruck;

		int const secondsInOneHour = 3600;
		int const secondsInOneMinute = 60;

		int hoursInSeconds = hours * secondsInOneHour;
		int minutesInSeconds = minutes * secondsInOneMinute;

		int secondsBetween = hoursInSeconds + minutesInSeconds + seconds;

		return secondsBetween;
	}
	else {
		cout << "Seconds must be between 0 and 60" << endl;
		cout << "Minutes must be between 0 and 60" << endl;
		cout << "Hours must be between 12 and 24" << endl;
	}
}

int main()
{
	int hours;
	cout << "Enter hours of time now: ";
	cin >> hours;

	int minutes;
	cout << "Enter minutes of time now: ";
	cin >> minutes;

	int seconds;
	cout << "Enter seconds of time now: ";
	cin >> seconds;

	
	int result = secondsBetweenTwoTimes(hours, minutes, seconds);
	cout << "Seconds between lastTimeStruck 12 and now is : " << result;
}