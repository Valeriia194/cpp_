#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Number {
public:
	virtual void num() {
	}

	virtual void show() {
	}
};

class Integer : public Number {
private:
	int newNum;
public:
	void num(int num) {
		newNum = num + num;
	}
	void show() {
		cout << "Integer "<< newNum << endl;
	}
};

class Real : public Number {
private:
	int newNum;
public:
	void num(int num) {
		newNum = num + num;
	}
	void show() {
		cout << "Real num "<<newNum << endl;
	}
};

int main() 
{

	Integer inter;
	Real realN;

	inter.num(2);
	inter.show();

	realN.num(3);
	realN.show();


	return 0;
}
