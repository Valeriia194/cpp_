#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int main() {

	int mainNumber;

	cout << "Enter the number: ";
	cin >> mainNumber;
	cout << "Number vice versa: ";

	int four = mainNumber % 10;

	mainNumber /= 10;
	int three = mainNumber % 10;
	mainNumber /= 10;
	int two = mainNumber % 10;
	mainNumber /= 10;
	int one = mainNumber % 10;

	cout << four << three << two << one;


	return 0;
}

/*int main()
{

	int time = 86400;
	int a;

	cout << "The time in seconds since beginning of the day: " << endl;
	cin >> a;

	int h = a % time / 3600;
	int m = a / 60 % 60;
	int s = a % 60;
	int endh, endm, ends;
	int tmp = h * 3600 + m * 60 + s;

	tmp = time - tmp;

	endh = tmp / 3600;
	endm = tmp / 60 - endh * 60;
	ends = tmp - endm * 60 - endh * 3600;

	cout << "Time now: " << h << " h: " << m << " m: " << s << " s" << endl;
	cout << "Time to midnight: " << endh << " h: " << endm << " m: " << ends << " s" << endl;

	return 0;

}

 */