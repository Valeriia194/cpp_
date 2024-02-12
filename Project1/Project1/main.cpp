#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Building {

private:
	int id;
	int maxAge;
	int cost;

	int buildAge = 0;
	int currentCost;

	void destroy() {
		cout << "Build with id " << id << " was destroying with age " << buildAge << endl;
	}

public:

	Building(int _id, int _maxAge, int _cost) : id(_id), maxAge(_maxAge), cost(_cost) {
		currentCost = cost;
	}

	int getCost() {
		return currentCost;
	}

	void toAge(int years) {
		buildAge += years;
		if (maxAge<buildAge) {
			destroy();
		}
		else {
			currentCost = cost - (cost / maxAge) * buildAge;
		}
	}

};

int main() 
{
	Building buildOne(1, 10, 1000);
	cout << "Cost of this building is: " << buildOne.getCost() << "\n\n";

	buildOne.toAge(5);
	cout << "5 years ago the cost of build is: " << buildOne.getCost() << endl;

	buildOne.toAge(7);

	return 0;
}
