#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// TASK 1 ----------------------------------------------------------------------

/*
class Rectangle {

	private:
		int height;
		int width;

	public:
		void setHeight() {
			int h;
			cout << "Enter the height of rectangle: ";
			cin >> h;
			height = h;
		}

		int getHeight() {
			return this->height;
		}

		void setWidth() {
			int w;
			cout << "Enter the width of rectangle: ";
			cin >> w;
			width = w;
		}

		int getWidth() {
			return this->width;
		}

		void sqr() {
			cout << endl << "The square is: " << height * width;
		}
		void perimetre() {
			cout << endl<< "The perimetre is: "<<
				 ((height + width) * 2);
		}
		void draw() {
			cout <<endl<< " ----" << endl << "|    |" <<endl<< " ----";
		}
	};


int main() 
{
	Rectangle r;
	r.setHeight();
	r.setWidth();
	r.sqr();
	r.perimetre();
	r.draw();

	return 0;
}

*/

// TASK 2 ----------------------------------------------------------------------


	class Triangle {
	private:
		int catet_1;
		int catet_2;

	public:
		void setCatets() {
			int c1, c2;
			cout << "Enter the length of the first catet: ";
			cin >> c1;
			catet_1 = c1;
			cout << "Enter the length of the second catet: ";
			cin >> c2;
			catet_2 = c2;
		}

		void square() {
			cout << "The square of triangle is: " << ((catet_1 * catet_2) / 2)<< endl;
		}

		void gipotenusa() {
			int g = (catet_1*catet_1) + (catet_2*catet_2);
			cout << "Gipotenusa is: "<< sqrt(g);
		}

	};

int main() {

	Triangle t;
	t.setCatets();
	t.square();
	t.gipotenusa();


	return 0;
}