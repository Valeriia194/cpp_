#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Musician {
private:
	string name;
	string instrument;

public:
	Musician(string _name, string _instrument){
		this->name = _name;
		this->instrument = _instrument;
	}
};

class Band {
public:
	Musician* first = new Musician("Name", "Instrument");
	Musician* second = new Musician("Name2", "Instrument2");

	void play() {
		cout << first << endl << second << endl;
	}
};

int main() 
{
	Band band;
	band.play();

	return 0;
}
