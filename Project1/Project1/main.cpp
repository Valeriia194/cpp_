#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// TASK 1 ----------------------------------------------------------------------


class Vehicle {
public:
	
	virtual void start() {
		cout << "Started!";
	};

	virtual void stop() {
		cout << "Stopped!";
	};

};

class Car : public Vehicle {
	virtual void start() {
		cout << "Started in Car!";
	}
	virtual void stop() {
		cout << "Stopped in Car!";
	};
};

class Motorcycle : public Vehicle {

	void acrobatic() {
		cout << "Acrobatic!";
	}
};


int main() {

	Car mercedes;
	Motorcycle moto;
	mercedes.start();
	mercedes.stop();
	moto.acrobatic();


	return 0;
}