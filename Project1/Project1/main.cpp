#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() 
{

	cout << "Enter the time in seconds from start of the day: ";
	int seconds;
	cin >> seconds;

	int hours = (seconds/60)/60;
	int minutes = (seconds - hours*60*60)/60;
	int secondsNow = seconds - (seconds - hours * 60 * 60) - minutes*60;

	cout << endl << "Time now is: " << hours << " hours " << minutes << " minutes " << seconds << " seconds ";


	return 0;
}
