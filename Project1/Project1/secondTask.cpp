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
	// показываем остаток от деления 567 на 10 на экран
	int three = mainNumber % 10;
	mainNumber /= 10;
	int two = mainNumber % 10;
	mainNumber /= 10;
	int one = mainNumber % 10;

	cout << four << three << two << one;


	return 0;
}