#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Rectangle {

	private:
		int height;
		int width;

	public:
		void getHeight(int h) {
			int height = h;
		}
		void getWidth(int w) {
			int width = w;
		}
		void sqr() {
			cout << "The square is: " << height * width;
		}
		int p(int h, int w) {
			cout << "The perimetre is: ";
				return ((h + w) * 2);
		}
	};


int main() 
{
	Rectangle r;
	r.getHeight(3);
	r.getWidth(2);
	r.sqr();
	

	return 0;
}
