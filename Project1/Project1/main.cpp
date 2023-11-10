#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

class Basic {
	public:
		virtual void square() = 0;
	};

class Rect : public Basic {
public:
	void square(){
	cout << "Square of Rect" << endl;
	}
};

class Circuit : public Basic {
public:
	void square() {
		cout << "Square of Circuit" << endl;
	}
};

class Triangle : public Basic {
public:
	void square() {
		cout << "Square of Triangle" << endl;
	}
};

class Trapeze : public Basic {
public:
	void square() {
		cout << "Square of Trapeze" << endl;
	}
};


int main() 
{
	Basic* rect = new Rect();
	Basic* circ = new Circuit();
	Basic* tri = new Triangle();
	Basic* trap = new Trapeze();

	vector <Basic*> base;
	base.push_back(rect);
	base.push_back(circ);
	base.push_back(tri);
	base.push_back(trap);

	for (auto el : base) {
		el->square();
	}


	return 0;
}
