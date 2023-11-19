#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Wheel {
private:
	int diametre;
	string material;

public:
	Wheel(int _diametre, string _material){
		this->diametre = _diametre;
		this->material = _material;
	}
};

class Car {
public:
	Wheel* first = new Wheel(3, "Instrument");
	Wheel* second = new Wheel(12, "Instrument2");

	void play() {
		cout << first << endl << second << endl;
	}
};

int main() 
{
	Car car;
	car.play();

	return 0;
}
